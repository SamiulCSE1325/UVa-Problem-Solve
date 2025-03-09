#include<bits/stdc++.h>
#define M 1000009
using namespace std;
bool marked[M];
vector<int>vec;
void sieve(int n)
{
    for(int i=4; i<=n; i+=2)
        marked[i]=true;
    for(int i=3; i*i<=n; i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                marked[j]=true;
            }
        }
    }
    vec.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(marked[i]==false)
        {
            vec.push_back(i);
        }
    }
}
main()
{
    int m,r,f,i,t;
    sieve(1000009);
    while(scanf("%d",&m)!=EOF)
    {
        int i,j,k,f=0;
        if(m==0)
            break;
        for(i=2; i<=m/2; i++)
        {
            if(marked[i]==false)
            {
                for(k=m; k>1; k--)
                {
                    if(marked[k]==false)
                    {
                        if(i+k==m)
                            f++;
                    }
                }
            }
        }
        cout<<f<<endl;
        f=0;
    }
}
