#include<bits/stdc++.h>
using namespace std;
long long sum;
int main()
{
    long long cs=1,n,sq,sum=0;
    while (cin>>n)
    {
        if(n==0)
            break;
        sum = 0;
        long long cnt=0,i,ans;
        sq=sqrt(n+1);
        printf("Case %lld: ",cs++);
        for(i=2;i<=sq;i++)
        {
            ans=1;
            if(n%i==0)
            {
                cnt++;
                while(n%i==0)
                {
                    ans=ans*i;
                    n=n/i;
                }
                sum=sum+ans;
            }
        }
        if (n != 1 || cnt == 0)
        {
            cnt ++;
            sum += n;
        }
        if (cnt == 1)
            sum ++;
        printf("%lld\n", sum);
    }
    return 0;
}
