#include <iostream>
using namespace std;

int SumArray(int arr[], int n) {
    if (n == 0) 
        return 0;
    return arr[n - 1] + SumArray(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << SumArray(arr, n);
}
