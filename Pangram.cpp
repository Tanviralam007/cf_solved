#include <bits/stdc++.h>

int main()
{
    int str_length;
    std::string input_str;
    std::cin >> str_length >> input_str;

    std::set<char> unique_chars;
    for(char ch : input_str)
        unique_chars.insert(std::tolower(ch));

    if(unique_chars.size() == 26)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
