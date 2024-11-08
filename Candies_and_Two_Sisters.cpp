#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll test_cases;
	std::cin >> test_cases;

	while(test_cases--){
		ll number_of_candies;
		std::cin >> number_of_candies;
		// since 2 person
		if(number_of_candies > 2)
			std::cout << (number_of_candies - 1) / 2 << std::endl;
		else
			std::cout << 0 << std::endl;
	}

	return 0;
}
