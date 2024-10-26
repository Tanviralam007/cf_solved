#include <bits/stdc++.h>

std::pair<int, int> find_position(std::vector<std::vector<int>>& mat)
{
	for(int i = 0; i < mat.size(); ++i)
	{
		for(int j = 0; j < mat[i].size(); ++j)
		{
			if(mat[i][j] == 1)
			{
				return {i, j};
			}
		}
	}
    return {-1, -1};
}

int main()
{
    int rows = 5, cols = 5;

	std::vector<std::vector<int>> mat(rows, std::vector<int>(cols, 0));

	for(int i = 0; i < rows; ++i)
	{
		for(int j = 0; j < cols; ++j)
		{
			std::cin >> mat[i][j];
		}
	}

	std::pair<int, int> pos = find_position(mat);

    std::cout << std::abs(pos.first - 2) + std::abs(pos.second - 2) << std::endl;

	return 0;
}
