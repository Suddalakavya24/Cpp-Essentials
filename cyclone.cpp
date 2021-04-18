#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int nearest_Power(int n)
{
      return ceil(log2(n));
}
int main()
{
      int t;
      cin >> t;
      for (int i = 0; i < t; i++)
      {
            int l, r, x, counter1 = 0, counter2 = 0;
            cin >> l >> r >> x;
            int j = 0;
            for (int i = l; i <= (r - 1 + 1); i++)
            {
                  int n = nearest_Power(i);
                  int n1 = pow(2, n);
                  int n2 = x * (ceil(i / float(x)));
                  if (n1 < n2)
                        counter1++;
                  else if (n1 > n2)
                        counter2++;
                  else
                        continue;
            }
            if (counter1 < counter2)
                  cout << 2;
            else if (counter1 > counter2)
                  cout << 1;
            else
                  cout << 0;
      }
      return 0;
}