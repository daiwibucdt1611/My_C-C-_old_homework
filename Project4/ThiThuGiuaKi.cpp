//#include <iostream>
//using namespace std;
//#define maxx 100
////Bai 1
//void NhapTG(int& h, int& m, int& s) {
//	cout << "Nhap Gio" << endl;
//	cin >> h;
//	cout << "Nhap Phut" << endl;
//	cin >> m;
//	cout << "Nhap Giay" << endl;
//	cin >> s;
//}
//void XuatTG(int h, int m, int s) {
//	cout << h << " h " << m << " m " << s << " s" << endl;
//}
//void Tang1s(int& h, int& m, int& s) {
//	s++;
//	if (s == 60) {
//		s = 0;
//		m++;
//		if (m == 60) {
//			m = 0;
//			h++;
//		}
//	}
//}
//
////Bai 2
//void Nhap(int* a, int& n) {
//	while (1) {
//		cout << "Nhap n" << endl;
//		cin >> n;
//		if (n % 2 == 0) {
//			break;
//		}
//		else {
//			cout << "nhap n chan" << endl;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << "nhap phan tu thu " << i << ":" << endl;
//		cin >> a[i];
//	}
//}
//
//void Xuat(int* a, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
//void ThemViTri(int* a, int& n, int x, int k) {
//	for (int i = n; i >= k + 2; i--)
//		a[i] = a[i - 1];
//	a[k + 1] = x;
//	n++;
//}
//void ThemGiaTriX(int* a, int& n) {
//	int x;
//	cout << "Nhap x" << endl;
//	cin >> x;
//	for (int i = 0; i < n; i++) {
//		if (a[i] % 2 == 0) {
//			ThemViTri(a, n, x, i);
//		}
//	}
//}
//
//int UCLN(int a, int b) {
//	for (int i = a; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			return i;
//		}
//	}
//}
//int cau2d(int* a, int n) {
//	int max = 0;
//	for (int i = 0; i < n - 1; i++) {
//	}
//}
////Bai 3
//int bai3()
////Bai 4
//void MangConDaiNhat(int* a, int* b, int n, int& dem) {
//	int j = 0;
//	for (; j < n; j++) {
//		for (int i = 0; i < n; i++)
//		{
//			int dem = 0;
//			while (a[i] < a[i + 1])
//			{
//				if (a[i] < a[i + 1]) {
//					b[j] = a[i];
//					b[j + 1] = a[i + 1];
//				}
//				else {
//					b[j] = a[i + 1];
//				}
//				dem++;
//				i++;
//				j++;
//			}
//		}
//	}
//}
//
//int main() {
//	//Bai 1:
//	/*
//	int h, m, s;
//	NhapTG(h, m, s);
//	Tang1s(h, m, s);
//	XuatTG(h, m, s);*/
//	//Bai 2
//	/*int n;
//	int* a = new int[maxx];
//	Nhap(a, n);
//	ThemGiaTriX(a, n);
//	Xuat(a, n);
//	return 0;*/
//	//Bai 3:
//	//Bai 4:
//	int* a = new int[maxx];
//	int* b = new int[maxx];
//	int n, dem = 0;
//	Nhap(a, n);
//	MangConDaiNhat(a, b, n, dem);
//	Xuat(b, n);
//	delete[] a;
//	delete[] b;
//}