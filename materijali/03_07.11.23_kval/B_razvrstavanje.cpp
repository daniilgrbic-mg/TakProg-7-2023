#include <bits/stdc++.h>

using namespace std;

/*
Da bismo resili zadatak potrebno je znati Filipov REDNI BROJ,
koji odredjujemo na osnove reda i kolone u kojoj se nalazi.

i - red
j - kolona
m - broj ucenika u redu

Kako odrediti redni broj?

Ispred Filipa ima i-1 redova, svaki sa po m ucenika, dakle m*(i-1) ucenika
U njegovom redu ispred njega ima j-1 ucenika

Dakle, Filip ima redni broj: n = m*(i-1) + (j-1) + 1

Kako na osnovu rednog broja odrediti ekipu?

    1. djak ide u 1. ekipu
    2. ide u 2. ekipu
    k-ti ide u k-tu ekipu
    k+1 ide u 1. ekipu
    itd

Mozemo primetiti da vazi da je ekipa u koju stavljamo djaka
sa rednim brojem n zapravo ostatak pri deljenju n sa brojem ekipa k

Izuzetak su slucajevi kada je n deljiv sa k, jer je ostatak 0, 
a ekipa u koju stavljamo djaka k.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int k, m, i, j;
    cin >> k >> m >> i >> j;

    int n = (i-1)*m+j;
    int ekipa = n % k;
    if(ekipa == 0) ekipa = k;
    cout << ekipa << endl;

    return 0;
}