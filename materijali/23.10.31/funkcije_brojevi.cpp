#include <bits/stdc++.h>

using namespace std;

/*
Funkcija je imenovan izraz koji za neke ulazne podatke (brojeve) izracunava (vraca) neki rezultat

Na primer, definisemo funkciju f(x) = x + 2

U sustini, ovo oznacava da za uzlasni podatak x, rezultat je x uvecano za 2. To jest:
    f(2) = 4 , a
    f(5) = 7 ...

Funkcije mogu imati vise ulaznih podataka, na primer funkcija P(a, b) = a * b koja racuna povrsinu pravougaonika.
    P(3, 4) = 3 * 4 = 12
    P(1, 5) = 1 * 5 = 5

U C++ postoje neke ugradjene funkcije, a najbitnije medju njima su:

    floor(x) - zaokruzuje broj x na dole (od reci floor = pod)
    ceil(x)  - zaokruzuje broj x na gore (od reci ceiling = plafon)
    round(x) - zaokruzuje broj x na najblizi celi broj

    max(a, b) - vraca veci medju brojevima a i b
    min(a, b) - vraca manji medju brojevima a i b

    pow(b, s) - vraca b na stepen s 
*/

int main()
{
    cout << "floor(2.3) = " << floor(2.3) << endl; // 2
    cout << "ceil(2.3)  = " << ceil(2.3)  << endl; // 3

    cout << "round(2.3) = " << round(2.3) << endl; // 2
    cout << "round(2.7) = " << round(2.7) << endl; // 3

    cout << "max(4, 6)  = " << max(4, 6)  << endl; // veci je 6
    cout << "min(4, 6)  = " << min(4, 6)  << endl; // manji je 4

    cout << "pow(5, 3)  = " << pow(5, 3)  << endl; // 5 ^ 3 = 5 * 5 * 5 = 125

    /*
    Ove funkcije mozemo da kombinujemo, na primer, da bismo izracunali maksimum 3 broja, pisacemo:

    int M = max(a, max(b, c));

    gre su a, b, c nasi brojevi, a M rezultat
    */
    
    return 0;
}
