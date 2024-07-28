#include <iostream>
#include <vector>

int main()
{
	std::initializer_list<int> iList{ 1,2,3,4,5 };
	for (auto i : iList)
	{
		std::cout << i << std::endl;
	}
}
