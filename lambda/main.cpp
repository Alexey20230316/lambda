#include<iostream>
#include<vector>
#include<algorithm>

	void print(std::vector<int> myVector)
	{
		for (const auto& i : myVector)
		{
			std::cout << i << " ";
		}
		std::cout << '\n';
	}

int main() {
	
	std::vector<int> myVector = {4, 7, 9, 14, 12};
	std::vector<int>::iterator it;
	it = myVector.begin();

	print(myVector);

	auto func = [](auto &a)
	{
		if (a % 2) a = a * 3;
	};
	
	std::for_each(begin(myVector), end(myVector),func);
	
	print(myVector);

	return 0;
}