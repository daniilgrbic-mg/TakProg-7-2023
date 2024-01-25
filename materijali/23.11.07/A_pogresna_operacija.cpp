#include <bits/stdc++.h>

using namespace std;

/*
Potrebno je naci razlomak p/q takav da za dato n vazi:
    n + p/q = n * p/q

Ovu jednacinu mozemo prepisati:
    n*q + p = n*p
    n = p / (p - q)

Ovo ocigledno ima vise resenja (jednacina sa 2 nepoznate), ali postoji na primer jedno trivijalno:
    p = n
    p - q = 1, to jest
    q = n - 1
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    cout << n << "/" << n-1 << endl;

    return 0;
}