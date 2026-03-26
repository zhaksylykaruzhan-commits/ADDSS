#include <iostream>
using namespace std;

int PowSum(int b, int n) {
    if (n == 0) 
      return 1;

    int current = 1;
    for (int i = 0; i < n; i++)
        current *= b;

    return current + PowSum(b, n - 1);
}

int main() {
    int b, n;
    cin >> b >> n;
    cout << PowSum(b, n);
}
