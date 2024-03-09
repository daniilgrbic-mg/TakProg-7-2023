#include <set>
#include <vector>
#include <iostream>

using namespace std;

/*
            ubacivanje    pretraga     soritranje        pristup elementu k
vector         O(1)         O(n)        O(n*logn)             O(1)
  set        O(logn)       O(logn)    uvek sortirano          O(k)

SLOZENOSTI
 n        1000      1000000
O(1)      1         1
O(logn)   10        20
O(n)      1000      1000000
O(nlogn)  10000     20000000
O(n*n)    1000000   10^12
O(2^n)    suludo    jos gore
*/

int main() {
    // vector <int> v;
    // v.push_back(1);  // ubacivanje elemenata
    // v.push_back(10);
    // v.push_back(100);

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // for(int el : v) {
    //     cout << el << " ";
    // }
    // cout << endl;

    set <int> s;
    s.insert(10);
    s.insert(100);
    s.insert(100); // nema duplikata
    s.insert(1);

    s.erase(10); // izbacivanje elementa

    cout << "Duzina seta je " << s.size() << endl;

    // for(int el : s) {
    //     cout << el << " ";
    // }
    // cout << endl;

    vector <int> trazimo = {1, 20, 100, -10};
    for(int el : trazimo) {
        if(s.count(el)) {
            cout << "Nasli smo " << el << endl;
        } else {
            cout << "Nismo nasli " << el << endl;
        }
    }


    
    



}