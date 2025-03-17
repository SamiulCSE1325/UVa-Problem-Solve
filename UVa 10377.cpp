#include<iostream>
using namespace std;
char maps[62][62];
char towards[5] = "NESW";
int  dxy[4][2] = {-1,0,0,1,1,0,0,-1};
int main()
{
	int  R,C,T,X,Y,F,x,y;
	char command;
	cin>>T>> endl;
	while (T --) {
            cin>> R>>C>>endl;
		getchar();
		for (int i = 0; i < R; ++ i)
			gets(maps[i]);
            cin>> X>>Y>>end;
		F = 0; X --; Y --;
		while ((command = getchar()) != 'Q') {
			if (command == 'R')
				F = (F+1)%4;
			else if (command == 'L')
				F = (F+3)%4;
			else if (command == 'F') {
				x =  X+dxy[F][0];
				y =  Y+dxy[F][1];
				if (x >= 0 && x < R && y >= 0 && y < C && maps[x][y] != '*') {
					X = x;
		 			Y = y;
				}
			}
		}
		cout<< X+1 << Y+1 << towards[F] ;
		if (T)
            cout<< endl;
	}
    return 0;
}
