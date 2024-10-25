#include <bits/stdc++.h>

int main(){
    int n;
	int p, v, t;
    int tc = 0;
	std::cin >> n;

	while(n--){
		std::cin >> p >> v >> t;
		int c = 0;
		if((p==1 && v==1) || (p==1 && t==1) || (v==1 && t==1)){
			c++;
            tc += c;
        }
	}
    std::cout << tc << std::endl;

    return 0;
}

