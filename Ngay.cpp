#include "Ngay.h"
bool KiemtraNamNhuan(int nam)
{
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return true;
	}
	return false;
}
bool KiemTraNhap(string str)
{
	int leng = str.length();
	for (int i = 0; i < leng; i++)
	{
		if (str[i] < '0' || str[i] >'9')
		{
			return false;
		}
	}return true;
}
int NgayLapSo::Getter_NamLap()
{
	return NamLap;
}
int NgayLapSo::Getter_ThangLap()
{
	return ThangLap;
}
int NgayLapSo::Getter_NgayLap()
{
	return NgayLap;
}
void NgayLapSo::NhapNgay()
{
	string str;
	bool check;

	do
	{
		do
		{
			check = true;
			cout << "Nam lap:";
			getline(cin, str);
			check = KiemTraNhap(str);
			if (check == false)
			{
				cout << "Nam nhap khong duoc chua ki tu # so.Xin nhap lai.\n";
			}
		} while (check == false);
		NamLap = atoi((char*)str.c_str());
		if (NamLap <= 1900)
		{
			cout << "Nam nhap phai lon hon hoac bang 1900. Vui long nhap lai.\n";
		}
	} while (NamLap <= 1900);
	do
	{
		do
		{
			check = true;
			cout << "Thang lap:";
			getline(cin, str);
			check = KiemTraNhap(str);
			if (check == false)
			{
				cout << "Thang nhap khong duoc chua ki tu # so.Xin nhap lai.\n";
			}
		} while (check == false);
		ThangLap = stoi(str);
		if (ThangLap < 1 || ThangLap > 12)
		{
			cout << "Thang nhap phai trong tu 1-12. Xin kiem tra lai.\n";
		}
	} while (ThangLap < 1 || ThangLap > 12);
	do
	{
		check = true;
		cout << "Ngay lap so:";
		getline(cin, str);
		check = KiemTraNhap(str);
		if (check == false)
		{
			cout << "Ngay nhap khong duoc chua ki tu # so. Xin kiem tra lai.\n";
		}
		else
		{
			NgayLap = stoi(str);
			if (ThangLap == 1 || ThangLap == 3 || ThangLap == 5 || ThangLap == 7 || ThangLap == 8 || ThangLap == 10 || ThangLap == 12)
			{
				if (NgayLap > 31)
				{
					cout << "Thang " << ThangLap << " chi co 31 ngay. Xin kiem tra lai.\n";
					check = false;
				}
			}
			else if (ThangLap == 4 || ThangLap == 6 || ThangLap == 9 || ThangLap == 11)
			{
				if (NgayLap > 30)
				{
					cout << "Thang " << ThangLap << " chi co 30 ngay. Xin kiem tra lai.\n";
					check = false;
				}
			}
			else if (ThangLap == 2)
			{
				if (KiemtraNamNhuan)
				{
					if (NgayLap > 29)
					{
						cout << "Nam nhuan toi da chi 29 ngay. Xin kiem tra lai.\n";
						check = false;
					}
				}
				else
				{
					if (NgayLap > 28)
					{
						cout << "Thang " << ThangLap << " chi co 28 ngay. Xin kiem tra lai.\n";
						check = false;
					}
				}
			}
		}
	} while (check == false);
}
void NgayLapSo::XuatNgay()
{
	cout << "Ngay lap so:" << NgayLap << "-" << ThangLap << "-" << NamLap << endl;
}
NgayLapSo::NgayLapSo()
{
	NgayLap = now->tm_mday;
	ThangLap = now->tm_mon + 1;
	NamLap = now->tm_year + 1900;
}
NgayLapSo::NgayLapSo(int ngaylap, int thanglap, int namlap)
{
	NgayLap = ngaylap;
	ThangLap = thanglap;
	NamLap = namlap;
}