#include <map>
// #include <vector>
// #include <set>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // vector <int> v = {10, 20, 30}; 
    // set <int> s = {10, 20, 30}; 
    map <char, int> m = {
        {'I', 1}, 
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500}, 
        {'M', 1000}
    };

    string broj;
    cin >> broj;

    int rezultat = 0;

    for(int i = 0; i < broj.size(); i++) {
        char cifra = broj[i];
        int vrednost = m[cifra];

        if(i+1 < broj.size() && vrednost < m[broj[i+1]]) {
            rezultat -= vrednost;
        } else {
            rezultat += vrednost;
        }
    }

    cout << rezultat << endl;
    return 0;
}