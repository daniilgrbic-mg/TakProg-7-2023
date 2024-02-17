[↩ Nazad na glavnu stranu](/README.md)

# ASCII funkcije

Kao što je pre rečeno, suštinski, string je *vector char-ova* sa *dodatim funkcionalnostima*. To jest, `string` je nadogradnja nad `vector<char>`.

Zbog toga, bitno je znati kako baratati podacima tipa `char`, odnosno karakterima.

Tip `char` je brojevni tip poput `int` i `double`, i može čuvati vrednosti između -128 i 127. Neke od pozitivnih vrednosti imaju dodeljene ["glifove" ](https://en.wikipedia.org/wiki/Glyph), po [ASCII](https://en.wikipedia.org/wiki/ASCII) standardu:

<img src="https://upload.wikimedia.org/wikipedia/commons/1/1b/ASCII-Table-wide.svg" style="background: white; width=99%; border-radius: 10px">

Postoje neke ugrađeme funkcije za menjanje i proveru svojstva pojedinih karaktera. 

Funkcije za menjanje su `tolower()` i `toupper()` koje redom pretvaraju slova iz velikih u mala i obrnuto. Karakteri koji odgovaraju brojevima, znakovima interpunkcije, i slično ostaju nepromenjeni. Na primer, ispod sledi kod koji ceo string "čini" velikim:
```c++
string niska = "Ovo je neka recenica!";
for(int i = 0; i < niska.size(); i++) {
    niska[i] = toupper(niska[i]);
}
// rezultujuća niska je "OVO JE NEKA RECENICA!"
```

Neke funkcije za proveru svojstava karaktera su:
- `islower` vraća *true* ukoliko je karakter malo slovo, a *false* inače,
- `isupper` vraća *true* ukoliko je karakter veliko slovo, a *false* inače,
- `isalpha` vraća *true* ukoliko je karakter slovo (to jest nije broj ili znak ilii neka zagrada),
- `isdigit` vraća *true* ukoliko karakter odovara nekom broju,..

Pun spisak ovih funkcija je [dostupan ovde](https://cplusplus.com/reference/cctype/).
