// Седми разред ОШ општинско 2023/24
// https://arena.petlja.org/competition/os7-202324-opstinskon#tab_135790

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string poeni;
    cin >> poeni;

    pair <int, int> pobede = {0, 0};
    pair <int, int> trenutni = {0, 0};

    int za_pobedu = 25;

    for(auto rez : poeni) {

        if(rez == 'A') {
            trenutni.first += 1;
        }
        else {
            trenutni.second += 1;
        }

        if(trenutni.first >= za_pobedu && trenutni.first - trenutni.second >= 2) {
            pobede.first += 1;
            trenutni = {0, 0};
        }

        if(trenutni.second >= za_pobedu && trenutni.second - trenutni.first >= 2) {
            pobede.second += 1;
            trenutni = {0, 0};
        }

        if(pobede.first == 2 && pobede.second == 2) {
            za_pobedu = 15;
        }
    }

    cout << pobede.first << ":" << pobede.second << endl;

    if(pobede.first != 3 && pobede.second != 3) {
        cout << trenutni.first << ":" << trenutni.second << endl;
    }

    return 0;
}
