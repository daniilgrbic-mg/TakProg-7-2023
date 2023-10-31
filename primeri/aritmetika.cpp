
#include <bits/stdc++.h>

using namespace std;

/*
Rad sa brojevima u C++ veoma lici na matematiku.

C++ podrzava obicne operacije:
    + za sabiranje
    - za oduzimanje
    * za mnozenje
    / za deljenje
    % za celobrojno deljenje

Takodje mozemo da radimo sa zagradama

Redosled operacija postuje matematicka pravila
*/

int main()
{
    int a = 5;
    int b = a + 4; // 9
    int c = a * (b + a); // 5 * (5 + 9) = 5 * 14 = 70
    int d = c / 7; // 70 / 7 = 10

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    cout << "------" << endl;

    int e = c % 30; // ostaak pri deljenju 70 sa 30 je 10
    int f = c / 30; // kolicnik pri deljenju 70 sa 30 je 2

    cout << "e = " << e << endl;
    cout << "f = " << f << endl;

    return 0;
}
