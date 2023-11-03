#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    Ovo nece da radi kako treba, jer C++ vidi da su 15 i 4 celi 
        pa zato racuna celobrojno deljenje...
    */
    float a = 15 / 4; 
    cout << "15 / 4 = " << a << endl;

    /*
    Ovo hoce da radi, jer C++ vidi 1.0 i shvati da se radi o racionalnim brojevima 
    */
    float b = 1.0 * 15 / 4; 
    cout << "1.0 * 15 / 4 = " << b << endl;

    return 0;
}
