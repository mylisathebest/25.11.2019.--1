//Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k. В комментариях напишите, почему перебор - эффективный

#include <iostream>
#include <vector>
using namespace std;

void doit(vector<int> array, int n, int k) {
	for (int i = 0; i < n; i++) {
		int m;
		int val = array[i];
		int v = 1;
		while (val > 0) {
			m = val % 10;
			if (m > 0)
				v *= m;
			val /= 10;
		}
		if (v > k)
			cout << array[i] << ": " << v << ">" << k << "\n\r";
	}
}

int main() {
	int n, k;
	cout << "Input k: ";
	cin >> k;
	cout << "Input array length: ";
	cin >> n;
	vector<int> array(n);
	cout << "Input array\n\r";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	doit(array, n, k);
	return 0;
}

