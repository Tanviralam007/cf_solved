/*All Praise belongs to the Almighty Allah*/

#include <bits/stdc++.h>

int main()
{
	int n, k;
	std::cin >> n >> k;

	int a = 0, m = 0;
	for(int i = 1; i <= n; ++i){
		a = a + 5 * i;
		if(a + k <= 240) m++;
		else break;
	}
	std::cout << m;

	return 0;
}
