/*
Date su mase dve kutije A i B u tonama i kilogramima.
Potrebno je odrediti razliku njihovih masa (u tonama i kilogramima).

PRIMER
ulaz   10 300
        8 700
izlaz   1 600
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t1, k1, t2, k2;
    cin >> t1 >> k1;
    cin >> t2 >> k2;

    int m1, m2;         // mase obe kutije prevodimo u manju mernu jedinicu (kilograme)
    m1 = k1 + t1*1000;
    m2 = k2 + t2*1000;

    // int razlika = max(m1, m2) - min(m1, m2);

    int razlika = abs(m1 - m2); // apsolutna vrednost

    // razlika = 1600
    int t = razlika / 1000;
    // int k = razlika - t * 1000;
    int k = razlika % 1000;

    cout << t << " " << k << endl;
    
    return 0;
}
