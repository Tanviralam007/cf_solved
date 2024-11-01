#include <bits/stdc++.h>

int main()
{
    int number_of_elements;
    double total_sum = 0;
    std::cin >> number_of_elements;

    for(int i = 0; i < number_of_elements; ++i){
        int current_number;
        std::cin >> current_number;
        total_sum += current_number;
    }
    std::cout << std::fixed << std::setprecision(12) << total_sum / number_of_elements << std::endl;

    return 0;
}
