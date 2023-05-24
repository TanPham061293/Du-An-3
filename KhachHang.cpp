#include "KhachHang.h"

void KhachHang::Nhap()
{
	char LuaChon;
	bool check1;
	int x;
	do
	{
		cout << "============ MENU ============\n";
		cout << "1. Khach hang gui khong ki han.\n";
		cout << "2. Khach hang gui ki han.\n";
		cout << "3. Thoat.\n";

		cout << "Lua chon cua ban:";
		cin >> LuaChon;
		if (LuaChon == '1')
		{
			KhongKyHan kh;
			do
			{
				check1 = true;
				cout << "CMND so: ";
				cin >> x;
				int leng = arr.size();
				for (int i = 0; i < leng; i++)
				{
					if (arr[i].Getter_CMND() == x)
					{
						check1 = false;
						break;
					}
				}
				if (check1 == true)
				{
					int leng2 = arr2.size();
					for (int j = 0; j < leng2; j++)
					{
						if (arr2[j].Getter_CMND() == x)
						{
							check1 = false;
							break;
						}
					}
				}
				if (check1 == false)
				{
					cout << "CMND bi trung. Xin kiem tra lai.\n";
				}
			} while (check1 == false);

			kh.Setter_CMND(x);
			kh.NhapThongTinKHachHang();
			arr.push_back(kh);
		}
		else if (LuaChon == '2')
		{
			CoKyHan kh;
			kh.NhapThongTinKhachCoKyHan();
			arr2.push_back(kh);
		}
		else if (LuaChon != '3')
		{
			cout << "Lua chon khong phu hop. Xin kiem tra lai.\n";
		}
	} while (LuaChon != '3');
}
void KhachHang::Xuat()
{
	cout << "Khach hang gui khong ki han:\n";
	int n = arr.size();
	for (int i = 0; i < n; i++)
	{
		cout << "Thu: " << i + 1 << endl;
		cout <<"CMND so:" << arr[i].Getter_CMND() << endl;
		arr[i].Xuat();
	}
	cout << "Khach hang gui co ki han:\n";
	int nb = arr2.size();
	for (int j = 0; j < nb; j++)
	{
		cout << "Thu: " << j + 1 << endl;
		cout << "CMND so:" << arr2[j].Getter_CMND() << endl;
		arr2[j].XuatThongTinKhachCoKyHan();
	}
}