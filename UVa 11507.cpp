#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char cmd[100000][3];
    while(scanf("%d", &n) == 1 && n) {
        for(i = 0; i < n; i++)
            scanf("%s", cmd[i]);
        int dir = 0;
        for(i = 0; i < n; i++) {
            if(!strcmp(cmd[i], "No"))
                continue;
            if(!strcmp(cmd[i], "+z")) {
                if(dir == 0)        dir = 4;
                else if(dir == 1)   dir = 5;
                else if(dir == 4)   dir = 1;
                else if(dir == 5)   dir = 0;
            }
            if(!strcmp(cmd[i], "-z")) {
                if(dir == 0)        dir = 5;
                else if(dir == 1)   dir = 4;
                else if(dir == 4)   dir = 0;
                else if(dir == 5)   dir = 1;
            }
            if(!strcmp(cmd[i], "+y")) {
                if(dir == 0)        dir = 2;
                else if(dir == 1)   dir = 3;
                else if(dir == 2)   dir = 1;
                else if(dir == 3)   dir = 0;
            }
            if(!strcmp(cmd[i], "-y")) {
                if(dir == 0)        dir = 3;
                else if(dir == 1)   dir = 2;
                else if(dir == 2)   dir = 0;
                else if(dir == 3)   dir = 1;
            }
        }
        if(dir == 0)    puts("+x");
        if(dir == 1)    puts("-x");
        if(dir == 2)    puts("+y");
        if(dir == 3)    puts("-y");
        if(dir == 4)    puts("+z");
        if(dir == 5)    puts("-z");
    }
    return 0;
}
