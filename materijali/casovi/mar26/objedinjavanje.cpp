#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> vn;
    for(int i = 0; i < n; i++) {
        int el;
        cin >> el;
        vn.push_back(el);
    } 

    int m;
    cin >> m;
    vector <int> vm;
    for(int i = 0; i < m; i++) {
        int el;
        cin >> el;
        vm.push_back(el);
    }

    int in = 0, im = 0;
    while(in < n && im < m) {
        if(vn[in] < vm[im]) {
            cout << vn[in] << " ";
            in++;
        }
        else {
            cout << vm[im] << " ";
            im++;
        }
    }
    while(in < n) {
        cout << vn[in] << " ";
        in++;
    }
    while(im < m) {
        cout << vm[im] << " ";
        im++;
    }
    cout << endl;
}
