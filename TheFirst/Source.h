#include <stdio.h>
#include <iostream>
#include <string.h>

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

class DiaChi
{
private:
	char _sonha[20];
	char _capthon[20];
	char _capxa[20];
	char _caphuyen[20];
	char _captinh[20];
protected:

public:
	DiaChi();
	DiaChi(char sonha[20], char capthon[20], char capxa[20], char caphuyen[20], char captinh[20]);
	~DiaChi();
	DiaChi& DiaChi::operator=(const DiaChi &dc);
	friend ostream& operator<<(ostream& os, const DiaChi &dc);
};

class Saler : public NgayThangNam, public DiaChi
{
private:
	int _id;
	char _name[30];	
	NgayThangNam _ngaysinh;
	char _sex[10];
	DiaChi _diachi;
protected:

public:
	Saler();
	Saler(int id, char name[30], NgayThangNam ngaysinh, char sex[10]);
	~Saler();
	Saler& Saler::operator=(const Saler &dt);
	friend ostream& operator<<(ostream& os, const Saler &sl);
};

void NhapNV(Saler nv[20], int &n);

void XuatDSNV(Saler nv[20], int n);