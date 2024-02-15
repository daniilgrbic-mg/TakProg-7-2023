#include <bits/stdc++.h>

using namespace std;

/*
Funkcija replace se koristi da zameni deo niske necim novim. Poziva se ovako:
    niska.replace(odakle_menjamo, koliko_menjamo, cime_menjamo)

Prva dva argumenta su isti kao kod funkcije substr, i bitno je shvatiti da
cime_menjamo ne mora biti iste duzine kao deo koji menjamo, na primer:
    - mozemo 3 slova zameniti sa 10 (prakticno ubacujemo slova)
    - mozemo 8 slova zameniti sa 2 (cime se niska skrati)
    - mozemo neka slova zameniti praznom niskom (efektivno ih brisemo)
*/

int main() {
    
    string niska;
    
    // Sledeca 3 primera menjaju ovu nisku:
    //
    // "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    //  ^     ^  ^     ^         ^      ^        ^  ^
    //  0     6  9     15        25     32       41 44  

    niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    niska.replace(9, 5, "zderem"); // menjam rec "jedem" sa "zderem"
    cout << niska << endl; // dobijamo "Volim da zderem sladoled! Ledeni sladoled je odlican!!!"

    niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    niska.replace(14, 9, ""); // brisem podnsiku " sladoled"
    cout << niska << endl; // dobijamo "Volim da jedem! Ledeni sladoled je odlican!!!"

    niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    niska.replace(25, 15, "Sladoled of jagode"); // menjam "Ledeni sladoled" sa "Sladoled of jagode"
    cout << niska << endl; // dobijamo "Volim da jedem sladoled! Sladoled of jagode je odlican!!!"
    
}