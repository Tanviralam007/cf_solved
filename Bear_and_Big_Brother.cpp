#include <bits/stdc++.h>
int main()
{
	int a, b;
	std::cin >> a >> b;

	int y = 0;
	while(a <= b){
		a = a * 3;
		b = b * 2;
		y++;
	}
	std::cout << y << std::endl;

	return 0;
}
