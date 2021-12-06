//#include <iostream>
//using namespace std;
//#define max 100
//void nhap(int a[][max], int& n, int& m) {
//	cout << "nhap so dong" << endl;
//	cin >> n;
//	cout << "nhap so cot" << endl;
//	cin >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//		}
//	}
//}
//void xuat(int a[][max], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << a[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
////Bài 1: tính tổng các phần tử trong mảng 2 chiều
//
//int Tong(int a[][max], int n, int m) {
//	int kq = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			kq += a[i][j];
//		}
//	}
//	return kq;
//}
//
////Bài 2: Tính tổng các phần tử của đường chéo chính ma trận vuông
//
//int TongCheoChinh(int a[][max], int n, int m) {
//	int kq = 0;
//	for (int i = 0; i < n; i++) {
//		kq += a[i][i];
//	}
//	return kq;
//}
//
////Bài 3: Tính tổng các phần tử đường chéo phụ ma trận vuông
//
//int TongCheoPhu(int a[][max], int n, int m) {
//	int kq = 0;
//	if (n == m) {
//		for (int i = 0; i < n; i++) {
//			kq += a[i][n - i - 1];
//		}
//		return kq;
//	}
//	return -1;
//}
//
////Bài 4: Tính tổng 2 ma trận(2 ma trận có số dòng, số cột tương đương nhau)
//void tong2matran(int a[][max], int b[][max], int m, int n, int kq[][max]) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			kq[i][j] = a[i][j] + b[i][j];
//		}
//	}
//}
////Bài 5: Cho biết dòng nào có nhiều số 0 nhất
//int Dem0(int a[][max], int n, int m, int k) {
//	int dem = 0;
//	for (int j = 0; j < m; j++) {
//		if (a[k][j] == 0) {
//			dem++;
//		}
//	}
//	return dem;
//}
//int Bai5(int a[][max], int n, int m) {
//	int index = 0;
//	int max1 = 0;
//	for (int i = 0; i < n; i++) {
//		if (Dem0(a, n, m, i) > max1) {
//			max1 = Dem0(a, n, m, i);
//			index = i;
//		}
//	}
//	return index;
//}
////Bài 6: cho biết dòng nào có tổng các phần tử lớn nhất
//
//int main() {
//	int a[max][max], b[max][max], kq[max][max];
//	int n, m;
//	nhap(a, n, m);
//	xuat(a, n, m);
//	cout << "bai 5 = " << Bai5(a, n, m);
//	return 0;
//}