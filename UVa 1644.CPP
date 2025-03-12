#include<bits/stdc++.h>
using namespace std;
const int maxn=1500000;
bool notprime[maxn];
vector<int> prime;
int n;
void sieve(){
    for(int i=2;i<maxn;++i){
        if(!notprime[i]){
            prime.push_back(i);
            for(int j=i*2;j<maxn;j+=i) notprime[j]=true;
        }
    }
}
int main(){
    sieve();
    int n;
    while(scanf("%d",&n)==1 && n){
        int pos=lower_bound(prime.begin(),prime.end(),n)-prime.begin();
        if(prime[pos]==n) puts("0");
        else printf("%d\n",prime[pos]-prime[pos-1]);
    }
    return 0;
}
