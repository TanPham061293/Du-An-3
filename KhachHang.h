#pragma once
#include"CoKyHan.h"
#include"KhongKyHan.h"
#include<vector>

class KhachHang
{
private:
	vector<KhongKyHan> arr;
	vector<CoKyHan> arr2;
public:
	void Nhap();
	void Xuat();
};
