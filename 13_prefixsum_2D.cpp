//EP 13

#include <iostream>
using namespace std;
const int N = 10e3 + 10;
int arr[N][N];
long long pfs[N][N];

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            pfs[i][j] = arr[i][j] + pfs[i - 1][j] + pfs[i][j - 1] - pfs[i - 1][j - 1];
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a >>b >> c>> d;
        cout << pfs[c][d] - pfs[a-1][d] - pfs[c][b-1] + pfs[a-1][b-1];
        
    }

    return 0;
}