#include <bits/stdc++.h>

int main()
{
    int number_of_terms;
    std::cin >> number_of_terms;

    if(number_of_terms == 1) std::cout << "I hate it";
    else if(number_of_terms > 1) std::cout << "I hate that ";

    for(int i = 2; i < number_of_terms; ++i){
        if(i % 2 == 1) std::cout << "I hate that ";
        else std::cout << "I love that ";
    }

    if(number_of_terms % 2 == 0 && number_of_terms > 1) std::cout << "I love it ";
    else if(number_of_terms % 2 == 1 && number_of_terms > 1) std::cout << "I hate it ";

    return 0;
}
