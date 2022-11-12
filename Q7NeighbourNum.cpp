#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, j, n;
  cin >> n;
  int[][] a = new int[50][50];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (a[i][j] == 1) {
        if (i == 0 && j == 0) {
          a[i + 1][j] = 0;
          a[i][j + 1] = 0;
        } 
        else if (i = 0 && j == n) {
          a[i + 1][j] = 0;
          a[i][j - 1] = 0;
        } 
        else if (i == n && j == 0) {
          a[i - 1][j] = 0;
          a[i][j + 1] = 0;
        } 
        else if (i == n && j == n) {
          a[i - 1][j] = 0;
          a[i][j - 1] = 0;
        } 
        else if (i == 0) {
          a[i + 1][j] = 0;
          a[i][j + 1] = 0;
          a[i][j - 1] = 0;
        }
        else if (i == n) {
          a[i - 1][j] = 0;
          a[i][j + 1] = 0;
          a[i][j - 1] = 0;
        } 
        else if (j == 0) {
          a[i - 1][j] = 0;
          a[i + 1][j] = 0;
          a[i][j + 1] = 0;
        }
        else if (j == n) {
          a[i - 1][j] = 0;
          a[i + 1][j] = 0;
          a[i][j - 1] = 0;
        } 
        else {
          a[i - 1][j] = 0;
          a[i + 1][j] = 0;
          a[i][j + 1] = 0;
          a[i][j - 1] = 0;
        }
      }
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}