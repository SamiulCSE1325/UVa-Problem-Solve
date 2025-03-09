#include<stdio.h>
#include<string.h>
#include<time.h>
#define MAXN 1000
int temp[MAXN];
int temple[MAXN];
int patience[MAXN];
int sum[MAXN], large = 0;
char last[MAXN];
int add(int len, int level)
{
    int i, j, e, item;
    for(i=0,e=0; i<len; ++i)
    {
        item = (e + temple[i] + sum[i+level]);
        sum[i+level] = item%10;
        e = item/10;
    }
    for(; e!=0; ++i)
    {
        item = e + sum[level+i];
        sum[i+level] = item%10;
        e = item/10;
    }
    if(i+level > large) large = i+level;
}
int multi(int n, int len)
{//  When entering this function, first assign the value of patience to the bottom value
    int i, j, e, cnt, strlen, item, t, m, t_n = n-1; //  The value of t_n is the exponent minus 1, counting the number of times that need to be multiplied
    memset(sum, 0, sizeof(sum));
    memset(temple, 0, sizeof(temple));
    large = len;
    while(t_n--)
    {
        strlen = large;
        for(i=0; i<len; ++i)
        {//  When a for loop is completed, the purpose of multiplying two large numbers is achieved
            item = temp[i];
            for(j=0, e=0; j<strlen; ++j)
            {
                m = item*patience[j];
                temple[j] = (e + m)%10;
                e = (e + m)/10;
            }
            cnt = strlen;
            if(e) temple[j] = e, cnt++;
            add(cnt, i);
            memset(temple, 0, sizeof(temple));
        }

        memset(patience, 0, sizeof(patience));
        for(i=0; i<large; ++i) patience[i] = sum[i];
        memset(sum, 0, sizeof(sum));   //  Every time the result of the multiplication is assigned to patience, the sum is returned to zero
    }
    return 0;
}
int main()
{
    clock_t begin, end;
    int i, j, k, cnt, t, len, m, high, low;
    char input[10], *str;
    int n;
    begin = clock();
     while(scanf("%s%d", input, &k) != EOF)
     {
         len = strlen(input);
         m = -1;
         if((str = strchr(input, '.')) != NULL)
         m = len - 1 - (str - input);   //  The function of m is to calculate the number of decimal places after the decimal point. When there is no decimal point, m=-1
        memset(temp, 0, sizeof(temp));
        memset(patience, 0, sizeof(patience));
        for(i=len-1,n=0; i>=0; --i)
         if(input[i] != '.') temp[n++] = patience[n] = input[i] - '0';
         if(m != -1) len--;
        if(k>=2) multi(k, len);
        else if(k == 1)  //  Handling the case where the index is 1
        {
            high = len-1, low = 0;
            for(i=0; input[i] == '0'; ++i); low = i;
            if(m != -1)
            {
                for(i=len-1; input[i] == '0'; --i); high = i;
                if(input[high] == '.') high--;
            }
            for(i=low; i<=high; ++i) printf("%c", input[i]);
            printf("\n");
            continue;
        }
        if(m == -1) //  Deal with the case of no decimal point, and at this time the mantissa zero does not need to be eliminated
        {
            low = 0, high = large - 1;
            for(i=large-1; patience[i] == 0; --i); high = i;
            for(i=high; i>=low; --i) printf("%d", patience[i]);
            printf("\n");
        }
        else
        {//  When there is a decimal point, the decimal point must be placed in the large number before the prefix zero and mantissa zero can be eliminated
            cnt = 0;
            t = m*k;  //  There are several decimals at the end of the calculation. One of the reasons why the mantissa zero is not processed first is to avoid the inaccurate calculation of t
            memset(last, 0, sizeof(last)); //  Create a string array, the function is to store the large number after adding the decimal point
            for(i=0; i<t; ++i)
            {
                sprintf(last+cnt, "%d", patience[i]);  //  The sprintf function converts integers into characters and puts them in the string
                cnt++;
            }
            last[cnt++] = '.';   //  Put in decimal point
            for(; i<large; ++i)
            {
                sprintf(last+cnt, "%d", patience[i]);
                cnt++;
            }
            last[cnt] = '\0';
            len = strlen(last);
            low = 0, high = len-1;
            for(i=len-1; last[i] == '0'; i--); high = i;  //  The same form handles prefix zero and mantissa zero
            for(i=0; last[i] == '0'; i++); low = i;
            if(last[low] == '.') low++;
            for(i=high; i>=low; i--) printf("%c", last[i]);
            printf("\n");
        }
     }
    end = clock();
    printf("time = %dms\n", end - begin);
    return 0;
}
