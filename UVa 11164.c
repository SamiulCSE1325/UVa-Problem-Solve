#include<stdio.h>
int main()
{
    double a,b,c,x;
    int s=1;
    while (1)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if (a==-1) return 0;
        printf("Set %d:\n",s++);
        x=b*b-a*c;
        if (x>0)
        {
            double ans=a*c*(a+2*b+c)/x;
            if (ans>0) printf("%.4lf\n",ans);
            else  printf("Poor King!\n");
        }
        else printf("Poor King!\n");
    }
    return 0;
}
