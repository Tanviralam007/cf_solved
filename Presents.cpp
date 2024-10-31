#include <bits/stdc++.h>
int main()
{
    int number_of_friends;
    std::cin >> number_of_friends;

    std::vector<int> presents(number_of_friends);
    for(int i = 0; i < number_of_friends; ++i)
        std::cin >> presents[i];

    std::map<int, int> present_i_map;
    for(int i = 0; i < number_of_friends; ++i)
        present_i_map[presents[i]] = i + 1;

    for(auto it = present_i_map.begin(); it != present_i_map.end(); ++it)
        std::cout << it->second << " ";

    return 0;
}
