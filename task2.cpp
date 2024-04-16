#include <iostream>
using namespace std;

int jamp (int a, int b)
{
  int c = 0, d = 1, x = 1, y = 1, z = 1;
  while (d <= b) {
    for (int i = 0; i <= a; ++i) {
      if (y == a) break;
      if (i == d) {
        c += x;
        if (c <= a) cout << x << " ";
      }
      if (i != 0) {
        c += y;
        if (c <= a) cout << y << " ";
      }
      if (c == a) {
        c = 0; i = 0; y++;
        cout << "; ";
      }
      if (c > a) {
        c -= y;
        z = a - c;
        if (c <= a && z > 0) cout << z << " ";
        c = 0; i = 0; y = a;
      }
    }
    if (x < b) x++;
    else  { d++; x = 1; }
    y = 1; z = 1;
    cout << endl;
  }
}

int main ()
{
  int a = 10, b = 2;
  jamp (a, b);
}
