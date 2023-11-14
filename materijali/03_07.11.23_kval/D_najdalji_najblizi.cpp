#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // soritram brojeve bez niza >:D

    if(a > b) swap(a, b); // sortiram a,b
    if(c > d) swap(c, d); // sortiram c,d

    if(a > c) swap(a, c); // u a je minim svih
    if(d < b) swap(d, b); // u d je maksimum svih

    if(b > c) swap(b, c); // sortiram b i c

    // cout << a << " " << b << " " << c << " " << d << endl; 

    int mina = abs(a-b);
    int minb = min(abs(b-a), abs(b-c));
    int minc = min(abs(c-b), abs(c-d));
    int mind = abs(d-c);

    int rastojanje = max(max(mina, minb), max(minc, mind));

    if(rastojanje == mina) cout << a << endl;
    if(rastojanje == minb) cout << b << endl;
    if(rastojanje == minc) cout << c << endl;
    if(rastojanje == mind) cout << d << endl;

    return 0;
}