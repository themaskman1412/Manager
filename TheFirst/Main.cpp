#include "Source.h"

void main()
{
	int n;
	cout << "Vui long nhap so nhan vien: ";
	cin >> n;
	Saler a[20];
	NhapNV(a, n);
	XuatDSNV(a, n);
}