#include "iter.hpp"

int main() {
	int array[] = {1, 2, 3, 4, 5, 6};

	iter(array, 6, dec);
	iter(array, 6, print);

	std::cout << std::endl;

	std::string strs[] = {"123", "112asad", "agdkmga", "111"};
	iter(strs, 6, print);

	std::cout << std::endl;


	double arr[] = {1.13123, 2.12313, 3.121, 4.34636, 5.0, 6.52};
	iter(arr, 6, dec);
	iter(arr, 6, print);

	std::cout << std::endl;

}
