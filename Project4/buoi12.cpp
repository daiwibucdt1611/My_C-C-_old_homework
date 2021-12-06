//#include <stdio.h>
//#include <math.h>
//#include <iostream>
//#include <ctime>
//#define max 100
//using namespace std;
//
//void NhapMang(int a[], int& n) {
//	cout << "nhap n" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "nhap phan tu thu " << i + 1 << endl;
//		cin >> a[i];
//	}
//}
//void XuatMang(int a[], int& n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
////Bài 1: viết hàm phát sinh ngẫu nhiên các giá trị của magn3 a, n phần tử
//void Bai1(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	srand(time(0));
//	// minN + rand() % (maxN+1-minN)
//	for (int i = 0; i < n; i++) {
//		// doan [2;10]
//		a[i] = 2 + rand() % (10 + 1 - 2);
//	}
//}
//// Bài 2: viết hàm gán n số lẻ đầu tiên vào mảng a
//void GanSoLe(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	int temp = 1;
//	for (int i = 0; i < n; i++) {
//		a[i] = temp;
//		temp += 2;
//	}
//}
////Bài 3: viết hàm gán n số nguyên tố đầu tiên vào mảng a
//bool checkSNT(int x) {
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void GanSNT(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	int i = 0;
//	int temp = 2;
//	while (i < n) {
//		if (checkSNT(temp) == true) {
//			a[i] = temp;
//			i++;
//		}
//		temp++;
//	}
//}
//
////BAI4
//void TimMaxMin(int a[], int n, int& maxx, int& min) {
//	maxx = a[0];
//	min = a[0];
//	for (int i = 1; i < n; i++) {
//		if (a[i] > maxx) {
//			maxx = a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//}
//int DemMin(int a[], int n) {
//	int min, maxx;
//	TimMaxMin(a, n, maxx, min);
//	int dem = 0;
//	for (int i = 1; i < n; i++) {
//		if (a[i] == min) {
//			dem++;
//		}
//	}
//	return dem;
//}
//int main() {
//	int a[max], n;
//	GanSoLe(a, n);
//	XuatMang(a, n);
//}