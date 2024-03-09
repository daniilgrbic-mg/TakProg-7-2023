#include <set>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    set <int> jedinstveni;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        jedinstveni.insert(a);
    }

    if(jedinstveni.size() == n) {
        cout << "Nemamo duplikate" << endl;
    } else {
        cout << "Imamo duplikate" << endl;
    }


}
