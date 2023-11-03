#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    /*
    Ulaz radimo koristeci `cin >>`
    */

    cin >> a;
    cin >> b;

    /*
    Ovo mozemo da skratimo i sa:
        cin >> a >> b;
    */

    /*
    Izlaz postizemo naredbom `cout <<`, rec `endl` ispisuje novi red 
        cout << a + b << endl;
    */

   cout << a << " + " << b << " = " << a + b << endl;

    /*
    U liniji iznad prvo ispisujemo vrednost a, pa " + ", pa b, pa " = ", pa a+b
    Na primer, za a = 4 i b = 5 to izleda ovako
        4 + 5 = 9
    */

    return 0;
}
