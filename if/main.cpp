#include <iostream>
using namespace std;

int main() {
    int a, b, c, a1, b1, c1;
    cin >> a >> b >>c;
  if (a <= b and b <= c) {
    cout << a << " " << b << " " << c;
  } else if (a <= c and c <= b) {
    cout << a << " " << c << " " << b;
  } else if (b <= a and a <= c) {
    cout << b << " " << a << " " << c;
  } else if (b <= c and c <= a) {
    cout << b << " " << c << " " << a;
  } else if (c <= a and a <= b) {
    cout << c << " " << a << " " << b;
  } else if (c <= b and b <= a) {
    cout << c << " " << b << " " << a;
  } else {
  cout << "i don't know!";
  cout << "by";
  }
	return 0;
}
