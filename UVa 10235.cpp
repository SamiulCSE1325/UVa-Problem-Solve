#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,i,m,rev,r,p,tmp,j;
    while(cin>>num)
    {
        m=0;
        tmp=num;
        for(i=2;i<=pow(num,0.5);i++)
        {
            if(num%i==0)
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            rev=0;
            p=0;
            while(num)
            {
            r=num%10;
            rev=rev*10+r;
            num=num/10;
            }
            for(j=2;j<=pow(rev,0.5);j++)
            {
                if(rev%j==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0 && tmp!=rev)
            {
                cout<<tmp<<" is emirp."<<endl;
            }
            else
               cout<<tmp<<" is prime."<<endl;
        }
        else
            cout<<tmp<<" is not prime."<<endl;
    }
    return 0;
}
