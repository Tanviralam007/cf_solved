#include <bits/stdc++.h>

int main()
{
	int total_levels, level;
	std::cin >> total_levels;

	std::set<int> unique_levels;

	int x_levels, y_levels;
	std::cin >> x_levels;
	for(int i = 0; i < x_levels; ++i) {
		std::cin >> level;
		unique_levels.insert(level);
	}

	std::cin >> y_levels;
	for(int i = 0; i < y_levels; ++i) {
		std::cin >> level;
		unique_levels.insert(level);
	}

	if(unique_levels.size() == total_levels)
		std::cout << "I become the guy." << std::endl;
	else
		std::cout << "Oh, my keyboard!" << std::endl;

	return 0;
}
