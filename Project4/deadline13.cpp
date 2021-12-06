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
////Bai 6: Cho biet dong nao co tong phan tu lon nhat
//int TongDong(int a[][max], int n, int m, int k) {
//	int kq = 0;
//	for (int j = 0; j < m; j++) {
//		kq += a[k][j];
//	}
//
//	return kq;
//}
//int Bai6(int a[][max], int n, int m) {
//	int index = 0;
//	int max1 = 0;
//	for (int i = 0; i < n; i++) {
//		if (TongDong(a, n, m, i) > max1) {
//			max1 = TongDong(a, n, m, i);
//			index = i;
//		}
//	}
//	return index;
//}
////Bai 7
//bool ktSNT(int x) {
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//int DemSNT(int a[][max], int n, int m, int k) {
//	int dem = 0;
//	for (int i = 0; i < n; i++) {
//		if (ktSNT(a[i][k]) == true) {
//			dem++;
//		}
//	}
//	return dem;
//}
//int Bai7(int a[][max], int n, int m) {
//	int index = 0;
//	int max1 = 0;
//	for (int j = 0; j < m; j++) {
//		if (DemSNT(a, n, m, j) > max1) {
//			max1 = DemSNT(a, n, m, j);
//			index = j;
//		}
//	}
//	return index;
//}
//int Bai7c2(int a[][max], int n, int m) {
//	int dem = 0;
//	int index = 0;
//	int max1 = 0;
//	for (int j = 0; j < m; j++) {
//		for (int i = 0; i < n; i++) {
//			if (ktSNT(a[i][j]) == true) {
//				dem++;
//			}
//		}
//		if (dem > max1) {
//			max1 = dem;
//			index = j;
//		}
//		dem = 0;
//	}
//	return index;
//}
////bai 8
//void XoaDongK(int a[][max], int& n, int m, int k) {
//	for (int j = 0; j < m; j++) {
//		for (int i = k; i < n; i++) {
//			a[i][j] = a[i + 1][j];
//		}
//	}
//	n--;
//}
////bai 9
//void XoaCotK(int a[][max], int n, int& m, int k) {
//	for (int j = k; j < m; j++) {
//		for (int i = 0; i < n; i++) {
//			a[i][j] = a[i][j + 1];
//		}
//	}
//	m--;
//}
////Bai 10 Xoa X Dong Tu K
//void XoaXDongTuK(int a[][max], int& n, int m, int x, int k) {
//	for (int i = 0; i < x; i++) {
//		XoaDongK(a, n, m, k);
//	}
//}
//int TongCheoChinh(int a[][max], int n, int m) {
//	int kq = 0;
//	for (int i = 0; i < n; i++) {
//		kq += a[i][i];
//	}
//	return kq;
//}
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
////Bai 11 vs bai 12
//int det23(int a[][max], int n, int m) {
//	int kq = 0;
//	if ((n == 2) && (m == 2)) {
//		kq = a[0][0] * a[1][1] - a[1][0] * a[0][1];
//		return kq;
//	}
//	if ((n == 3) && (m == 3)) {
//		kq = (a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[0][2] * a[2][1] * a[1][0]) -
//			(a[0][2] * a[1][1] * a[2][0] + a[2][2] * a[1][0] * a[0][1] + a[0][0] * a[2][1] * a[1][2]);
//		return kq;
//	}
//	return -1;
//}
//
////Bai 12
////void MaTranM(int a[][max], int kq[][max], int& n, int& m, int x, int y) {
////	XoaDongK(a, n, m, x);
////	XoaCotK(a, n, m, y);
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < m; j++) {
////			kq[i][j] = a[i][j];
////		}
////	}
////}
////void DinhThucCap3(int a[][max], int& n, int m) {
////	int tong = 0, kq[max][max];
////	for (int i = 0; i < 3; i++) {
////		MaTranM(a, kq, n, m, 1, i);
////		tong += a[1][i] + DinhThucCap2(kq, 2, 2);
////		cout << tong << endl;
////	}
////}
//
////bai 14
//void ChuyenVi(int a[][max], int kq[][max], int n, int m) {
//	int temp = 0;
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			temp = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = temp;
//		}
//	}
//}
//void ChuyenVi2(int a[][max], int kq[][max], int n, int m, int& m1, int& n1) {
//	int temp = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			kq[j][i] = a[i][j];
//		}
//	}
//	n1 = m;
//	m1 = n;
//}
////Bai 13
////bool check_DoiXung(int a[][max], int n, int m) {
////	for (int i = 0; i < n - 1; i++) {
////		for (int j + 1 = 0; j < m; j++) {
////			if (a[i][j] != a[j][i]) return false;
////			/*cout << "a[" << i << "][" << j << "]" << "  ";*/
////		}
////	}
////	return true;
////}
//int main() {
//	int a[max][max], kq[max][max];
//	int n, m, n1, m1;
//	nhap(a, n, m);
//	ChuyenVi2(a, n, m, kq, m1, n1);
//	xuat(kq, n1, m1);
//
//	return 0;
//}