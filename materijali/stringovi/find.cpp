#include <bits/stdc++.h>

using namespace std;

/*
Funkcija find vraca poziciju prvog pojavljivanja podniske koju trazimo u datoj niski.
    niska.find(sta_trazimo)

Na primer, ako imamo nisku S="abcde" i trazimo F="cd", napisacemo kod:
    S.find(F)
i on ce vratiti vrednost 2, jer je "cd" pronadjeno na poziciji 2 u niski "abcde". 

Ukoliko trazena podniska NIJE pronadjena, onda find vraca string::npos (pogledajte primer dole)
*/

int main() {

    string niska = "Volim da jedem sladoled! Ledeni sladoled je odlican!!!";
    //              ^     ^  ^     ^         ^      ^        ^  ^
    //              0     6  9     15        25     32       41 44        

    // ako je niska pronadjena, find vraca poziciju na kojoj smo je nasli:
    cout << "\"odlican\" se nalazi na poziciji " << niska.find("odlican") << endl;
    cout << "\"je\" se nalazi na poziciji " << niska.find("je") << endl;
    cout << "\"led\" se nalazi na poziciji " << niska.find("led") << endl;

    // ako NIJE pronadjena, find vraca vrednost JEDNAKU string::npos!
    cout << "\"pogchamp\" se nalazi na poziciji " << niska.find("pogchamp") << endl;
    cout << "\"takprog\" se nalazi na poziciji " << niska.find("takprog") << endl;
    cout << "string::npos = " << string::npos << endl;

    // kako proveriti da li je podniska pdonadjena?
    int p = niska.find("pogchamp");
    if(p == string::npos) {
        // nismo nasli
    }
    else {
        // jesmo nasli na pozicji 'p'
    }

}
