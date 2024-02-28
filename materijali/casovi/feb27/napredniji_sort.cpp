/*
Zadatak D - K najblizih (Okruzno 2023)
https://arena.petlja.org/competition/os7-202223-okruznon
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    O(n) - linearno         -> petlja
    O(n^2) - kvadratna      -> petlja u petlji
    O(n * logn) - en log en -> sortiranje
    */

    int n, k, x;
    cin >> n >> k >> x;

    vector < vector <int> > parovi;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int udaljenost = abs(a - x);

        // vector<int> par = {udaljenost, a};
        // parovi.push_back(par);
        parovi.push_back({udaljenost, a}); // skracene prethodne dve linije
    }

    // sortiramo parove po udaljenosti od x! 
    // dakle, prvi par ce odgovarati broju najblizem x, a poslednji najdaljem broju od x
    sort(parovi.begin(), parovi.end());

    // posto je potrebno resenja ispisati rastuce, brojeve trpamo u pomocni vektor 'rezultati'
    vector<int> rezultati;
    for(int i = 0; i < k; i++) {
        rezultati.push_back(parovi[i][1]);
    }

    sort(rezultati.begin(), rezultati.end());

    for(int i = 0; i < k; i++) {
        cout << rezultati[i] << " ";
    }
    cout << endl;

    return 0;
}
