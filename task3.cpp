#include <iostream>
using namespace std;

void evendigits (long long &a, int ans)
{
  if (a % 2 == 0) ans++;
  if (a == 1) cout << ans;
  if (a > 0)
    return evendigits (a /= 10, ans);
}

int main()
{
  int ans = 0;
  int cnt = 0;
  long long a;

  cout << "Enter number: ";
  cin >> a;
  evendigits(a, ans);
}
