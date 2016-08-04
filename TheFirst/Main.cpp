#include "Source.h"

void main()
{
	//Menu();
	int n, m = 1;
	cout << "Vui long nhap so nhan vien: ";
	cin >> n;
	Saler nv[20];
	NhapNV(nv, n);
	ThemNV(nv, n, m);
	XuatDSNV(nv, n);
}