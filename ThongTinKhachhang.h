#pragma once
#include "Ngay.h"
class ThongTinKhachhang
{
protected:
	int CMND;
	string HoTen;
	int SoTienGui;
	NgayLapSo NgayLap;
public:
	void NhapThongTinKHachHang();
	void XuatThongTinKhachHang();
	ThongTinKhachhang();
	ThongTinKhachhang(int, string, int, NgayLapSo);
	int SoThangGui();
	int Getter_CMND();
	void Setter_CMND(int x);
};

