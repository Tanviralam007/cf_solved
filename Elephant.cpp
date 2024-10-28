#include <bits/stdc++.h>

int main()
{
	int x;
	std::cin >> x;

	if(x > 0){
		if(x % 5 == 0)
			std::cout << x / 5 << std::endl;
		else
			std::cout << (x / 5) + 1 << std::endl;
	}

	return 0;
}
