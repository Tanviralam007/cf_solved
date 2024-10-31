#include <bits/stdc++.h>
#define ll long long

long long calculate_value(ll number)
{
    if (number >= 1) {
        if (number % 2 == 0) return number / 2;
        else return -((number + 1) / 2);
    }
}

int main()
{
    ll input_number;
    std::cin >> input_number;
    std::cout << calculate_value(input_number) << std::endl;

    return 0;
}
