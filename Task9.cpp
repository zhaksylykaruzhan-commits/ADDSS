#include <iostream>
using namespace std;

void permute(char s[], int pos) {
    if (s[pos] == '\0') {
        cout << s << endl;
        return;
    }

    for (int i = pos; s[i] != '\0'; i++) {
        swap(s[pos], s[i]);
        permute(s, pos + 1);
        swap(s[pos], s[i]);
    }
}

int main() {
    char s[100];
    cin >> s;
    permute(s, 0);
}
