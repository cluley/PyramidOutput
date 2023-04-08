#include "pyrPrint.h"

int main(int argc, char** argv) {
	const int a_size = 6;
	int alpha[a_size]{ 1, 3, 6, 5, 9, 8 };

	const int b_size = 8;
	int bravo[b_size]{ 94, 67, 18, 44, 55, 12, 6, 42 };

	const int c_size = 10;
	int charlie[c_size]{ 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

	print_pyramid(alpha, a_size);
	print_pyramid(bravo, b_size);
	print_pyramid(charlie, c_size);

	return 0;
}