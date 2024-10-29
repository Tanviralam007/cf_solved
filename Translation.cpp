#include <bits/stdc++.h>

int main()
{
	std::string a, b;
	std::cin >> a >> b;
	std::reverse(a.begin(), a.end());
	if(a == b) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;

	return 0;
}
