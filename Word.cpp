#include <bits/stdc++.h>

int main()
{
	std::string s;
	std::cin >> s;

	int u = 0, l = 0;
	for(char c : s){
		if(std::isupper(c)) u++;
		else l++;
	}

	if(u > l)
		std::transform(s.cbegin(), s.cend(), s.begin(), ::toupper);
	else if(l > u)
		std::transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
	else std::transform(s.cbegin(), s.cend(), s.begin(), ::tolower);

	std::cout << s << std::endl;

	return 0;
}
