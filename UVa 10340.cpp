#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s)
    {
        int l,l2,z=0,x,y=0;
        cin>>s1;
         l=s.length();
         l2=s1.length();
        for(x=0; x<l2; x++)
        {
            if(s[y]==s1[x])
            {
                y++;
                z++;
            }
        }
        if(l==z)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
