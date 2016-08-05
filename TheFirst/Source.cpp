#include "Source.h"
#include <iostream>
using namespace std;

NgayThangNam::NgayThangNam()
{

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
	_sonha = "";
	_capthon = "";
	_capxa = "";
	_caphuyen = "";
	_captinh = "";
}
DiaChi::DiaChi(string sonha, string capthon, string capxa, string caphuyen, string captinh)
{
	this->_sonha = sonha;
	this->_capthon = capthon;
	this->_capxa = capxa;
	this->_caphuyen = caphuyen;
	this->_captinh = captinh;
}
DiaChi::~DiaChi()
{

}
DiaChi& DiaChi::operator=(const DiaChi &dc)
{
	if (this == &dc)
		return *this;
	this->_sonha = dc._sonha;
	this->_capthon = dc._capthon;
	this->_capxa = dc._capxa;
	this->_caphuyen = dc._caphuyen;
	this->_captinh = dc._captinh;
	return *this;
}
ostream& operator<<(ostream& os, const DiaChi &dc)
{
	os << dc._sonha << "," << dc._capthon << "," << dc._capxa << "," << dc._caphuyen << "," << dc._captinh;
	return os;
}
DiaChi& NhapDiaChi(DiaChi &dc)
{
	cout << "Nhap so nha nhan vien: ";
	fflush(stdin);
	getline(cin, dc._sonha);
	cout << "Nhap ten duong dang song: ";
	fflush(stdin);
	getline(cin, dc._capthon);
	cout << "Nhap ten phuong dang song: ";
	fflush(stdin);
	getline(cin, dc._capxa);
	cout << "Nhap ten quan dang song: ";
	fflush(stdin);
	getline(cin, dc._caphuyen);
	cout << "Nhap ten thanh pho dang song: ";
	fflush(stdin);
	getline(cin, dc._captinh);
	return dc;
}

Saler::Saler()
{
}
Saler::Saler(int id, string name, NgayThangNam ngaysinh, string sex, NgayThangNam ngaybatdau, string office, int salary, string experience, string trained, DiaChi diachi)
{
	_id = id;
	this->_name = name;
	_ngaysinh = ngaysinh;
	this->_sex = sex;
	_ngaybatdau = ngaybatdau;
	this->_office = office;
	_salary = salary;
	this->_experience = experience;
	this->_trained = trained;
	_diachi = diachi;
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
	this->_ngaybatdau = sl._ngaybatdau;
	this->_office = sl._office;
	this->_salary = sl._salary;
	this->_experience = sl._experience;
	this->_trained = sl._trained;
	this->_diachi = sl._diachi;
	return *this;
}
ostream& operator<<(ostream& os, const Saler &sl)
{
	os << sl._id << "   " << sl._name << "   " << sl._ngaysinh << "   " << sl._sex << "   " << sl._ngaybatdau << "   " << sl._office << "   " << sl._salary << "   " << sl._experience << "   " << sl._trained << "   " << sl._diachi;
	os << endl;
	return os;
}

