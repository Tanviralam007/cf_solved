#include <bits/stdc++.h>

int main()
{
	long long k, n, w;
	std::cin >> k >> n >> w;

	/// sum of n(w) natural numbers as input
	long long total_cost = k * (w * (w + 1))/ 2;

	if(total_cost > n)
		std::cout << total_cost - n << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}
