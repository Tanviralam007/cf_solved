#include <bits/stdc++.h>

int main()
{
	std::string s;
	std::cin >> s;

	if(s.length() <= 100){
		std::set<int> u;
		for(char ch : s)
			u.insert(ch);

		if(u.size() % 2) std::cout << "IGNORE HIM!" << std::endl;
		else std::cout << "CHAT WITH HER!" << std::endl;
	}

	return 0;
}
