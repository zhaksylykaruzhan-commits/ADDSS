#include <iostream>
using namespace std;

void RevStr(int n) {
    if (n == 0) 
        return;

    char str[21];
    cin >> str;
    RevStr(n - 1);
    cout << str << endl;
}

int main() {
    int n;
    cin >> n;
    RevStr(n);
    cout << n << endl;
}
