#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,u;
    scanf("%d",&t);
    while(t--)
    {
        int num,s=0;
        scanf("%d%d",&l,&u);
        for(int i=l;i<=u;i++)
        {
            int c=0;
            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            int tmp=sqrt(i);
            if(tmp==sqrt(i))
            {
                c=c*2-1;
            }
            else
            {
                c=c*2;
            }
            if(c>s)
            {
                s=c;
                num=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,num,s);
    }
    return 0;
}
