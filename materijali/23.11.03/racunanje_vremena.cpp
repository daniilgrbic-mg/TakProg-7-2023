/*
Dato je neko vreme, u satima i munitma; i interval vremena (takodje u satima i minutima).
Potrebno je odrediti koliko ce biti sati nakon sto prodje dat interval vremena.

PRIMER 1
ulaz     10 00
          2 45
izlaz    12 45

PRIMER 2
ulaz     10 30
          1 30
izlaz    12 00

PRIMER 3
ulaz     23 45
          1 25
izlaz     1 10
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    int ih, im;
    cin >> ih >> im;

    int vreme = (h*60 + m + ih*60 + im) % (24*60);

    cout << vreme/60 << " " << vreme%60 << endl;

    return 0;
}
