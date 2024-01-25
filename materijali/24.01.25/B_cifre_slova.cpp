// Седми разред ОШ, окружно такмичење 2021/22
// https://arena.petlja.org/competition/os7-202122-okruznon#tab_134182

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string niska;

    // cin >> niska;     // cin - unosi do razmaka ili kraja linije
    getline(cin, niska); // getline - unos do kraja linije

    int broj_slova = 0;
    int broj_cifara = 0;

    for(int i = 0; i < niska.size(); i++) {
        char c = niska[i];

        // ASCII
        // A - 65
        // B - 66
        // ...
        // a - 97
        // b - 98
        // ...
        // if('0' <= c && c <= '9') {
        //     broj_cifara++;
        // }
        // if('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z') {
        //     broj_slova++;
        // }
        
        if(isalpha(c)) {
            broj_slova++;
        }
        if(isdigit(c)) {
            broj_cifara++;
        }
    }

    // cout << "Broj slova je " << broj_slova << endl;
    // cout << "Broj cifara je " << broj_cifara << endl;

    cout << abs(broj_cifara - broj_slova) << endl;

    return 0;
}
