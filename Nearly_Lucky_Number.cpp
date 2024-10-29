#include <bits/stdc++.h>

int main(){
    std::string num;
    std::cin >> num;

    int f = std::count(num.begin(), num.end(), '4');
    int s = std::count(num.begin(), num.end(), '7');

    if(f + s == 4 || f + s == 7)
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}
