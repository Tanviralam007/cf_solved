#include <bits/stdc++.h>

int main()
{
	int test;
	std::cin >> test;

	while(test--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;

		if(a + b == c || b + c == a || a + c == b)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}

	return 0;
}
