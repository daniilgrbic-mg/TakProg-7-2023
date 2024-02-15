// Седми разред ОШ, окружно такмичење 2021/22
// https://arena.petlja.org/competition/os7-202122-okruznon#tab_134186

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;
    cin >> a1 >> a2 >> a3;
    cin >> a4 >> a5 >> a6;
    cin >> a7 >> a8 >> a9;

    //if(a1 == a2 == a3) // OVO NE SME !!!

    // prvi red
    if(a1 == a2 && a2 == a3 && a3 != '*') {
        cout << a1 << endl; // pobednik je onaj koji kontrolise prvi red (radi i za X i za O)
        return 0; // prekidam program jer nema poente dalje traziti (vec imamo pobednika)
    }

    // drugi red
    if(a4 == a5 && a5 == a6 && a6 != '*') {
        cout << a4 << endl;
        return 0;
    }

    // treci red
    if(a7 == a8 && a8 == a9 && a9 != '*') {
        cout << a7 << endl;
        return 0;
    }

    // prva kolona
    if(a1 == a4 && a4 == a7 && a7 != '*') {
        cout << a1 << endl; 
        return 0;
    }

    // druga kolona
    if(a2 == a5 && a5 == a8 && a8 != '*') {
        cout << a2 << endl; 
        return 0;
    }

    // treca kolona
    if(a3 == a6 && a6 == a9 && a9 != '*') {
        cout << a3 << endl; 
        return 0;
    }

    // dijagonale
    if(a1 == a5 && a5 == a9 && a9 != '*') {
        cout << a1 << endl; 
        return 0;
    }
    if(a7 == a5 && a5 == a3 && a3 != '*') {
        cout << a7 << endl; 
        return 0;
    }
    
    cout << "nereseno" << endl;
    return 0;
}
