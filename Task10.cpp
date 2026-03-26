#include <iostream>
using namespace std;

bool IsPowerTwo(int n) {
    // кері береді true, if n > 0 и n — 2 дәреже
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cin >> n;
    cout << (isPowerTwo(n) ? "true" : "false") << endl;
}
