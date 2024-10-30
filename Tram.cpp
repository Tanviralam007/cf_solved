#include <bits/stdc++.h>

int main()
{
	int num_stops;
	std::cin >> num_stops;

	int current_passengers = 0, max_capacity = 0;

	for(int i = 0; i < num_stops; ++i){
		int passengers_exit, passengers_enter;
		std::cin >> passengers_exit >> passengers_enter;
		current_passengers = current_passengers - passengers_exit + passengers_enter;
		max_capacity = std::max(max_capacity, current_passengers);
	}

	std::cout << max_capacity << std::endl;

	return 0;
}
