#include <iostream>
#include "include/persegipanjang.hpp"


PersegiPanjang::PersegiPanjang(float tTengahX, float tTengahY, float Panjang, float Lebar)
				:tTengahX(tTengahX), tTengahY(tTengahY), Panjang(Panjang), Lebar(Lebar)
    {}
	void 	PersegiPanjang::set_tTengahX(float tTengahX) 		{ this->tTengahX = tTengahX; }
    float 	PersegiPanjang::get_tTengahX()						{ return this->tTengahX; }
	void 	PersegiPanjang::set_tTengahY(float tTengahY) 		{ this->tTengahY = tTengahY; }
    float	PersegiPanjang::get_tTengahY() 						{ return this->tTengahY; }

	void 	PersegiPanjang::setPanjang(float Panjang) 			{ this->Panjang = Panjang; }
    float	PersegiPanjang::getPanjang() 						{ return this->Panjang; }
    void 	PersegiPanjang::setLebar(float Lebar) 				{ this->Lebar = Lebar; }
    float 	PersegiPanjang::getLebar() 							{ return this->Lebar; }
    
	void 	PersegiPanjang::set_PanjangKiriKanan(float Panjang) { this->pKiriKanan = (Panjang / 2); }
    float 	PersegiPanjang::get_PanjangKiriKanan() 				{ return this->pKiriKanan; }
    void 	PersegiPanjang::set_LebarAtasBawah(float Lebar) 	{ this->lAtasBawah = (Lebar / 2); }
    float 	PersegiPanjang::get_LebarAtasBawah() 				{ return this->lAtasBawah; }

    float 	PersegiPanjang::getXmin() 							{ this->xmin = (tTengahX - pKiriKanan); 
																	return this->xmin; }
    float   PersegiPanjang::getXmin_raw()                         { return this->xmin; }

    float 	PersegiPanjang::getXmax() 							{ this->xmax = (tTengahX + pKiriKanan); 
																	return this->xmax; }
    float   PersegiPanjang::getXmax_raw()                       { return this->xmax; }

    float 	PersegiPanjang::getYmin() 							{ this->ymin = (tTengahY - lAtasBawah);
        															return this->ymin; }
    float PersegiPanjang::getYmin_raw()                         { return this->ymin; }

    float 	PersegiPanjang::getYmax() 							{ this->ymax = (tTengahY + lAtasBawah);
        															return this->ymax; }
    float   PersegiPanjang::getYmax_raw()                       { return this->ymax; }

    bool    PersegiPanjang::operator==(PersegiPanjang PersegiPan2)   //PersegiPan adalah atribut dari Persegi Panjang ke-2
    {
        if((this->xmax > PersegiPan2.xmin) && (PersegiPan2.xmax > this->xmin) && (this->ymax > PersegiPan2.ymin) && (PersegiPan2.ymax > this->ymin))
            return true;
        else return false;
    }
    
    PersegiPanjang PersegiPanjang::operator+(PersegiPanjang PersegiPan2)
    {
        PersegiPanjang hasil(0,0,0,0);
        //Mencari Xmin dari kedua Persegi Panjang
        if (this->xmin <= PersegiPan2.xmin) hasil.xmin = this->xmin;
        else hasil.xmin = PersegiPan2.xmin;

        //hasil.xmin = std::min(this->xmin, PersegiPan2.xmin); (Pilih salah satu aja antara ini atau diatas)

        //Mencari Xmax dari kedua Persegi Panjang
        if (this->xmax >= PersegiPan2.xmax) hasil.xmax = this->xmax;
        else hasil.xmax = PersegiPan2.xmax;

        //hasil.xmax = std::max(this->xmax, PersegiPan2.xmax);

        //Mencari Ymin dari kedua Persegi Panjang
        if (this->ymin <= PersegiPan2.ymin) hasil.ymin = this->ymin;
        else hasil.ymin = PersegiPan2.ymin;

        //hasil.ymin = std::min(this->ymin, PersegiPan2.ymin);

        //Mencari Ymax dari kedua Persegi Panjang
        if (this->ymax >= PersegiPan2.ymax) hasil.ymax = this->ymax;
        else hasil.ymax = PersegiPan2.ymax;

        //hasil.ymax = std::max(this->ymax, PersegiPan2.ymax);
        return hasil;
        }

    PersegiPanjang PersegiPanjang::operator-(PersegiPanjang PersegiPan2)
    {
        PersegiPanjang hasil(0,0,0,0);

         if ((PersegiPan2.xmax > this->xmax) && (PersegiPan2.xmin > this->xmin))
         {
             hasil.xmin = PersegiPan2.xmin; hasil.xmax = this->xmax;
             if (this->ymin > PersegiPan2.ymin){
                 hasil.ymin = this->ymin; hasil.ymax = PersegiPan2.ymax;
             }
             else
             {
                 hasil.ymin = PersegiPan2.ymin; hasil.ymax = this->ymax;
             }
         }
         else if (this->ymin > PersegiPan2.ymin)
         {
             hasil.xmin = this->xmin; hasil.xmax = PersegiPan2.xmax;
             hasil.ymin = this->ymin; hasil.ymax = PersegiPan2.ymax;
         }
         else
         {
             hasil.xmin = this->xmin; hasil.xmax = PersegiPan2.xmax;
             hasil.ymin = PersegiPan2.ymin; hasil.ymax = this->ymax;
         }
         return hasil;   
    }

float PersegiPanjang::operator[](int index)
{

    switch (index)
    {
    case 1:
        std::cout << "X Min\t\t\t: ";
        return this->xmin;
        break;

    case 2:
        std::cout << "X Max\t\t\t: ";
        return this->xmax;
        break;

    case 3:
        std::cout << "Y Min\t\t\t: ";
        return this->ymin;
        break;

    case 4:
        std::cout << "Y Max\t\t\t: ";
        return this->ymax;
        break;
    }
    return 0;
}