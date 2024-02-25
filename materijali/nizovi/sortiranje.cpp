#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     vector <int> v = {5, 7, 1, 4, 0, 9, 8, 2, 6, 3};

//     sort(v.begin(), v.end());
//     // sort(v.rbegin(), v.rend());

//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     vector <int> v = {10, 2, 3, 5, 12, 20, -5, 14, 31};
//     // vector <int> v = {4, 4, 4};
//     int trazeni_zbir = 15;
//     int rezultat = 0;

//     int n = v.size();
//     for(int i = 0; i < n; i++) {
//         int prvi = v[i];
//         for(int j = i+1; j < n; j++) {
//             int drugi = v[j];
//             if(prvi + drugi == trazeni_zbir) {
//                 rezultat++;
//             }
//         }
//     }

//     cout << rezultat << endl;
// }

int main() {
    vector <int> v = {10, 2, 3, 5, 12, 20, -5, 14, 31};
    int trazeni_zbir = 15;
    int rezultat = 0;

    sort(v.begin(), v.end());
    // -5 2 3 5 10 12 14 20 31 

    int leva = 0;
    int desna = v.size() - 1;

    while(leva < desna) {
        if(v[leva] + v[desna] == trazeni_zbir) {
            cout << v[leva] << " " << v[desna] << endl;
            rezultat++;
            leva++;
        } else if(v[leva] + v[desna] > trazeni_zbir) {
            desna--;
        } else if(v[leva] + v[desna] < trazeni_zbir) {
            leva++;
        }
    }

    cout << rezultat << endl;
}
