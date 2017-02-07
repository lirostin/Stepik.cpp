#include <iostream>
using namespace std;

int main() {
    int a, b, c, a1, b1, c1;
    cin >> a >> b >>c;
    if (a == b and b == c ) {
        a1 = a;
        b1 = b;
        c1 = c;
    }
    if (a >= b && a >= c) {
        c1 = a;
    //    cout << c1 << " line 1 ";
    } else if (b >= a && b >= c) {
        c1 = b;
    //    cout << c1 << " line 2 ";
    } else if (c >= b && c >= a) {
        c1 = c;
    //    cout << c1 << " line 3 ";
    }
    if (a <= c1 and (a >= b || a >= c) and a != c1) {
        b1 = a;
    //    cout << b1 << " line 4 ";
    } else if (b <= c1 and (b >= a || b >= c) and b != c1) {
        b1 = b;
    //    cout << b1 << " line 5 ";
    } else if (c <= c1 and (c >= a || c >= b) and c != c1) {
        b1 = c;
    //    cout << b1 << " line 6 ";
    }
    if (a == c1 and b == b1) {
        a1 = c;
    //    cout << a1 << " line 7 ";
    } else if (a == c1 and c == b1) {
        a1 = b;
    //    cout << a1 << " line 8 ";
    } else if (b == c1 and a == b1) {
        a1 = c;
    //    cout << a1 << " line 9 ";
    } else if (b == c1 and c == b1) {
        a1 = a;
    //    cout << a1 << " line 10 ";
    } else if (c == c1 and a == b1) {
        a1 = b;
    //    cout << a1 << " line 11 ";
    } else if (c == c1 and b == b1) {
        a1 = a;
    //    cout << a1 << " line 12 ";
    }
    cout << a1 <<" " << b1 << " " << c1;
	return 0;
}
