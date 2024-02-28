/*
Primer za recnike: brojimo broj slova u stringu
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <char, int> frekvenca;

    string ulaz = "We've combined the power of the Following feed with the For you feed so there’s one place to discover content on GitHub. There’s improved filtering so you can customize your feed exactly how you like it, and a shiny new visual design.";

    for(int i = 0; i < ulaz.size(); i++) {
        char ch = tolower(ulaz[i]); // tolower() jer su velika i mala slova zapravo ista, pa cemo sve da tretiramo kao mala
        frekvenca[ch] += 1;
    }

    char najbolji = 'a';
    int najbolji_broj = frekvenca['a'];

    for(char ch = 'a'; ch <= 'z'; ch++) {
        // odkomentarisite sledeci red da ispisete frekvence svih engleskih slova u niski 
        // cout << ch << " = " << frekvenca[ch] << endl; 

        if(frekvenca[ch] > najbolji_broj) {
            najbolji = ch;
            najbolji_broj = frekvenca[ch];
        }
    }

    cout << "Najcesce slovo je '" << najbolji << "' sa " << najbolji_broj << " pojavljivanja" << endl;

    return 0;
}
