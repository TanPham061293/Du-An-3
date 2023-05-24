#pragma once
#include <iostream>
#include <string>
#include <ctime>
#pragma warning (disable: 4996)
using namespace std;

class NgayLapSo
{
private:
	int NgayLap, ThangLap, NamLap;
public:
	void NhapNgay();
	void XuatNgay();
	NgayLapSo();
	NgayLapSo(int ngaylap, int thanglap, int namlap);
	int Getter_NamLap();
	int Getter_ThangLap();
	int Getter_NgayLap();
};

static time_t t = time(0);
static struct tm* now = localtime(&t);
bool KiemTraNhap(string str);
bool KiemtraNamNhuan(int nam);