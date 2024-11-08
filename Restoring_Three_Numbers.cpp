#include <bits/stdc++.h>

int main()
{
	int x1, x2, x3, x4;
	std::cin >> x1 >> x2 >> x3 >> x4;
	std::vector<long long> a = {x1, x2, x3, x4};
	sort(a.begin(), a.end());

	std::cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << std::endl;
	return 0;
}
