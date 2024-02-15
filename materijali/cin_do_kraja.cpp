#include <bits/stdc++.h>

using namespace std;

/*
Ponekad nije unapred poznato koliko podataka je potrebno uneti.

Primer toga bi bio citanje iz fajla: ucitavamo (na primer) imena i prezimena sve
dok ne stignemo do kraja tog fajla. Kada se to desi, prekidamo ucitavanje. Ali kako?

U C++u to moze da se postigne stavljanjem cin naredbe u while petlju na sledeci nacin:
    while(cin >> nesto) {
        ...
    }

Zasto ovo radi? cin naredba vraca informaciju o tome da li je citanje izvresno uspesno, te
se petlja izvrsava sve dok cin uspesno ucitava podatke. Cim nesto nije u redu (ili podataka nema, 
ili su podaci pogresni kada npr kada unosimo string, a ocekujemo broj), petlja se prekida.

Kako program zna da li smo zavrsili sa unosenjem podataka ako ulaz kucamo sami? Postoji nacin
da se "simulira" kraj ulaza klikom tastera Ctrl+Z na Windows-u (i Ctrl+D na Linux-u). Prakticno
lazemo program da je stigao kraj fajla.

Dole je dat primer programa koji racuna zbir brojeva sa ulaza, i ispisuje ga cim se ulaz prekine:
*/

int main()
{
    int a;
    int zbir = 0;
    
    while(cin >> a) {
        zbir += a;
    }

    cout << "Zbir je " << zbir << endl;

    return 0;
}

/*
Vodite racuna o tome da je moguce stavljati i vece cin-ove, na primer:
    while(cin >> a >> b) {
        ...
    }
Ovakva petlja ce da se vrti sve dok su OBA podatka uspesno unesena.
*/
