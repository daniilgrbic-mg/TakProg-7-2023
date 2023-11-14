#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    int zbir = 0;
    for(int i = 0; i < k; i++) {
        int ocena;
        cin >> ocena;
        zbir += ocena;
    }

    double stari_prosek;
    cin >> stari_prosek;

    double novi_prosek = (round(stari_prosek*n)-zbir) / (n-k);
    cout << fixed << setprecision(2) << novi_prosek << endl;

    return 0;
}