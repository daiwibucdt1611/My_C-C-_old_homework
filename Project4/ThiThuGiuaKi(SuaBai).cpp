//#include <iostream>
//#define maxx 100
//using namespace std;
////Bai 1
//void NhapTG(int& h, int& m, int& s) {
//	cout << "Nhap Gio Phut Giay" << endl;
//	cin >> h >> m >> s;
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
////void ThemViTri(int* a, int& n, int x, int k) {
////	for (int i = n; i >= k + 1; i--) {
////		a[i] = a[i - 1];
////	}
////	a[k + 1] = x;
////	n++;
////}
//void Them1PhanTu(int* a, int& n, int x, int k) {
//	for (int i = n; i >= k + 1; i--) {
//		a[i] = a[i - 1];
//	}
//	a[k] = x;
//	n++;
//}
//void ThemViTriChan(int* a, int& n, int x) {
//	for (int i = 0; i < n; i++) {
//		if (i == 0 || i % 3 == 0) {
//			Them1PhanTu(a, n, x, i);
//		}
//	}
//}
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
//		for (int j = i + 1; j < n; j++) {
//			if (UCLN(a[i], a[j]) > max) {
//				max = UCLN(a[i], a[j]);
//			}
//		}
//	}
//	return max;
//}
////Bai 4
//void MangConDaiNhat(int* a, int n) {
//	int Length = 1;
//	int max = 0;
//	int end = 0;
//	for (int i = 0; i < n - 1; i++) {
//		if (a[i] < a[i + 1]) {
//			Length++;
//			if (Length > max) {
//				max = Length;
//				end = i + 1;
//			}
//		}
//		else Length = 1;
//	}
//	for (int i = end - max + 1; i <= end; i++) {
//		cout << a[i] << " ";
//	}
//}
//
//int main() {
//	//Bai 1:
//	/*int h, m, s;
//	NhapTG(h, m, s);
//	Tang1s(h, m, s);
//	XuatTG(h, m, s);*/
//	//Bai 2:
//	/*Nhap(a, n);
//	ThemViTriChan(a, n, 9);
//	Xuat(a, n);
//	cout << "uoc chung lon nhat la " << cau2d(a, n) << endl;*/
//	//bai 4:
//	int n;
//	int* a = new int[maxx];
//	Nhap(a, n);
//	MangConDaiNhat(a, n);
//	delete[] a;
//	return 0;
//}