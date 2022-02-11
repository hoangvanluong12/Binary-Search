#include <bits/stdc++.h>

using namespace std;

long long int a, b, k, m, n;

long long binarySearch()
{
    long long l, r, minimum;
    l = 1;
    r = 2*n;
    minimum = r;
    while(l <= r)
    {
        long long mid = (l + r) / 2;
        long long max = (a+b)*mid - (mid/k)*a - (mid/m)*b;
        if(max >= n)
        {
            minimum = min(minimum, mid);
            r = mid - 1; 
        }
        else
            l = mid + 1;
    }

    return minimum;
}

int main()
{

    freopen("RENEWED.inp", "r", stdin);
    freopen("RENEWED.out", "w", stdout);

    cin >> a >> k >> b >> m >> n;

    cout << binarySearch();

    return 0;
}
