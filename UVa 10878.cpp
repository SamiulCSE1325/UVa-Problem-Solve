#include <cstdio>
using namespace std;
int main()
{
    freopen ("input.txt","rt",stdin);
    char line[50];
    while (gets(line)){
        if (line[0] != '|') continue;
        char c = 0;
        for (int i=0; line[i]; i++){
            if (line[i]==' ' || line[i]=='o')
                c <<= 1;
            if (line[i]=='o')
                c++;
        }
        printf("%c",c);
    }
    return 0;
}
