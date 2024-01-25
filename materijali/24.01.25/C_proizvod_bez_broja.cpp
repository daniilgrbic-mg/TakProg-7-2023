// Седми разред ОШ окружно 2022/23
// https://arena.petlja.org/competition/os7-202223-okruznon#tab_135158

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int proizvod = 1;
    int broj_nula = 0;

    vector<int>niz(n);
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
        if(niz[i] == 0) {
            broj_nula++;
        }
        else {
            proizvod *= niz[i];
        }
    }

    // ako nemam nijednu nulu, za svaki i delimo proizvod sa brojem na toj poziciji
    if(broj_nula == 0) {
        for(int i = 0; i < n; i++) {
            cout << proizvod / niz[i] << " ";
        }
    }

    // ako imam tacno jednu nulu, rezultat ce biti sve nule sem jednog broja (taj je proizvod svih ne nula)
    if(broj_nula == 1) {
        for(int i = 0; i < n; i++) {
            if(niz[i] == 0) {
                cout << proizvod << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
    }

    // ako imamo 2 ili vise nula, rezultat su SVE nule
    if(broj_nula > 1) {
        for(int i = 0; i < n; i++) {
            cout << 0 << " ";
        }
    }

    cout << endl;

    return 0;
}
