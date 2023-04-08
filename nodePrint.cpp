#include "nodePrint.h"

void print_node(int i, int key, int parent) {
	if (i % 2 == 0) cout << " right(" << parent << ") " << key << '\n';
	else cout << " left(" << parent << ") " << key << '\n';
}