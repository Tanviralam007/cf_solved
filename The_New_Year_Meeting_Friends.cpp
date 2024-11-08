#include <bits/stdc++.h>

int main()
{
	int x1, x2, x3;
	std::cin >> x1 >> x2 >> x3;
	std::vector<int> arr1 = {x1, x2, x3};
	std::sort(arr1.begin(), arr1.end());
	std::cout << (arr1[1] - arr1[0]) + (arr1[2] - arr1[1]) << std::endl;

	return 0;
}
