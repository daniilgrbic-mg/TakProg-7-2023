#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> a; // prazan vektor

    vector<int> b = {5, 5, 3, 4}; // vektor duzine 4
    //               0  1  2  3 ...

    vector <int> c (1000); // vektor sa 1000 nula

    // cout << b[0] << endl; // 5
    // cout << b[2] << endl; // 3

    b[0] = 4; // promena vrednosti

    a.push_back(10); // ubacivanje elementa na kraj vektora
    a.push_back(5);
    a.push_back(3);
    a.push_back(15);

    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }

    

    return 0;
}

