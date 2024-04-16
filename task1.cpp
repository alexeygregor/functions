#include <iostream>
#include <vector>
using namespace std;

int swapvec (vector <int>& a, int b[])
{
  int c[4];
  for (int i = 0; i < 4; ++i)
  {
    c[i] = a[i];
    a[i] = b[i];
    cout << a[i];
  }
  cout << endl;
  for (int i = 0; i < 4; ++i)
  {
    b[i] = c[i];
    cout << b[i];
  }
}

int main()
{
  vector <int> a = {1, 2, 3, 4};
  int b[] = {2, 4, 6, 8};

  swapvec (a, b);
}
