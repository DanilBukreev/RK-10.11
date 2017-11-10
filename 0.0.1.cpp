#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Введите размер массива" << endl;
  cin >> n;
  if (n <= 0) {
    cout << "error" << endl;
  }
  int a[n];
  for (m = 0; m < n; m++) {
    cin >> a[m];
  }
  for (m = 0; m < n / 2; m++) {
    swap(a[m], a[n - m - 1]);
  }
  for (m = 0; m < n; m++) {
    if (n != m) {
      cout << "error" << endl;
      return 0;
    }
    cout << a[m] << endl;
  }
}

