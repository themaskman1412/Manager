#include "Source.h"

NgayThangNam::NgayThangNam()
{
	_ngay = 0;
	_thang = 0;
	_nam = 0;
}
NgayThangNam::NgayThangNam(int d, int m, int y)
{
	cout << "Nhap ngay sinh nhan vien: ";
	cin >> d;
	_ngay = d;
	cout << "Nhap thang sinh nhan vien: ";
	cin >> m;
	_thang = m;
	cout << "Nhap nam sinh nhan vien: ";
	cin >> y;
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

//DiaChi::DiaChi()
//{
//	_sonha = NULL;
//	_capthon = NULL;
//	_capxa = NULL;
//	_caphuyen = NULL;
//	_captinh = NULL;
//}
//DiaChi::DiaChi(char *sonha, char *capthon, char *capxa, char *caphuyen, char *captinh)
//{
//	this->_sonha = sonha;
//	this->_capthon = capthon;
//	this->_capxa = capxa;
//	this->_caphuyen = caphuyen;
//	this->_captinh = captinh;
//}
//DiaChi::~DiaChi()
//{
//
//}
//DiaChi& DiaChi::operator=(const DiaChi &dc)
//{
//	if (this == &dc)
//		return *this;
//	this->_sonha = dc._sonha;
//	this->_capthon = dc._capthon;
//	this->_capxa = dc._capxa;
//	this->_caphuyen = dc._caphuyen;
//	this->_captinh = dc._captinh;
//	return *this;
//}
//ostream& operator<<(ostream& os, const DiaChi &dc)
//{
//	os << dc._sonha << "," << dc._capthon << "," << dc._capxa << "," << dc._caphuyen << "," << dc._captinh;
//	return os;
//}
//DiaChi& NhapDiaChi(DiaChi &dc)
//{
//	/*char *sonha;
//	sonha = new char[20];
//	char *capthon;
//	capthon = new char[20];
//	char *capxa;
//	capxa = new char[20];
//	char *caphuyen;
//	caphuyen = new char[20];
//	char *captinh;
//	captinh = new char[20];*/
//	cout << "Nhap so nha nhan vien: ";
//	//fflush(stdin);
//	//gets(dc._sonha);
//	cin >> dc._sonha;
//
//	cout << "Nhap ten duong dang song: ";
//	//fflush(stdin);
//	//gets(dc._capthon);
//	cin >> dc._capthon;
//
//	cout << "Nhap ten phuong dang song: ";
//	//fflush(stdin);
//	//gets(dc._capxa);
//	cin >> dc._capxa;
//
//	cout << "Nhap ten quan dang song: ";
//	//fflush(stdin);
//	//gets(dc._caphuyen);
//	cin >> dc._caphuyen;
//
//	cout << "Nhap ten thanh pho dang song: ";
//	//fflush(stdin);
//	//gets(dc._captinh);
//	cin >> dc._captinh;
//
//	//delete[] sonha, capthon, capxa, caphuyen, captinh;
//	//sonha, capthon, capxa, caphuyen, captinh = NULL;
//	return dc;
//}

Saler::Saler()
{
}
Saler::Saler(int id, string name, NgayThangNam ngaysinh, string sex)
{
	_id = id;
	this->_name = name;
	_ngaysinh = ngaysinh;
	this->_sex = sex;
//	_diachi = diachi;
}
Saler::~Saler()
{

}
Saler& Saler::operator=(const Saler &sl)
{
	if (this == &sl)
		return *this;
	this->_id = sl._id;
	this->_name = sl._name;
	this->_ngaysinh = sl._ngaysinh;
	this->_sex = sl._sex;
//	this->_diachi = sl._diachi;
	return *this;
}
ostream& operator<<(ostream& os, const Saler &sl)
{
	os << sl._id << "   " << sl._name << "   " << sl._ngaysinh << "   " << sl._sex << "   " << endl;
	return os;
}


void NhapNV(Saler nv[20], int &n)
{	
	for (int i = 0; i < n; i++)
	{
		int id, d = 0, m = 0, y = 0;
		string name, sex;
		cout << "Nhan vien thu " << i + 1 << " :";
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap ten nhan vien: ";
		cin >> name;
//		DiaChi dc;
//		NhapDiaChi(dc);
		//fflush(stdin);
		//gets_s(name);
		cout << "Gioi tinh cua nhan vien: ";
		cin >> sex;
		//fflush(stdin);
		//gets_s(sex);
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