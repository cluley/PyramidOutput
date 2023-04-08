#include "pyrPrint.h"
#include "nodePrint.h"

void print_pyramid(int* arr, int size) {
	cout << "Исходный массив: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	int ceiling(2);
	int cntr(1);
	int lvl(1);
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << i << " root " << arr[i] << '\n';
		}
		else {
			if (cntr == ceiling) {
				cntr = 1;
				ceiling *= ceiling;
				cout << lvl;
				lvl++;
			}
			else {
				cntr++;
				cout << lvl;
			}
			print_node(i, arr[i], arr[((i - 1) / 2)]);
		}
	}
	cout << endl;
}