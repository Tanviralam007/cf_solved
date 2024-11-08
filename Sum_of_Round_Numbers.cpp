#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> a;

		int i = 0;
		while(n > 0){
			if(n % 10 != 0){
				int ans = std::pow(10, i);
				ans = ans  * (n % 10);
				a.push_back(ans);
			}
			n = n / 10;
			++i;
		}

		std::cout << a.size() << std::endl;
		for(const auto& m : a)
			std::cout << m << " ";
		std::cout << std::endl;
	}
	return 0;
}
