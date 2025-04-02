#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10010],str1[10010];
    int i,len,T,sq,k=0,j=0,t=1,c=0;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        cin.getline(str,10005);
        len=strlen(str);
        j=0;
        for(i=0;i<len;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                str1[j++]=str[i];
        }
        str1[j]='\0';
        len=strlen(str1);
       sq=sqrt(len);
       if(sq*sq!=len)
       {
           cout<<"Case #"<<t++<<":"<<endl<<"No magic :("<<endl;
           continue;
       }
       else
       {
           for(i=0;i<len;i++)
           {
               if(str1[i]==str1[len-1-i])
                c++;
           }
           if(c==len)
            cout<<"Case #"<<t++<<":"<<endl<<sq<<endl;
    else
    cout<<"Case #"<<t++<<":"<<endl<<"No magic :("<<endl;
    c=0;
       }
    }
    return 0;
}
