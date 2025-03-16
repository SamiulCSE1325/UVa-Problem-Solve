#include<stdio.h>
int main()
{
	int n,i,a,m,t,s,way[100][55],add0[55],add[55],c,d;
	char value[13][7]={"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
	char suit[4][10]={"Clubs","Diamonds","Hearts","Spades"};
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		for(i=0;i<52;i++)
			add0[i]=i;
		scanf("%d",&t);
		s=0;
		m=t;
		while(t--)
		{
			for(i=0;i<52;i++)
			{
				scanf("%d",&d);
			    way[s][i]=d-1;
			}
			s++;
		}
		while(m--)
		{
			scanf("%d",&a);
			for(i=0;i<52;i++)
				add[i]=add0[way[a-1][i]];
			for(i=0;i<52;i++)
				add0[i]=add[i];
		}
		for(i=0;i<52;i++)
		{
		    d=add0[i]/13;
			c=add0[i]%13;
			printf("%s of %s\n",value[c],suit[d]);
		}
		if(n)
			printf("\n");
	}
	return 0;
}
