#include <bits/stdc++.h>

int main()
{
    int test;
    std::cin >> test;

    while(test--) {
        std::string s;
        std::cin >> s;
        for(char &ch : s) ch = std::toupper(ch);
        if(s == "YES") std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }

    return 0;
}
