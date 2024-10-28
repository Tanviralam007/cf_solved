#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int len = s.length();
	int c = 0;
	for(int i = 0; i < len; ++i){
		if(s[i] == s[i + 1])
			c++;
	}
	std::cout << c << std::endl;

	return 0;
}
