#include <iostream>
using namespace std;

int SumN(int n) {
    if (n <= 0) 
      return 0;
    return n + SumN(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << SumN(n);
}
