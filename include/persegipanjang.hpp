#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__

#include <iostream>

class PersegiPanjang 
{
private:
	float tTengahX, tTengahY, Panjang, Lebar;
	float pKiriKanan, lAtasBawah, xmin, xmax, ymin, ymax;

public:
	PersegiPanjang(float tTengahX, float tTengahY, float Panjang, float Lebar);
	
	void set_tTengahX(float tTengahX);
	float get_tTengahX();

	void set_tTengahY(float tTengahY);
	float get_tTengahY();

	void setPanjang(float Panjang);
	float getPanjang();

	void setLebar(float Lebar);
	float getLebar();

	void set_PanjangKiriKanan(float Panjang);
	float get_PanjangKiriKanan();

	void set_LebarAtasBawah(float Lebar);
	float get_LebarAtasBawah();
	
	float getXmin();
	float getXmin_raw();
	float getXmax();
	float getXmax_raw();
	float getYmin();
	float getYmin_raw();
	float getYmax();
	float getYmax_raw();

	PersegiPanjang operator+(PersegiPanjang);
	PersegiPanjang operator-(PersegiPanjang);
	float operator[](int);
	bool operator==(PersegiPanjang);
};


#endif