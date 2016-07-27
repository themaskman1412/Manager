#include "Source.h"

NgayThangNam::NgayThangNam()
{
	_ngay = 0;
	_thang = 0;
	_nam = 0;
}
NgayThangNam::NgayThangNam(int d, int m, int y)
{
	_ngay = d;
	_thang = m;
	_nam = y;
}
NgayThangNam::~NgayThangNam()
{

}
NgayThangNam& NgayThangNam::operator=(const NgayThangNam &dt)
{
	if (this == &dt)
		return *this;
	this->_ngay = dt._ngay;
	this->_thang = dt._thang;
	this->_nam = dt._nam;
	return *this;
}
ostream& operator<<(ostream& os, const NgayThangNam &dt)
{
	os << dt._ngay << "/" << dt._thang << "/" << dt._nam;
	return os;
}

DiaChi::DiaChi()
{
	_sonha[20] = NULL;
	_capthon[20] = NULL;
	_capxa[20] = NULL;
	_caphuyen[20] = NULL;
	_captinh[20] = NULL;
}
DiaChi::DiaChi(char sonha[20], char capthon[20], char capxa[20], char caphuyen[20], char captinh[20])
{
	strcpy_s(_sonha, sonha);
	strcpy_s(_capthon, capthon);
	strcpy_s(_capxa, capxa);
	strcpy_s(_caphuyen, caphuyen);
	strcpy_s(_captinh, captinh);
}
DiaChi::~DiaChi()
{

}
DiaChi& DiaChi::operator=(const DiaChi &dc)
{
	if (this == &dc)
		return *this;
	this->_sonha[20] = dc._sonha[20];
	this->_capthon[20] = dc._capthon[20];
	this->_capxa[20] = dc._capxa[20];
	this->_caphuyen[20] = dc._caphuyen[20];
	this->_captinh[20] = dc._captinh[20];
	return *this;
}
ostream& operator<<(ostream& os, const DiaChi &dc)
{
	os << dc._sonha << "," << dc._capthon << "," << dc._capxa << "," << dc._caphuyen << "," << dc._captinh;
	return os;
}

Saler::Saler()
{
	_id = 0;
	_name[30] = NULL;
	_ngaysinh = NgayThangNam(0, 0, 0);
	_sex[10] = NULL;
}
Saler::Saler(int id, char name[30], NgayThangNam ngaysinh, char sex[10])
{
	_id = id;
	strcpy_s(_name, name);
	_ngaysinh = ngaysinh;
	strcpy_s(_sex, sex);
}
Saler::~Saler()
{

}
Saler& Saler::operator=(const Saler &sl)
{
	if (this == &sl)
		return *this;
	this->_id = sl._id;
	strcpy_s(_name, sl._name);
	this->_ngaysinh = sl._ngaysinh;
	strcpy_s(_sex, sl._sex);
	return *this;
}
ostream& operator<<(ostream& os, const Saler &sl)
{
	os << sl._id << "   " << sl._name << "   " << sl._ngaysinh << "   " << sl._sex << "   " << sl._diachi << endl;
	return os;
}

void NhapNV(Saler nv[20], int &n)
{	
	for (int i = 0; i < n; i++)
	{
		int id, d, m, y;
		char name[30], sex[10];
		char sonha[20], capthon[20], capxa[20], caphuyen[20], captinh[20];
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
		cout << "Nhap nam sinh nhan vien: ";
		cin >> y;
		cout << "Gioi tinh cua nhan vien: ";
		fflush(stdin);
		gets_s(sex);
		cout << "Nhap so nha nhan vien: ";
		fflush(stdin);
		gets_s(sonha);
		cout << "Nhap ten duong dang song: ";
		fflush(stdin);
		gets_s(capthon);
		cout << "Nhap ten phuong dang song: ";
		fflush(stdin);
		gets_s(capxa);
		cout << "Nhap ten quan dang song: ";
		fflush(stdin);
		gets_s(caphuyen);
		cout << "Nhap ten thanh pho dang song: ";
		fflush(stdin);
		gets_s(captinh);
		DiaChi dc(sonha, capthon, capxa, caphuyen, captinh);
		NgayThangNam ns(d, m, y);
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