#include "Source.h"

void main()
{
	int n;
	cout << "Vui long nhap so nhan vien: ";
	cin >> n;
	Saler nv[20];
	NhapNV(nv, n);
	XuatDSNV(nv, n);
}