#include<bits/stdc++.h>
using namespace std;

long int n, x;
const int maxn = 2e5 + 10;
long int w[maxn];
bool check[maxn];

void solve(){
    cin >> n >> x;

    for (long int i = 0; i < n; ++i)
    {
        cin >> w[i];
    }

    sort(w, w + n);
    long int ans = 0;
    long int i = 0, j = n - 1;
    while (i < j)
    {
        if (w[i] + w[j] > x)
        {
            //both can't be seated
            --j;
        }
        else
        {
            //both can be seated
            ++ans;
            check[i] = check[j] = true;
            ++i;
            --j;
        }
    }
    //now counting remaining
    for (long int i = 0; i < n; ++i)
    {
        if (check[i] != true)
        {
            ++ans;
        }
    }
    cout << ans << "\n";
}

int main(){
    //had some problems with outputting so using this format
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}