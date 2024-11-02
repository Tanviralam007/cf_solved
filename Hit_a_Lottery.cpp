#include <bits/stdc++.h>
#define ll long long
int main()
{
	ll n;
	std::cin >> n;
	std::cout << n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + ((((n % 100) % 20) % 10) % 5) / 1 << std::endl;

	return 0;
}
