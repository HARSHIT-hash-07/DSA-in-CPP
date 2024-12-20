#include <iostream>
using namespace std;
const int N = 10e5 + 10;
int arr[N];
int prefix_sum[N];

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    cin >> arr[i];
    prefix_sum[i] = prefix_sum[i - 1] + arr[i];
  }
  int t;
  cin >> t;

  while (t--)
  {
    int l, r;
    cin >> l >> r;
    cout << prefix_sum[r] - prefix_sum[l - 1];
  }

  return 0;
}