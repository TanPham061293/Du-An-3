#include "ThongTinKhachhang.h"

int leng1;
string str2; bool check;
void ThongTinKhachhang::NhapThongTinKHachHang()
{
	do
	{
		rewind(stdin);
		cout << "Ten khach hang:";
		getline(cin, HoTen);
		leng1 = HoTen.length();
		if (leng1 > 50)
		{
			cout << "Do dai chuoi vuot gioi han. Xin kiem tra lai.\n";
		}
	} while (leng1 > 50);

	do
	{
		do
		{
			check = true;
			cout << "Tien gui (trieu dong):";
			getline(cin, str2);
			check = KiemTraNhap(str2);
			if (check == false)
			{
				cout << "Tien gui khong duoc chua ki tu # so. Xin kiem tra lai.\n";
			}
		} while (check == false);
		SoTienGui = atoi((char*)str2.c_str());
		if (SoTienGui < 100000)
		{
			cout << "So tien gui phai lon hon 100.000 vnd. Xin kiem tra lai.\n";
		}
	} while (SoTienGui < 100000);
	
	rewind(stdin);
	NgayLap.NhapNgay();

}
void ThongTinKhachhang::XuatThongTinKhachHang()
{
	cout << "Ten khach hang:" << HoTen << endl;
	cout << "So tien gui:" << SoTienGui << endl;
	NgayLap.XuatNgay();
}
ThongTinKhachhang::ThongTinKhachhang()
{
	CMND = 00000;
	HoTen = "A";
	SoTienGui = 0;
	NgayLapSo();
}
ThongTinKhachhang::ThongTinKhachhang(int cmnd, string ten, int tiengui, NgayLapSo x)
{
	CMND = cmnd;
	HoTen = ten;
	SoTienGui = tiengui;
	NgayLap = x;
}
int ThongTinKhachhang::SoThangGui()
{
	int n = 0;
	if ((now->tm_year + 1900) >= NgayLap.Getter_NamLap())
	{
		n = (((now->tm_year + 1900) - NgayLap.Getter_NamLap()) * 12);
		if ((now->tm_mon + 1) > NgayLap.Getter_ThangLap())
		{
			n += ((now->tm_mon + 1) - NgayLap.Getter_ThangLap());
		}
		else
		{
			n -= (NgayLap.Getter_ThangLap() - (now->tm_mon + 1));
		}
	}
	if (now->tm_mday < NgayLap.Getter_NgayLap())
	{
		if (n != 0)
		{
			n--;
		}
	}

	return n;
}
int ThongTinKhachhang::Getter_CMND()
{
	return CMND;
}
void ThongTinKhachhang::Setter_CMND(int x)
{
	CMND = x;
}