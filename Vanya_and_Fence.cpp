#include <bits/stdc++.h>

int main()
{
	int num_friends, fence_height;
	std::cin >> num_friends >> fence_height;

	std::vector<int> friend_heights(num_friends);
	for(int i = 0; i < num_friends; ++i)
		std::cin >> friend_heights[i];

	int width_needed = 0;
	for(int i = 0; i < num_friends; ++i){
		if(friend_heights[i] <= fence_height)
			width_needed += 1;
		else
			width_needed += 2;
	}
	std::cout << width_needed << std::endl;

	return 0;
}
