#include <bits/stdc++.h>

int main()
{
	std::string input_string;
    std::getline(std::cin, input_string);

    std::set<char> unique_characters;
    for (char character : input_string) {
        if (isalpha(character))
            unique_characters.insert(character);
    }

    if(unique_characters.empty()) std::cout << 0 << std::endl;
    else std::cout << unique_characters.size() << std::endl;

	return 0;
}
