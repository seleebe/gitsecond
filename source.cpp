#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "submodule/QuickSort.h"

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> array(n);
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	QuickSort(array, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
}