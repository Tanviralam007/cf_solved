#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    int valid_cases_count = 0;
    while (t--) {
        int participant_a, participant_b;
        std::cin >> participant_a >> participant_b;

        if (participant_b - participant_a >= 2)
            valid_cases_count++;
    }

    std::cout << valid_cases_count << std::endl;

    return 0;
}
