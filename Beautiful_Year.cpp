#include <bits/stdc++.h>

int main()
{
	int year;
	std::cin >> year;

	year++;
	while(true){
		std::string year_str = std::to_string(year);
		std::set<char> unique_digits(year_str.begin(), year_str.end());

		if(year_str.length() == unique_digits.size()){
			std::cout << year << std::endl;
			break;
		}
		year++;
	}

	return 0;
}
