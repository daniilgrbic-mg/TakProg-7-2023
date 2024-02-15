#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sladoled = "Volim da jedem sladoled!";
    //                 ^     ^  ^     ^
    //                 0     6  9     15       

    string volim = sladoled.substr(0, 5);  // od 0-tog slova 'V' pa 5 slova - "Volim"
    cout << volim << endl;

    cout << sladoled.substr(9, 5) << endl; // od 9-og slova 5 komada - "jedem"

    cout << sladoled.substr(9) << endl;    // od 9 pa do kraja - "jedem sladoled!"

    return 0;
}
