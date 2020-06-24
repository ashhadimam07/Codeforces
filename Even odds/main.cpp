#include <iostream>
using namespace std;
int main()
{
   long long k, n;
   cin >> n >> k;
   long long odds = ( n + 1 ) / 2;
   cout << ( k <= odds ? 2 * k - 1 : 2 * ( k - odds ) );
}
