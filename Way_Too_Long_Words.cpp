#include <bits/stdc++.h>

int main(void)
{
	int t;
	std::string s;
	std::cin >> t;
	while(t--){
		std::cin >> s;
		int c = s.length();

		if(c > 0 && c <= 100){
			if(c > 10){
				std::cout << s[0] << c - 2 << s[c - 1] << std::endl;
			}
			else {
				std::cout << s << std::endl;
			}
		}
	}

	return 0;
}
