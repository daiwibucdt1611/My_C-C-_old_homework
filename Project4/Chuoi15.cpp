//#include <iostream>
//using namespace std;
//#define max 100
////char[100] "nguyen van a\0"
////char: '7'
//void nhap(char* s) {
//	cout << "moi nhap chuoi " << endl;
//	gets_s(s, max);
//}
//void xuat(char* s) {
//	puts(s);
//}
//void Xoa1PhanTu(char* s, int k) {
//	int len = strlen(s);
//	for (int i = k; i < len; i++) {
//		s[i] = s[i + 1];
//	}
//	/*s[len - 1] = '\0';*/
//}
////abcde,k=2,n=5
////a[2]=a[3]=> abdde\0
////a[3]=a[4]=> abdee\0
//// c2: a[4]=a[5] => abde\0
////s[len - 1]='\0'=>abde\0\0
//
//void Them1PhanTu(char* s, char x, int k) {
//	int len = strlen(s);
//	for (int i = len + 1; i >= k + 1; i--) {
//		s[i] = s[i - 1];
//	}
//	s[k] = x;
//	/*s[len + 1] = '\0';*/
//}
////abcde\0,x='m',k=2=>abmcde\0
////s[5]=s[4]=> abcdee
////s[4]=s[3]=> abcdde
////s[3]=s[2]=> abccde
////s[2]='m' => abmcde
////=>abmcde/0
//void chuHOA(char& a) {
//	if (a >= 'a' && a <= 'z') {
//		a -= 32;
//	}
//}
//void chuthuong(char& a) {
//	if (a >= 'A' && a <= 'Z') {
//		a += 32;
//	}
//}
//void chuoithuong(char* s) {
//	for (int i = 0; i < strlen(s); i++) {
//		chuthuong(s[i]);
//	}
//}
//int ChuyenSo(char t) {
//	t = t - 48; return t;
//}
//void ChuanHoaKhoangTrang(char* s) {
//	for (int i = 0; i < strlen(s) - 1; i++) {
//		if (s[i] == ' ' && s[i + 1] == ' ') {
//			Xoa1PhanTu(s, i);
//			i--;
//		}
//	}
//	if (s[0] == ' ') {
//		Xoa1PhanTu(s, 0);
//	}
//	if (s[strlen(s) - 1] == ' ') {
//		Xoa1PhanTu(s, strlen(s));
//	}
//}
//void ChuanHoaTenRieng(char* s) {
//	ChuanHoaKhoangTrang(s);
//	chuoithuong(s);
//	chuHOA(s[0]);
//	for (int i = 0; i < strlen(s) - 1; i++) {
//		if (s[i] == ' ') {
//			chuHOA(s[i + 1]);
//		}
//	}
//}
//void TachHoTen(char* s, char* ho, char* ten, char* tendem) {
//	int index1, index2;
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') {
//			index1 = i;
//			break;
//		}
//	}
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') {
//			index2 = i;
//		}
//	}
//	for (int i = 0; i < index1; i++) {
//		ho[i] = s[i];
//	}
//	ho[index1] = '\0';
//	int dem = 0;
//	for (int i = index1 + 1; i < index2; i++) {
//		tendem[dem] = s[i];
//		dem++;
//	}
//	tendem[dem] = '\0';
//	dem = 0;
//	for (int i = index2 + 1; i <= strlen(s); i++) {
//		ten[dem] = s[i];
//		dem++;
//	}
//}
//void XoaNhieuPhanTu(char* a, int k, int m) {
//	for (int i = 0; i < m; i++) {
//		Xoa1PhanTu(a, k);
//		/*i--;*/
//	}
//}
////s=nguyen anh, x= van, k=7=>s=nguyen vananh
////b1: them v tai 6 s= nguyen vanh
////b2: them a tai 6 s= nguyen vaanh
////b3: them n tai 6 s= nguyen vananh
//void ThemChuoi(char* s, char* x, int k) {
//	for (int i = 0; i < strlen(x); i++) {
//		Them1PhanTu(s, x[i], i + k);
//	}
//}
////thực hiện thay thế chuỗi như vd sau đâu:
////a= nguyen van a van b
////b=van
////c=thi
////=> a=nguyen thi a thi b
////kiểm tra chuỗi b có nằm trong chuỗi a hay k
////xóa k phần tử tại vị trí thứ k
//// thêm chuỗi x vào chuỗi a tại vị trí thứ k
//bool ktTrung(char* a, char* b, int i) {
//	int dem = 0;
//	for (int j = 0; j < strlen(b); j++) {
//		if (a[i] == b[j]) {
//			dem++;
//			i++;
//		}
//	}
//	if (dem == strlen(b)) return true;
//	return false;
//}
//bool kiemtrachuoi(char* a, char* b, char k) {
//	if (k > strlen(a) - strlen(b)) return false;
//	for (int i = 0; i < strlen(b); i++) {
//		if (b[i] != b[i + k]) {
//			return false;
//		}
//	}
//	return true;
//}
//void ChuoivaoChuoi(char* a, char* b, char* c) {
//	for (int i = 0; i < strlen(a); i++) {
//		if (kiemtrachuoi(a, b, i) == true) {
//			XoaNhieuPhanTu(a, i, strlen(b));
//			ThemChuoi(a, c, i);
//		}
//	}
//}
////Bài tập : chuẩn hóa địa chỉ IP :
////Cho IP = '1.0.123.45'
////= > '001.000.123.045
//void ChuanHoaIP(char* a) {
//	for(int )
//}
////void Fix(char* s) {
////	int len = strlen(s);
////	chuHOA(s[0]);
////	for (int i = 1; i < len; i++) {
////		if (s[i - 1] == ' ') {
////			while (s[i] == ' ') {
////				chuHOA(s[i]);
////			}
////		}
////		else {
////			chuthuong(s[i]);
////		}
////	}
////}
//
////void Fix(char* s) {
////	int len = strlen(s);
////	chuHOA(s[0]);
////	for (int i = 0; i < len; i++) {
////		for (int i = 1; i < len; i++) {
////			if (s[i - 1] == ' ') {
////				while (s[i] == ' ') {
////					Xoa1PhanTu(s, i);
////					chuHOA(s[i]);
////				}
////			}
////			else {
////				chuthuong(s[i]);
////			}
////		}
////	}
////}
////if (s[i] == ' ') {
////	while (s[i + 1] == ' ') {
////		Xoa1PhanTu(s, i + 1);
////		chuHOA(s[i + 1]);
////	}
////}
////else {
////	chuthuong(s[i + 1]);
////}
//int main() {
//	char* a = new char[max];
//	char* b = new char[max];
//	char* c = new char[max];
//	//char* ho = new char[max];
//	//char* tendem = new char[max];
//	//char* ten = new char[max];
//	nhap(a);
//	nhap(b);
//	nhap(c);
//	//ChuanHoaTenRieng(s);
//	//TachHoTen(s, ho, ten, tendem);
//	//xuat(ho);
//	//xuat(tendem);
//	//xuat(ten);
//	//char b = 'b';
//	//char t1 = '3';
//	//char t2 = '2';
//	//cout << ChuyenSo(t1) * ChuyenSo(t2);
//	/*for (int i = 0; i < strlen(a); i++) {
//		if (ktTrung(a, b, i) == true) {
//			cout << i << endl;
//		}
//	}*/
//	ChuoivaoChuoi(a, b, c);
//	xuat(a);
//	return 0;
//}