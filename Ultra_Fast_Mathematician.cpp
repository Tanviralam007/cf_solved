#include <bits/stdc++.h>

int main()
{
    std::string first_number, second_number;
    std::cin >> first_number >> second_number;

    std::string result(first_number.length(), '0');
    for(size_t i = 0; i < first_number.length(); ++i){
        if(first_number[i] == second_number[i]) result[i] = '0';
        else result[i] = '1';
    }

    std::cout << result << std::endl;

    return 0;
}
