/*
Unose se dva cela broja A i B, potrebno je podeliti A sa B
ukoliko B nije 0. Ako je B nula, ispisati poruku "Deljenje sa nulom!"
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(b == 0) {
        cout << "Deljenje sa nulom" << endl;
    }
    else {
        float c = 1.0 * a / b;
        cout << c << endl;
    }
    return 0;
}
