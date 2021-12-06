//#include <iostream>
//#include <math.h>
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
//void NoiMang(int a[], int& n, int b[], int m) {
//	for (int i = 0; i < m; i++) {
//		a[n] = b[i];
//		n++;
//	}
//}
//
////==============================================================//
//void MangTangDan(int a[], int& n, int b[], int& m, int c[], int k) {
//	int i = 0;
//	int j = 0;
//	while ((i < n) && (j < m)) {
//		if (a[i] < b[j]) {
//			c[k] = a[i];
//			i++;
//			k++;
//		}
//		else {
//			c[k] = b[j];
//			k++;
//			j++;
//		}
//	}
//	for (; i < n; i++) {
//		c[k] = a[i];
//		k++;
//	}
//	for (; j < m; i++) {
//		c[k] = b[j];
//		k++;
//	}
//	for (int i = 0; i < k; i++) {
//		cout << c[i] << "  ";
//	}
//	cout << endl;
//}
//
//float Sau15nam(int n, int von, float lai) {
//	float kq = 0;
//	for (int i = 1; i <= n; i++) {
//		kq = kq + von + kq * lai;
//		cout << "nam thu " << i << " := " << kq << endl;
//	}
//	return kq;
//}
//float CauB(int nam, int von, float lai) {
//	float kq = 0;
//	float tong1 = 0;
//	for (int i = 1; i <= nam; i++) {
//		if (i <= 10) {
//			kq = kq + von + lai * tong1;
//			tong1 += von;
//			//lai thuong
//		}
//		else {
//			kq = kq + von + lai * kq;
//			//lai kep
//		}
//	}
//	return kq;
//}
//int main() {
//	/*cout << "Sau 15 nam Goc + Lai la " << Sau15nam(15, 20, 0.065) << endl;*/
//	cout << " cau 1 b " << CauB(15, 20, 0.065);
//	return 0;
//}