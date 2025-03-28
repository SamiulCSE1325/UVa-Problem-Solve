#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    while(cin >> n)
    {
        int a[n];
        for(i=0; i<n; i++)
            cin >> a[i];
        int p;
        cin >> p;
        int r = p, b = 0, c = 0;
        sort(a, a+n);
        for(i=0; i<n-1; i++)
        {
            for(j=i; j<n; j++)
            {
                if(a[i] + a[j] == p)
                {
                    if(r > (a[i] - a[j]))
                    {
                        b = a[i];
                        c = a[j];
                        if(a[i] > a[j])
                            r = a[i] - a[j];
                        else
                            r = a[j] - a[i];
                    }
                }
            }
        }
        if(c > b)
            swap(b, c);
        cout << "Peter should buy books whose prices are " << c <<  " and " << b << "." << endl << endl;
    }
    return 0;
}
