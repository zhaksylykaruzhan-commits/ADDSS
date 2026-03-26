#include <iostream>
using namespace std;

void RevPrint(int n) {
    if (n == 0) 
      return;
    int x;
    cin >> x;
    RevPrint(n - 1);
    cout << x << " ";
}

int main() {
    int n;
    cin >> n;
    RevPrint(n);
    cout << endl;
}
