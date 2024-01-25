// Седми разред ОШ окружно 2022/23
// https://arena.petlja.org/competition/os7-202223-okruznon#tab_135157

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int xp, yp;
    int x1, y1;
    int x2, y2;

    cin >> xp >> yp >> x1 >> y1 >> x2 >> y2;

    int rasporedi = 0;

    // dva raspored pre okratanaja platna
    if(x1 + x2 <= xp && y1 <= yp && y2 <= yp) {
        rasporedi++;
    }
    if(y1 + y2 <= yp && x1 <= xp && x2 <= xp) {
        rasporedi++;
    }

    swap(xp, yp); // okrecem platno

    // dva raspored POSLE okratanaja platna
    if(x1 + x2 <= xp && y1 <= yp && y2 <= yp) {
        rasporedi++;
    }
    if(y1 + y2 <= yp && x1 <= xp && x2 <= xp) {
        rasporedi++;
    }

    cout << rasporedi << endl;
}
