#include <iostream>
using namespace std;

void generate(int n, int k, int arr[], int pos) {
    if (pos == n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 1; i <= k; i++) {
        arr[pos] = i;
        generate(n, k, arr, pos + 1);
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];
    generate(n, k, arr, 0);
}
