#include <bits/stdc++.h>

using namespace std;

long long int n, a, b, w, h, t;

long long horizontal()
{
    long long l, r, m, aw, bh;
    l = 0; 
    r = min(w, h) + 1;
    while(l + 1 < r)
    {
        m = (l + r) / 2;
        aw = w / (a + 2*m);
        bh = h / (b + 2*m);
        if(aw * bh >= n)
            l = m;
        else
            r = m; 
    } 

    return l;
}

long long vertical()
{
    long long l, r, m, ah, bw;
    l = 0; 
    r = min(w, h) + 1;
    while(l + 1 < r)
    {
        m = (l + r) / 2;
        ah = h / (a + 2*m);
        bw = w / (b + 2*m);
        if(ah * bw >= n)
            l = m;
        else
            r = m; 
    } 

    return l;
}

int main()
{

    freopen("MARS.inp", "r", stdin);
    freopen("MARS.out", "w", stdout);

    cin >> n >> a >> b >> w >> h;

    long long int res_1 = horizontal();
    long long int res_2 = vertical();    

    if(res_1 < res_2)
    {
        cout << res_2;
        return 0;
    }

    cout << res_1;

    return 0;
}
