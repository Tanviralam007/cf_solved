#include <bits/stdc++.h>

int main()
{
	int k, r;
	std::cin >> k >> r;
	int n = 1;
	while(true){
		if(((k * n) % 10 == r) || (k * n) % 10 == 0)
			break;
		n++;
	}
	std::cout << n << std::endl;


	return 0;
}
