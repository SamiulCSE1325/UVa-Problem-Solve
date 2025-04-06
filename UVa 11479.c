#include <stdio.h>
int main()
{
    long int t,test=1,a,b,c;
    scanf("%ld",&t);
    while (t--)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        printf("Case %ld: ",test++);
        if (a+b<=c || b+c<=a || a+c<=b)
        printf("Invalid\n");
        else if (a<=0 || b<=0 || c<=0)
        printf("Invalid\n");
        else
        {
            if (a==b && b==c)
            printf("Equilateral\n");
            else if (a==b || a==c || b==c)
            printf("Isosceles\n");
            else
             printf("Scalene\n");
        }
    }
    return 0;
}
