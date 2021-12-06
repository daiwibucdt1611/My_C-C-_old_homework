//#include <iostream>
//using namespace std;
//#define max 100
//void nhap(int* a, int& n) {
//	cout << "Nhap n" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//}
//
//void xuat(int* a, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
//void dao_nguoc(int* a, int n) {
//	for (int i = 0; i < n; i++) {
//		swap(a[i], a[n - i - 1]);
//	}
//}
//int* tong_ma_tran(int* a, int* b, int n) {
//	int* kq = new int[max];
//	for (int i = 0; i < n; i++) {
//		kq[i] = a[i] + b[i];
//	}
//	return kq;
//}
//int* gopMang_tangDan(int* a, int n, int* b, int m) {
//	int* kq = new int[max];
//	int i = 0; int j = 0;
//	int dem = 0;
//	while (i < n && j < m) {
//		if (a[i] < b[j]) {
//			kq[dem] = a[i];
//			i++;
//		}
//		else {
//			kq[dem] = b[j];
//			j++;
//		}
//		dem++;
//	}
//	while (i < n) {
//		kq[dem] = a[i];
//		dem++;
//		i++;
//	}
//	while (j < m) {
//		kq[dem] = b[j];
//		dem++;
//		j++;
//	}
//	return kq;
//}
//int tong(int* a, int n) {
//	int kq = 0;
//	for (int i = 0; i < n; i++) {
//		kq += a[i];
//	}
//	return kq;
//}
//int* sdtHutech(int* a, int* b, int n, int k, int& dem) {
//	int* kq = new int[max];
//	int i = 0; int j = 0;
//	while (i < n && j < n) {
//		if (a[i] < b[j]) {
//			kq[dem] = a[i];
//			i++;
//		}
//		else {
//			kq[dem] = b[j];
//			j++;
//		}
//		dem++;
//		if (tong(kq, dem) > k) {
//			dem--;
//			return kq;
//		}
//	}
//	while (i < n) {
//		if (tong(kq, dem) > k) {
//			return kq;
//		}
//		kq[dem] = a[i];
//		dem++;
//		i++;
//	}
//	while (j < n) {
//		if (tong(kq, dem) > k) {
//			return kq;
//		}
//		kq[dem] = b[j];
//		dem++;
//		j++;
//	}
//	return kq;
//}
//int main() {
//	/*int a[100];*/
//	int* a = new int[max];
//	int* b = new int[max];
//	int* kq = new int[max];
//	int n, dem = 0, k = 5;
//	nhap(a, n);
//	nhap(b, n);
//	kq = sdtHutech(a, b, n, k, dem);
//	xuat(kq, dem);
//	delete[] a;
//	delete[] b;
//	delete[] kq;
//	return 0;
//}