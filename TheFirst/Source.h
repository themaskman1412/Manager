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
	friend ostream& operator<<(ostream& os, const NgayThangNam &dt);
};

//class DiaChi
//{
//private:
//	char *_sonha;
//	char *_capthon;
//	char *_capxa;
//	char *_caphuyen;
//	char *_captinh;
//protected:
//
//public:
//	DiaChi();
//	DiaChi(char *sonha, char *capthon, char *capxa, char *caphuyen, char *captinh);
//	~DiaChi();
//	DiaChi& DiaChi::operator=(const DiaChi &dc);
//	friend DiaChi& NhapDiaChi(DiaChi &dc);
//	friend ostream& operator<<(ostream& os, const DiaChi &dc);
//};

class Saler : public NgayThangNam //, public DiaChi
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
//	DiaChi _diachi;
protected:

public:
	Saler();
	Saler(int id, string name, NgayThangNam ngaysinh, string sex, NgayThangNam ngaybatdau, string office, int salary, string experience, string trained);
	//Saler(int id, char *name, NgayThangNam ngaysinh, char *sex, DiaChi diachi);
	~Saler();
	Saler& Saler::operator=(const Saler &dt);
	friend ostream& operator<<(ostream& os, const Saler &sl);
};


void NhapNV(Saler nv[20], int &n);
void XuatDSNV(Saler nv[20], int n);