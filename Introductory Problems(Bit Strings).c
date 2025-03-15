

#include<iostream>
typedef long long ll;
using namespace std;

#define long long ll;
ll mod = 1e9 + 7;

ll power(ll base, ll expo)
{
	ll ans = 1;
	while(expo)
	{
		if(expo & 1LL) ans = (ans * base) % mod;
		base = (base*base) % mod;
		expo >>= 1LL;
	}
	return ans;
}

int main()
{
	ll n;
	cin >> n;
	cout << power(2LL, n) << endl;
} 
