#include <bits/stdc++.h>

using namespace std;

int main() {

    //              0     6  9     15        25     32       41 44       
    //              v     v  v     v         v      v        v  v
    string niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    //                        ^          ^    ^           ^ 
    //                        10         21   26          38

    int trazimo_od = 0;

    while (true) {

        int pronadjen_na = niska.find("ed", trazimo_od);

        if(pronadjen_na == string::npos) {
            break;
        }

        cout << "Pronasli smo \"ed\" na poziciji " << pronadjen_na << endl;

        trazimo_od = pronadjen_na + 1;

    }

    cout << "KRAJ" << endl;

}

