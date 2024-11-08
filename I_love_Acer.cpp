#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for(int i = 0; i < n; ++i)
		std::cin >> a[i];

	int per_best = a[0], per_worst = a[0], amazing = 0;

	for(int i = 1; i < a.size(); ++i){
		if(a[i] > per_best){
			per_best = a[i];
			amazing++;
		}
		else if(a[i] < per_worst){
			per_worst = a[i];
			amazing++;
		}
	}
	std::cout << amazing << std::endl;

	return 0;
}
