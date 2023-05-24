#pragma once
#include"ThongTinKhachhang.h"
class CoKyHan : public ThongTinKhachhang
{
private:
	int KyHanGui;
	float Laisuat;
public:
	void NhapThongTinKhachCoKyHan();
	void XuatThongTinKhachCoKyHan();
	CoKyHan();
	CoKyHan(int, float);
	int TinhTienLai();
};

