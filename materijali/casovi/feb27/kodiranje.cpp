/*
Zadatak: Decode the message
https://leetcode.com/problems/decode-the-message/description/

(Radimo jednostavniju verziju u kojoj kljuc nema razmake 
i slova u njemu se ne ponavljaju)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string kljuc;
    cin >> kljuc;

    cin.ignore();
    
    string sifrovana_poruka;
    // cin >> sifrovana_poruka;
    getline(cin, sifrovana_poruka);

    map <char, char> f;

    for(int i = 0; i < kljuc.size(); i++) {
        f[ kljuc[i] ] = 'a' + i;
    }
    f[' '] = ' ';

    for(int i = 0; i < sifrovana_poruka.size(); i++) {
        cout << f[ sifrovana_poruka[i] ];
    }

    cout << endl;

    return 0;
}


/*
eljuxhpwnyrdgtqkviszcfmabo
zwx hnfx lqantp mnoeius ycgk vcnjrdb
*/
