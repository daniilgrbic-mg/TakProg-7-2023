#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int korak, pravac;
    cin >> korak >> pravac;

    if(pravac == 1) {
        // udesno, sifrujemo
        for(int i = 0; i < s.size(); i++) {
            if(s[i] + korak > 'z') {
                s[i] -= 26;
            }
            s[i] += korak;
        }
    }
    else {
        // ulevo, desifrujemo
    }

    cout << s << endl;

    // cout << INT_MAX << endl;
    // cout << INT_MIN << endl;
    // cout << CHAR_MAX << endl;

    return 0;
}

/*
char ima 8 bitova - 256 vrednosti
    od -128 do +127
int ima 32 bita - 4294967296 vrednosti
    od -2147483648 do +2147483647
long long ima 64 bita - 18446744073709551616 vrednosti
*/
