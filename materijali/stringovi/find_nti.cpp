#include <bits/stdc++.h>

using namespace std;

int main() {

    //              0     6  9     15        25     32       41 44       
    //              v     v  v     v         v      v        v  v
    string niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    //                        ^          ^    ^           ^ 
    //                        10         21   26          38

    string sta_trazimo = "ed";

    /*
    Moguce je kao drugi argument funkcije find navesti poziciju od koje krece pretraga:
        niska.find(sta_trazimo, odakle_trazimo)

    Ideja je da u svakom prolazu petlje trazimo sledece pojavljivanje neke podniske
    tako sto svaki put azuriramo indeks od kog krece pretraga.

    Na primer, ako u prvom prolazu nadjemo "ed" na pozicji 10, sledecu put pretraga
    krece od pozicije 11.
    */

    int odakle_trazimo = 0;

    while (true) {

        int pronadjen_na = niska.find(sta_trazimo, odakle_trazimo);

        if(pronadjen_na == string::npos) {
            break;
        }

        cout << "Pronasli smo '" << sta_trazimo << "' na poziciji " << pronadjen_na << endl;

        odakle_trazimo = pronadjen_na + 1;

    }

    cout << "KRAJ" << endl;

}

