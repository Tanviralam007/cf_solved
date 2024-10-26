#include <bits/stdc++.h>

int main()
{
	int m, n;
	std::cin >> m >> n;
	if(m >= 1 && n >= 1){
		int x = ((m * n) / 2); /// integer division
		std::cout << x << std::endl;
	}

	return 0;
}
