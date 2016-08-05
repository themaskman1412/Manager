#ifndef SOURCE_H
#define SOURCE_H
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class NgayThangNam
{
private:
	int _ngay;
	int _thang;
	int _nam;
protected:

public:
	NgayThangNam();
	NgayThangNam(int d, int m, int y);
	~NgayThangNam();
	NgayThangNam& NgayThangNam::operator=(const NgayThangNam &dt);
	bool NgayThangNam::operator==(const NgayThangNam &dt);
	friend NgayThangNam& NhapNgayThangNam(NgayThangNam &dt);
	friend ostream& operator<<(ostream& os, const NgayThangNam &dt);
};

class DiaChi
{
private:
	string _sonha;
	string _capthon;
	string _capxa;
	string _caphuyen;
	string _captinh;
protected:

public:
	DiaChi();
	DiaChi(string sonha, string capthon, string capxa, string caphuyen, string captinh);
	~DiaChi();
	DiaChi& DiaChi::operator=(const DiaChi &dc);
	friend DiaChi& NhapDiaChi(DiaChi &dc);
	friend ostream& operator<<(ostream& os, const DiaChi &dc);
};

class Saler : public NgayThangNam , public DiaChi
{
private:
	int _id;
	string _name;	
	NgayThangNam _ngaysinh;
	string _sex;
	NgayThangNam _ngaybatdau;
	string _office;
	int _salary;
	string _experience;
	string _trained;
	DiaChi _diachi;
protected:

public:
	Saler();
	Saler(int id, string name, NgayThangNam ngaysinh, string sex, NgayThangNam ngaybatdau, string office, int salary, string experience, string trained, DiaChi diachi);
	//Saler(int id, char *name, NgayThangNam ngaysinh, char *sex, DiaChi diachi);
	~Saler();
	Saler& operator=(const Saler &dt);
	int GetID();
	string GetName();
	NgayThangNam GetNgaySinh();
	string GetSex();
	NgayThangNam GetNgayBatDau();
	string GetOffice();
	int GetSalary();
	friend ostream& operator<<(ostream& os, const Saler &sl);
};


void Menu();
void NhapNV(Saler nv[20], int &n);
void ThemNV(Saler nv[20], int &n, int &add);
void TimNV(Saler nv[20], int &n);
void XuatOrder(Saler nv[20], int &n);
void XuatDSNV(Saler nv[20], int n);

#endif