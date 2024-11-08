#include <bits/stdc++.h>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int match = 0, unmatch = 0;
	if(a == b)
		unmatch = unmatch + a;
	if(a > b){
		unmatch = b;
		match = (a - b) / 2;
	}

	if(a < b){
		unmatch = a;
		match = (b - a) / 2;
	}

	std::cout << unmatch << " " << match << std::endl;

	return 0;
}
