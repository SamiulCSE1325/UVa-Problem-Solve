#include <stdio.h>
int main()
{
 long long int A, limit, ncase=1, lenght,n;
 while (scanf("%lld%lld",&A,&limit)==2)
 {
  if (A<0 && limit<0)
  break;
  n=A;
  lenght=0;
  while (n<=limit)
  {
   lenght++;
   if (n==1)
   break;
   else if (n%2==0)
   n=n/2;
   else
   n=3*n+1;
  }
 printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",ncase++,A,limit, lenght);
 }
 return 0;
}
