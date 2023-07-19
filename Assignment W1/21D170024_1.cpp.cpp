#include <iostream>
using namespace std;
int main() {
  double n, t, s;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    s = 2 + n * (n + 2);
    cout << s << endl;
  }
}
