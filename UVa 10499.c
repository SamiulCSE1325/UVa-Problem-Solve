#include<stdio.h>
int main()
  {
    long int n,r;
    scanf("%ld",&n);
    while(n==1)
      {
        if(n<0)
        break;
        if (n==1)
        r=0;
        else
        r=n*25;
        printf("%ld%\n",r);
       }
return 0;
}
