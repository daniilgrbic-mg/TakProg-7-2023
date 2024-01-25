// Припреме А1-11 Основна употреба низова
// https://arena.petlja.org/competition/pripreme-a1-11#tab_135239

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>pregledi(n);
    for(int i = 0; i < n; i++) {
        cin >> pregledi[i];
    }

    int najveci_porast = pregledi[1] - pregledi[0];
    int omiljeni_video = 1;

    for(int i = 1; i < n; i++) {
        int porast = pregledi[i] - pregledi[i-1];
        if(porast > najveci_porast) {
            najveci_porast = porast;
            omiljeni_video = i;
        }
    }

    cout << omiljeni_video << endl;

    return 0;
}
