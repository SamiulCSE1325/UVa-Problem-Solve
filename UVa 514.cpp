#include <cstdio>
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(){
    stack<int> station;
    int b[1001];
    int n;
    while(scanf("%d", &n), n){
        bool is_break = false;
        while(!is_break){
            station = stack<int>();
            for(int i = 0; i < n; i++){
                scanf("%d", &b[i]);
                if(b[i] == 0){
                    is_break = true;
                    break;
                }
            }
            if(is_break) continue;
            int j = 1;
            bool is_ok = true;
            for(int i = 0; i < n; i++){
                while(j <= n && (station.empty() || station.top() != b[i])){
                    station.push(j);
                    j++;
                }
                if(station.top() == b[i]){
                    station.pop();
                    continue;
                }else{
                    is_ok = false;
                    break;
                }
            }
            cout<<(is_ok ? "Yes" : "No")<<endl;
        }
        cout<<endl;
    }
    return 0;
}
