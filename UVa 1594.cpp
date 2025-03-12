#include<iostream>
#include<cstdio>
#include<set>
#include<cstring>
#include<cmath>
#include<cstdlib>
#define MAXN 20
using namespace std;
struct ducci {
    int num[MAXN];
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int T;
    cin >> T;
    while(T--) {
        ducci t;
        int n, times = 1000;
        bool zero = false;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> t.num[i];
        }
        while(times--) {
            ducci t2;
            int cnt = 0;
            for(int i = 0; i < n; i++)
                t2.num[i] = abs(t.num[i % n] - t.num[(i + 1) % n]);
            t = t2;
            for(int i = 0; i < n; i++)
                if(!t.num[i]) cnt++;
            if(cnt == n) {
                zero = true;
                break;
            }
        }
        zero ? cout << "ZERO" : cout << "LOOP";
        cout << endl;
    }
    return 0;
}
