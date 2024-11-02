#include <bits/stdc++.h>
#define ll long long

int main()
{
	int test_cases;
	std::cin >> test_cases;

	while(test_cases--) {
		ll num_a, num_b;
		std::cin >> num_a >> num_b;

		if(num_a % num_b != 0)
			std::cout << num_b - (num_a % num_b) << std::endl;
		else
			std::cout << 0 << std::endl;
	}

	return 0;
}
