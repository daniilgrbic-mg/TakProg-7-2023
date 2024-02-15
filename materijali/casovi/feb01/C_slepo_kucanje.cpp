// Седми разред ОШ општинско 2023/24
// https://arena.petlja.org/competition/os7-202324-opstinskon#tab_135767

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int broj_reci = 0;
    int broj_slova = 0;

    for(int i = 0; i < n; i++) {
        string rec;
        cin >> rec;

        bool dobra_rec = true;

        for(auto sl : rec) {
            if( sl!='a' && 
                sl!='s' && 
                sl!='d' && 
                sl!='f' && 
                sl!='g' && 
                sl!='h' && 
                sl!='j' && 
                sl!='k' && 
                sl!='l'
            ) {
                dobra_rec = false;
            }
        }

        if(dobra_rec) {
            broj_reci += 1;
            broj_slova += rec.size();
        }
    }

    cout << broj_reci << " " << broj_slova << endl;

    return 0;
}
