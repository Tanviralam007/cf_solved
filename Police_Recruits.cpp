#include <bits/stdc++.h>

int main()
{
	long long n;
	std::cin >> n;

	std::vector<int> a(n);
	for(int i = 0; i < n; ++i)
		std::cin >> a[i];

	int available_officers = 0, untreated_crimes = 0;

	for(int i = 0; i < a.size(); ++i){
		if(a[i] > 0)
			available_officers = available_officers + a[i];
		if(a[i] == -1){
			if(available_officers > 0){
				available_officers--;
			}
			else{
				untreated_crimes++;
			}
		}
	}
	std::cout << untreated_crimes << std::endl;

	return 0;
}
