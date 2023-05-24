#include "CoKyHan.h"
#include"KhongKyHan.h"
void CoKyHan::NhapThongTinKhachCoKyHan()
{
	ThongTinKhachhang::NhapThongTinKHachHang();
	do
	{
		rewind(stdin);
		cout << "Ky han gui:";
		cin >> KyHanGui;
		if (KyHanGui < 2 || KyHanGui > 3)
		{
			cout << "Ky han #2 or #3. Xin kiem tra lai.\n";
		}
	} while (KyHanGui < 2 || KyHanGui > 3);

	if (KyHanGui == 2)
	{
		Laisuat = 0.05;
	}
	else if (KyHanGui == 3)
	{
		Laisuat = 0.06;
	}
}
void CoKyHan::XuatThongTinKhachCoKyHan()
{
	ThongTinKhachhang::XuatThongTinKhachHang();
	cout << "Ky han gui:" << KyHanGui << endl;
	cout << "Lai suat:" <<Laisuat<< endl;
}
CoKyHan::CoKyHan()
{
	KyHanGui = 1;
	Laisuat = 0.04;
}
CoKyHan::CoKyHan(int x, float b)
{
	KyHanGui = x;
	Laisuat = b;
}
int CoKyHan::TinhTienLai()
{
	int n = ThongTinKhachhang::SoThangGui();
	if (n >= KyHanGui)
	{
		return (SoTienGui * Laisuat);
	}
	return 0;
}