void Menu()
{
	int _choice;
	system("cls");
	cout << "Chuong Trinh Quan Ly Nhan Vien Ver 1.0 ";
	cout << "\n1. Nhap Danh Sach Nhan Vien! ";
	// Danh sach luon duoc sap xep theo thu tu nhap
	cout << "\n2. Cap Nhat Thong Tin Nhan Vien! ";
	// Thong Tin nhan vien khong duoc xoa, chi an khi hien thi
	// dung flag xoa de xet tinh hien thi.
	cout << "\n3. Xoa Thong Tin Nhan Vien! ";
	cout << "\n4. Xuat Thong Tin Nhan Vien! ";
	cout << "\n5. Tim Kiem Thong Tin Nhan Vien! ";
	//	cout << "\n6. Xuat Thong Tin Nhan Vien Theo Mot Thu Tu Do Nguoi Dung Can! ";
	cout << "\nBan Hay Chon Chuc Nang: ";
	cin >> _choice;
	switch (_choice)
	{
	case 0:
	{
			  break;
	}
	case 1:
	{

			  Menu();
			  break;
	}
	case 2:
	{
			  Menu();
			  break;
	}
	case 3:
	{
			  Menu();
			  break;
	}
	case 4:
	{
			  break;
	}
	case 5:
	{
			  Menu();
			  break;
	}
	case 6:
	{
			  Menu();
			  break;
	}
	}
}
void NhapNV(Saler nv[20], int &n)
{	
	for (int i = 0; i < n; i++)
	{
		system("cls");
		int id, salary, d = 0, m = 0, y = 0;
		string name, sex, office, experience, trained;
		DiaChi dc;
		cout << "Nhan vien thu " << i + 1 << ". " << endl;
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap ten nhan vien: ";
		fflush(stdin);
		getline(cin, name);
		cout << "Gioi tinh cua nhan vien: ";
		fflush(stdin);
		getline(cin, sex);
		cout << "Nhap ngay thang nam sinh cua nhan vien!" << endl;
		cout << "Nhap ngay: ";
		cin >> d;
		cout << "Nhap thang: ";
		cin >> m;
		cout << "Nhap nam: ";
		cin >> y;
		NgayThangNam ns(d, m, y);
		cout << "Nhap ngay thang nam bat dau lam viec!" << endl;
		cout << "Nhap ngay: ";
		cin >> d;
		cout << "Nhap thang: ";
		cin >> m;
		cout << "Nhap nam: ";
		cin >> y;
		NgayThangNam nbd(d, m, y);
		cout << "Vi tri hien tai cua nhan vien: ";
		fflush(stdin);
		getline(cin, office);
		cout << "Luong hien tai cua nhan vien: ";
		cin >> salary;
		cout << "Gioi thieu ve kinh nghiem cua ban than: ";
		fflush(stdin);
		getline(cin, experience);
		cout << "Ban duoc training chua? ";
		fflush(stdin);
		getline(cin, trained);
		NhapDiaChi(dc);
		nv[i] = Saler(id, name, ns, sex, nbd, office, salary,experience, trained, dc);
	}
}
void ThemNV(Saler nv[20], int &n, int &add)
{
	for (int i = 0; i < add; i++)
	{
		system("cls");
		int id, salary, d = 0, m = 0, y = 0;
		string name, sex, office, experience, trained;
		DiaChi dc;
		cout << "Nhan vien thu " << i + 1 << ". " << endl;
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap ten nhan vien: ";
		fflush(stdin);
		getline(cin, name);
		cout << "Gioi tinh cua nhan vien: ";
		fflush(stdin);
		getline(cin, sex);
		cout << "Nhap ngay thang nam sinh cua nhan vien!" << endl;
		cout << "Nhap ngay: ";
		cin >> d;
		cout << "Nhap thang: ";
		cin >> m;
		cout << "Nhap nam: ";
		cin >> y;
		NgayThangNam ns(d, m, y);
		cout << "Nhap ngay thang nam bat dau lam viec!" << endl;
		cout << "Nhap ngay: ";
		cin >> d;
		cout << "Nhap thang: ";
		cin >> m;
		cout << "Nhap nam: ";
		cin >> y;
		NgayThangNam nbd(d, m, y);
		cout << "Vi tri hien tai cua nhan vien: ";
		fflush(stdin);
		getline(cin, office);
		cout << "Luong hien tai cua nhan vien: ";
		cin >> salary;
		cout << "Gioi thieu ve kinh nghiem cua ban than: ";
		fflush(stdin);
		getline(cin, experience);
		cout << "Ban duoc training chua? ";
		fflush(stdin);
		getline(cin, trained);
		NhapDiaChi(dc);
		nv[i + n] = Saler(id, name, ns, sex, nbd, office, salary, experience, trained, dc);
	}
	n += add;
}
void XuatDSNV(Saler nv[20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << nv[i];
	}
}