[↩ Nazad na glavnu stranu](/README.md)

# Stringovi (takodje niske)

> Naprednije funkcije:
> - [Pravljenje podniski datog stringa - funkcija `substr`](/materijali/stringovi/substring.cpp)
> - [Pretraga u niskama - funkcija `find`](/materijali/stringovi/find.cpp)
> - [Pretraga SVIH pojavljivanja reci](/materijali/stringovi/find_nti.cpp)
> - [Izmena niske, zamena njenih delova - funkcija `replace`](/materijali/stringovi/replace.cpp)

String u C++u sluzi za rad sa teksutalnim podacima.

Sustinski, string je *vector char-ova* sa *dodatnim funkcionalnostima*. To jest, `string` je nadogradnja nad `vector<char>`.

Promenljivu tipa string mozemo da stvorimo na 3 nacina:
```c++
string a; // prazan string ""
string b = "programiranje"; // string sa pocetnom vrednoscu
string c(10, '*'); // string duzine 10 ciji su svi karakteri '*'
```

Promenljive tipa string mozemo ucitavati na 2 nacina:
1. regularno koristeci *cin*. Cin ucitava slova do prvog razmaka ili kraja reda
    ```c++
    string A, B;
    cin >> A >> B; // ako je ulaz "volim sladoled", prva rec ide u A, a druga u B
    ```
2. preko naredbe *getline*. Za razliku od cin, getline ucitava SVE DO KRAJA REDA:
    ```c++
    string A;
    getline(cin, A); // ako je ulaz "volim sladoled", obe reci sa razmakom se ucitaju u A
    ```
    


Posto je string nadogradnja nad vectorom, mozemo da:  
1. pristupamo elementima (slovima) string-a preko indeksa
    ```c++
    string s = "abc";
    cout << s[2] << s[1] << s[0] << endl; // ispisuje "cba"
    ```
2. menjamo pojedinacna slova string-a
    ```c++
    string s = "programiranje";
    s[0] = 'P';
    cout << s << endl; // ispisuje "Programiranje"
    ```
3. lako saznamo duzinu string-a (koristeci funkciju `size`)
    ```c++
    string s = "abc";
    cout << s.size() << endl; // ispisuje 3
    ```
 
Takodje, stringove mozemo i da spajamo (nadovezujemo) koristeci operator '+' na sledeci nacin:
```c++
string ime = "Zeljko";
string prezime = "Lezaja";
string imePrezime = ime + " " + prezime; // nadovezivanje
cout << imePrezime << endl; // ispisuje "Zeljko Lezaja"
```


