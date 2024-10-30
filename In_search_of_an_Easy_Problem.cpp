#include <bits/stdc++.h>

int main()
{
	int num_people;
	std::cin >> num_people;

	std::vector<int> opinions(num_people);
	for(int i = 0; i < num_people; ++i)
		std::cin >> opinions[i];

	if(opinions.size() == 1){
		if(opinions[0] == 0)
			std::cout << "EASY" << std::endl;
		else
			std::cout << "HARD" << std::endl;
	}

	if(opinions.size() > 1){
		int is_hard = 0;
		for(int i = 0; i < opinions.size(); ++i){
			if(opinions[i] == 1)
				is_hard = 1;
		}

		if(is_hard == 1)
			std::cout << "HARD" << std::endl;
		else
			std::cout << "EASY" << std::endl;
	}

	return 0;
}
