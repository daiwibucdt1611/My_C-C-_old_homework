//#include <iostream>
//#define max 100
//using namespace std;
//void nhap(int a[], int& n) {
//	cout << "moi ban nhap n" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "moi ban nhap phan tu thu " << i + 1 << endl;
//		cin >> a[i];
//	}
//}
//
//void xuat(int a[], int& n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
//
//void xoa1phantu(int a[], int& n, int k) {
//	for (int i = k; i < n - 1; i++) {
//		a[i] = a[i + 1];
//	}
//	n--;
//}
//void xoamphantu(int a[], int& n, int m, int k) {
//	for (int i = 1; i <= m; i++) {
//		xoa1phantu(a, n, k);
//	}
//}
//void ThemViTri(int a[], int& n, int x, int k) {
//	for (int i = n; i >= k + 1; i--) {
//		a[i] = a[i - 1];
//	}
//	a[k] = x;
//	n++;
//}
//void XoaPhanTuLe(int a[], int& n) {
//	for (int i = 0; i < n; i++) {
//		if (a[i] % 2 == 1) {
//			xoa1phantu(a, n, i);
//			i--;
//		}
//	}
//}
//bool ktSNT(int x) {
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void XoaPhanTuSNT(int a[], int& n) {
//	for (int i = 0; i < n; i++) {
//		if (ktSNT(a[i]) == true) {
//			xoa1phantu(a, n, i);
//			i--;
//		}
//	}
//}
//
//void ThemGiaTriSNT(int a[], int& n, int x) {
//	for (int i = 0; i < n; i++) {
//		if (ktSNT(a[i]) == true) {
//			ThemViTri(a, n, x, i + 1);
//			i++;
//		}
//	}
//}
//int TimTong(int a[], int n, int k) {
//	int tong = 0;
//	for (int i = 0; i < n; i++) {
//		tong += a[i];
//		if (tong >= k) {
//			tong -= a[i];
//			break;
//		}
//	}
//	return tong;
//}
//
//int main() {
//	int a[max];
//	int n;
//	nhap(a, n);
//	xuat(a, n);
//	cout << "tong=" << TimTong(a, n, 5);
//	return 0;
//}