#include <bits/stdc++.h>
int main()
{
	std::string s;
	std::cin >> s;

	std::vector<int> num;

	for(char ch : s){
		if(std::isdigit(ch)){
			num.push_back(ch - '0');
		}
	}

	std::sort(num.begin(), num.end());
	for(int i = 0; i < num.size(); ++i){
		std::cout << num[i];
		if(i < num.size() - 1){
			std::cout << '+';
		}
	}

	return 0;
}
