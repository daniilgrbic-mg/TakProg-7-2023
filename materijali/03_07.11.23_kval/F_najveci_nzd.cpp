#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int64_t p;
    cin >> p;
    
    int64_t rez = 1;

    int64_t del = 2;
    while(p > del) {
        int n = 0;
        while(p % del == 0) {
            n++;
            p /= del;
        }
        rez *= pow(del, n/2);
        del++;
        if(del*del > p) {
            break;
        }
    }

    cout << rez << endl;

    return 0;
}