//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Xuat(int a[], int& n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
////Bài 1: viết hàm phát sinh ngẫu nhiên các giá trị của mang a, n phần tử, co gia tri trong [2;10];
//
//void Bai1(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	srand(time(0));
//	for (int i = 0; i < n; i++) {
//		// minN + rand() % (maxN+1-minN)
//		a[i] = 2 + rand() % (10 + 1 - 2);
//	}
//}
////Bài 2: lưu n so le vao mang a, bat dau tai 1
//void Bai2(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	int k = 1;
//	for (int i = 0; i < n; i++) {
//		a[i] = k;
//		k += 2;
//	}
//}
////bai3: luu n so nguyen to dau tien vao mang
//bool ktSNT(int x) {
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//void Bai3(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	int i = 0;
//	int k = 2;
//	while (i < n) {
//		if (ktSNT(k) == true) {
//			a[i] = k;
//			i++;
//		}
//		k++;
//	}
//}
////bai 4 ham tim min max
//void Bai4(int a[], int& n, int& max, int& min) {
//	max = a[0];
//	min = a[0];
//	for (int i = 1; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//}
////bai 5 dem min
//int Bai5(int a[], int n) {
//	int  max, min, dem = 0;
//	Bai4(a, n, max, min);
//	for (int i = 0; i < n; i++) {
//		if (a[i] == min) {
//			dem++;
//		}
//	}
//	return dem;
//}
////bai 6 mang a la day fibonaxi thu i + 1
////f(n) = f(n - 1) + f(n - 2)
////f(1) = 1
////f(2) =1
//int F(int x) {
//	if (x == 1 || x == 2)
//		return 1;
//	return F(x - 1) + F(x - 2);
//}
//void Bai6(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		a[i] = F(i + 1);
//	}
//}
//int main() {
//	int n, a[100];
//	Bai6(a, n);
//	Xuat(a, n);
//	cin.get();
//}