#include <map>
#include <string>
#include <iostream>

// #include <bits/stdc++.h> // include SVE

using namespace std;

int main() {

    map <string, int> meseci;

    pair <string, int> jan = {"Januar", 1};
    cout << jan.first << " " << jan.second << endl;

    meseci.insert(jan);
    meseci.insert({"Februar", 2});
    meseci.insert({"Mart", 3});
    meseci["April"] = 4;

    cout << "Ima " << meseci.size() << " meseca" << endl;

    // meseci.count("April") - da li posotji april medju kljucevima

    for(auto par : meseci) {
        cout << par.first << " " << par.second << endl;
    }

    // for(pair <string, int> par : meseci) {
    //     cout << par.first << " " << par.second << endl;
    // }


}