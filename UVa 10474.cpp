#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,c=0;
    cin>>n>>q;
    while(n!=0)
    {
        c++;
        int a[n+2],b[q+2];
        bool flag;
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<q;i++)
            cin>>b[i];
        sort(a,a+n);
        cout<<"CASE# "<<c<<":"<<endl;
        for(i=0;i<q;i++)
        {
            flag=false;
            for(int k=0;k<n;k++)
            {
                if(b[i]==a[k])
                {
                    cout<<b[i]<<" found at "<<k+1<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag!=true)
                cout<<b[i]<<" not found"<<endl;
        }
        cin>>n>>q;
    }
    return 0;
}
