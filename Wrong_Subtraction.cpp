#include <bits/stdc++.h>

int main()
{
    long long n, k;
    std::cin >> n >> k;
    for(int i = 0; i < k; ++i){
        if(n % 10 == 0) n = n / 10;
        else n--;
    }
    std::cout << n << std::endl;
}
