#include <bits/stdc++.h>
#define ll long long

int main()
{
    ll first_num, second_num, third_num, fourth_num;
    std::cin >> first_num >> second_num >> third_num >> fourth_num;
    std::set<ll> unique_numbers = {first_num, second_num, third_num, fourth_num};
    std::cout << 4 - unique_numbers.size();

    return 0;
}
