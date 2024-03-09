#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if(a.size() != b.size()) {
        cout << "ne" << endl;
        return 0;
    }

    map <char, char> m;    // slike iz a u b
    map <char, char> minv; // slike iz b u a (inverz)

    for(int i = 0; i < a.size(); i++) {
        char ai = a[i];
        char bi = b[i];

        // da li se jedno slovo slika u vise (to ne sme)
        if(m.count(ai) && m[ai] != bi) {
            cout << "ne" << endl;
            return 0;
        }

        // da li se vise slova slikaju u jedno (to ne sme)
        if(minv.count(bi) && minv[bi] != ai) {
            cout << "ne" << endl;
            return 0;
        }

        m[ai] = bi;
        minv[bi] = ai;
    }

    cout << "da" << endl;
    return 0;
}