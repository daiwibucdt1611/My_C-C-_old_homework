#include <iostream>
#include <fstream>
using namespace std;
#define maxx 100
void xuat(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}
void docFile(int* a, int& n) {
	ifstream file;
	file.open("input.txt");
	file >> n;
	for (int i = 0; i < n; i++) {
		file >> a[i];
	}
	file.close();
}
int main() {
	int* a = new int[maxx];
	int n;
	docFile(a, n);
	xuat(a, n);
	return 0;
}