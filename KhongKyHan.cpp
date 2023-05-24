#include "KhongKyHan.h"
//
//time_t t = time(0);
//struct tm* now = localtime(&t);
void KhongKyHan::Xuat()
{
	ThongTinKhachhang::XuatThongTinKhachHang();
	cout << "Lai suat:" << LaiSuat << endl;
}
KhongKyHan::KhongKyHan()
{
	LaiSuat = 0.8;
}
int KhongKyHan::TienLai()
{
	int n = ThongTinKhachhang::SoThangGui();
	return int(SoTienGui * LaiSuat * n);
}