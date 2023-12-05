#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int a = 1;
    int b = 1;
    int c;

    vector<int> fib(20);

    fib[0] = 1;
    fib[1] = 1; 

    for(int i = 2; i < fib.size(); i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < fib.size(); i++) {
        cout << fib[i] << endl;
    }

    // for(int i = 0; i < 20; i++) {
    //     c = a + b;
    //     cout << c << endl;
    //     swap(a, b);
    //     swap(b, c);
    // }
    
    return 0;
}

