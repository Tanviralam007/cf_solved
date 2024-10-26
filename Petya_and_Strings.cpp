#include <bits/stdc++.h>

int main(){
    std::string s1, s2;
    std::cin >> s1 >> s2;

    /// transform() from algorithm header
    std::transform(s1.cbegin(), s1.cend(), s1.begin(), ::tolower);
    std::transform(s2.cbegin(), s2.cend(), s2.begin(), ::tolower);

    if(s1 < s2)
		std::cout << -1 << std::endl;
    else if(s2 < s1)
		std::cout << 1 << std::endl;
    else
		std::cout << 0 << std::endl;

    return 0;
}
