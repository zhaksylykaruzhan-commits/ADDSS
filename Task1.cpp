#include <iostream>
using namespace std;

int SumSquares
       (int n) {
    if (n <= 0)
        return 0;
    return n * n + SumSquares(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << SumSquares(n);
    return 0;
}
