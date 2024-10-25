#include <bits/stdc++.h>

int main(){
    int n, c = 0;
    std::string s;
    std::cin >> n;

    while(n--){
        std::cin >> s;

        if(s == "++X" || s == "X++") c++;
        else c--;
    }
    std::cout << c << std::endl;

    return 0;
}
