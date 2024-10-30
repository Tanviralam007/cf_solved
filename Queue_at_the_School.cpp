#include <bits/stdc++.h>

int main()
{
	int queue_Length, seconds;
	std::cin >> queue_Length >> seconds;

	std::string queue_Line;
	std::cin >> queue_Line;
	std::cin.ignore();

	for(int current_second = 0; current_second < seconds; ++current_second){
		for(int position = 0; position < queue_Length; ++position){
			if (queue_Line[position] == 'B' && queue_Line[position + 1] == 'G') {
                std::swap(queue_Line[position], queue_Line[position + 1]);
                ++position;
            }
		}
	}
	std::cout << queue_Line << std::endl;
	return 0;
}
