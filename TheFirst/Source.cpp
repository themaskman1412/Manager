#include "Source.h"

NgaySinh::NgaySinh()
{
	_ngay = 0;
	_thang = 0;
}
NgaySinh::NgaySinh(int d, int m)
{
	_ngay = d;
	_thang = m;
}
NgaySinh::~NgaySinh()
{

}
NgaySinh& NgaySinh::operator=(const NgaySinh &ns)
{
	if (this == &ns)
		return *this;
	this->_ngay = ns._ngay;
	this->_thang = ns._thang;
}
ostream& operator<<(ostream& os, const NgaySinh &ns)
{
	os << ns._ngay << "/" << ns._thang;
	return os;
}

Saler::Saler()
{
	_id = 0;
	_name[30] = 0;
	_ngaysinh = NgaySinh(0, 0);
	_sex[10] = 0;
}
Saler::Saler(int id, char name[30], NgaySinh ngaysinh, char sex[10])
{
	_id = id;
	_name[30] = name[30];
	_ngaysinh = ngaysinh;
	_sex[10] = sex[10];
}
Saler::~Saler()
{

}
ostream& operator<<(ostream& os, const Saler &sl)
{
	os << sl._id << "   " << sl._name << "   " << sl._ngaysinh << "   " << sl._sex << endl;
	return os;
}


void NhapNV(Saler nv[20], int &n)
{	
	for (int i = 0; i < n; i++)
	{
		int id,d,m;
		char name[30], sex[10];
		cout << "Nhan vien thu " << i + 1 << " :";
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap ten nhan vien: ";
		fflush(stdin);
		gets_s(name);
		cout << "Nhap ngay sinh nhan vien: ";
		cin >> d;
		cout << "Nhap thang sinh nhan vien: ";
		cin >> m;
		cout << "Gioi tinh cua nhan vien: ";
		fflush(stdin);
		gets_s(sex);
		NgaySinh ns(d, m);
		nv[i] = Saler(id, name, ns, sex);
	}
}
void XuatDSNV(Saler nv[20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << nv[i];
	}
}