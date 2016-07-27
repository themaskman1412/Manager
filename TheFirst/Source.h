#include <stdio.h>
#include <iostream>

using namespace std;

class NgaySinh
{
private:

protected:
	int _ngay;
	int _thang;
public:
	NgaySinh();
	NgaySinh(int d, int m);
	~NgaySinh();
	NgaySinh& NgaySinh::operator=(const NgaySinh &ns);
	friend ostream& operator<<(ostream& os, const NgaySinh &ns);
};


class Saler : public NgaySinh
{
private:

protected:
	int _id;
	char _name[30];	
	NgaySinh _ngaysinh;
	char _sex[10];
public:
	Saler();
	Saler(int id, char name[30], NgaySinh ngaysinh, char sex[10]);
	~Saler();
	friend ostream& operator<<(ostream& os, const Saler &sl);
};

void NhapNV(Saler nv[20], int &n);
void XuatDSNV(Saler nv[20], int n);