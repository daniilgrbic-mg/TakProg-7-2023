#include <iostream>
#include <string>
#include <map>

#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    map <char, char> m;
    map <char, char> minv;

    for(int i = 0; i < a.size(); i++) {
        char ai = a[i];
        char bi = b[i];

        // da li se jedno slovo slika u vise
        if(m.count(ai) && m[ai] != bi) {
            cout << "ne" << endl;
            return 0;
        }

        // da li se vise slova slikaju u jedno
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