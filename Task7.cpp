#include <iostream>
using namespace std;

void spiral(int a[100][100], int top, int bottom, int left, int right, int &num) {
    if (top > bottom || left > right) 
      return;

    for (int i = left; i <= right; i++)
        a[top][i] = num++;

    for (int i = top + 1; i <= bottom; i++)
        a[i][right] = num++;

    for (int i = right - 1; i >= left && top < bottom; i--)
        a[bottom][i] = num++;

    for (int i = bottom - 1; i > top && left < right; i--)
        a[i][left] = num++;

    spiral(a, top + 1, bottom - 1, left + 1, right - 1, num);
}

int main() {
    int n;
    cin >> n;

    int a[100][100];
    int num = 1;

    spiral(a, 0, n - 1, 0, n - 1, num);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
