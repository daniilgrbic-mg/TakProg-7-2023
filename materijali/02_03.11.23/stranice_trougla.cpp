/*
Date su duzine 3 duzi A, B, i C.
Potreno je odrediti da li je moguce napraviti trougao od tih duzi.

PRIMER 1
ulaz    3 4 5
izlaz   DA

PRIMER 2
ulaz    10 20 30
izlaz   NE
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // dovoljan uslov: zbir svakog para stranica je veci od trece stranice
    if(a+b>c && b+c>a && c+a>b) {
        cout << "DA" << endl;
    }
    else {
        cout << "NE" << endl;
    }

    return 0;
}
