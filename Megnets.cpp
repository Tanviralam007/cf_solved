#include <bits/stdc++.h>

int main()
{
    int number_of_participants;
    std::cin >> number_of_participants;

    std::vector<std::string> participant_names(number_of_participants);

    for (int i = 0; i < number_of_participants; ++i)
        std::cin >> participant_names[i];

    int unique_groups = 1;
    for (int i = 1; i < number_of_participants; ++i) {
        if (participant_names[i] != participant_names[i - 1])
            unique_groups++;
    }

    std::cout << unique_groups << std::endl;

    return 0;
}
