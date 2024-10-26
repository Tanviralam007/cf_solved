#include <bits/stdc++.h>
int main()
{
	int n = 0, k = 0;
	std::cin >> n >> k;

	if(n >= k){
		int a[n];
		for(int i = 0; i < n; ++i){
			std::cin >> a[i];
		}

		int c = 0;
		int k_ = a[k - 1];
		for(int i = 0; i < n; ++i){
			if(a[i] >= k_ && a[i] != 0){
				c++;
			}
		}
		std::cout << c << std::endl;
	}
	return 0;
}
