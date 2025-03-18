#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,a,tc,ca,b;
        while(scanf("%d",&tc)==1){
                for(ca=1;ca<=tc;ca++){
                        scanf("%d",&n);
                        a=n;
                        sum=0;
                            while(n<9 || n>9){
                    if(n<=9){
                    sum=n;
                    break;
                    }
                            while(n!=0){
                                b=n%10;
                                sum=sum+(b*b);
                                n=n/10;
                            }
                                n=sum;
                                sum=0;
                            }
                            if(sum==1 || sum==7)
                            printf("Case #%d: %d is a Happy number.\n",ca,a);
                            else
                            printf("Case #%d: %d is an Unhappy number.\n",ca,a);
                }
        }
    return 0;
}
