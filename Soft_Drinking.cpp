#include <bits/stdc++.h>

int main()
{
	int n, k, l, c, d, p, nl, np;
	std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int lt = k * l;
	int lt_toast = lt / nl;
	int s_toast = c * d;
	int nl_pl = p / np;

	int x = std::min({lt_toast, s_toast, nl_pl});
	std::cout << x / n << std::endl;

	return 0;
}
