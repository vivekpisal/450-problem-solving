#include <bits/stdc++.h>
using namespace std;

bool subsetsum (vector < int >v, int s, int n)
{
  if (s == 0)
    return true;
  if (n == 0)
    return false;

  if (v[n - 1] > s)
    return subsetsum (v, s, n - 1);

  return subsetsum (v, s, n - 1) || subsetsum (v, s - v[n - 1], n - 1);

}

int main ()
{
  vector < int >v = { 1, 2, 3, 5, 6 };
  int s = 11;
  vector < vector < bool >> dp (v.size () + 1, vector < bool > (s + 1));
  for (int i = 0; i < v.size ()+1; i++)
  {
    for (int j = 0; j < s+1; j++)
      {
      if (i == 0)
        dp[i][j] = false;
      if (j == 0)
        dp[i][j] = true;
      }
  }

  for (int i = 1; i < v.size ()+1; i++)
  {
    for (int j = 1; j < s+1; j++)
    {
      if (v[i - 1] > j)
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - v[i - 1]];
    }
  }
  for (int i = 0; i < v.size ()+1; i++)
  {
    for (int j = 0; j < s+1; j++)
    {
        cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
