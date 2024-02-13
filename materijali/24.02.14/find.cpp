#include <bits/stdc++.h>

using namespace std;

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

}
