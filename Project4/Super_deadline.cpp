//#include <stdio.h>
//#include <math.h>
//#include <iostream>
//#define max 100
//using namespace std;
////============================================//
////Bai 1: tinh luy thua a^b
//void Nhapa(int& a) {
//	cout << "moi ban nhap a= ";
//	cin >> a;
//	cout << endl;
//}
//void Nhapb(int& b) {
//	cout << "moi ban nhap b= ";
//	cin >> b;
//	cout << endl;
//}
//int TinhLuyThua(int a, int b) {
//	int c = 1;
//	for (int i = 1; i <= b; i++) {
//		c *= a;
//	}
//	return c;
//}
///*Bai 2: Viet ham nhap n tu ban phim, n>0, n la so
//chinh phuong sai nhap lai*/
//bool KTSoChinhPhuong(int x) {
//	for (int i = 1; i <= x; i++) {
//		if (i * i == x) return true;
//	}
//	return false;
//}
//void ChinhPhuong(int &a) {
//	while (1) {
//		cout << "moi ban nhap so chinh phuong" << endl;
//		cin >> a;
//		if (KTSoChinhPhuong(a) == true && a > 0) {
//			cout << "dung" << endl;
//			break;
//		}
//		cout << "Sai, nhap lai" << endl << endl;
//	}
//}
////Bài 3: Viết hàm hoán đổi 2 số a và b
//void HoanDoiab(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////Bai 4: Tinh tong lon nhat cac so tu nhien lien tiep bat dau tu so 1 va tong be hon n
//int Tong(int n) {
//	int S = 0;
//	for (int i = 1;; i++) {
//		S += i;
//		if (S > n) {
//			S -= i;
//			break;
//		}
//	}
//	return S;
//}
////Bai 5: Tim so doi xung cua 1 so n (n>100)
//int TimSoDoiXung(int x) {
//	int s = x;
//	while (x > 0) {
//
//		s = s * 10 + x % 10;
//	}
//	return s / 10;
//}
////Bai 5.1: Tim so dao nguoc cua 1 so n (n>100)
//int TimSoDaoNguoc(int x) {
//	int s = 0;
//	while (x > 0) {
//		s = s * 10 + x % 10;
//		x = x / 10;
//	}
//	return s;
//}
////Bai 6: viet 2 ham nhap va xuat man 1 chieu
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
////Bai 7: viet ham dao nguoc ham 1 chieu
//void HoanDoiMang(int a[], int n) {
//	int temp = a[1];
//	for (int i = 0; i <= n / 2; i++) {
//		temp = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = temp;
//	}
//}
////Bai 9: Xoa m phan tu dau tien cua mang
//void XoamPhanTuDau(int a[], int& n, int m) {
//	for (int i = 0; i < m; i++) {
//		for (int i = 0; i < n - 1; i++) {
//			a[i] = a[i + 1];
//		}
//		n--;
//	}
//}
////Bai 8: Xoa m phan tu cuoi cung cua mang
//void XoamPhanTuCuoi(int a[], int& n, int m) {
//	n = n - m;
//	/*for (int i = 0; i < m; i++) {
//		n--;
//	}
//}*/
//
////Bai 10: Them gia tri x vao chinh giua mang neu mang do le
//void ThemX(int a[], int& n, int x) {
//	if (n % 2 == 1) {
//		for (int i = n; i > n / 2; i--) {
//			a[i] = a[i - 1];
//		}
//		a[(n + 1) / 2] = x;
//		n++;
//	}
//	else cout << "mang co so phan tu chan" << endl;
//}
////Bai 11: Cho biet co bao nhieu phan tu co gia tri lon nhu nhau
//int DemPhanTu(int a[], int& n) {
//	int maxx = a[0];
//	int dem = 0;
//	for (; i < n; i++) {
//		if (maxx < a[i])
//			maxx = a[i];
//		if (a[j] == maxx)
//			dem++;
//	}
//	return dem;
//}
////Bai 12:
//bool ktSNT(int x) {
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void MangNT(int a[], int& n) {
//	int temp = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i+1; j < n; j++) {
//			if ((a[i] < a[j]) && (ktSNT(a[i]) == true) && (ktSNT(a[j]) == true)) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	//bai1
////cout << "Luy thua a^b la " << TinhLuyThua(a, b) << endl;
////=========================================================//
//	//bai2
////ChinhPhuong(a);
////=========================================================//
//	//bai3
////Nhapab(a, b);
////(a, b);
////=========================================================//
//	//bai4
////cout << "Tong lon nhat cua cac so tu nhien la " <<Tong(7)<<endl;
//	//bai5
////Nhapa(a);
////cout << "So doi xung cua " << a << " la " << TimSoDoiXung(a) << endl;
//	//bai 8
////XoamPhanTuCuoi(a, n, b);
//	//bai11
//	//int a[max], b, n;
//	//NhapMang(a, n);
//	//XuatMang(a, n);
//	//cout << "co " << DemPhanTu(a, n) << " phan tu giong nhau lon nhat" << endl;
//	int a;
//	Nhapa(a);
//	cout << "So dao nguoc cua " << a << " la " << TimSoDaoNguoc(a) << endl;
//}