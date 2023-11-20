#include <bits/stdc++.h>
#include "mat_hang.cpp"
//#include"Vector.cpp"
using namespace std;

class HoaDon : public MatHang{
private:
    string MaHoaDon, NgayThang;
    int SoLuong, Gia, LoaiHoaDon;
public:
    HoaDon();
    string getMaHoaDon();
    int getLoaiHoaDon();
    string getNgayThang();
    int getSoLuong();
    int getGia();
    void setSoLuong(int a);
    friend istream& operator>>(istream& in, HoaDon &a);
    friend ostream& operator<<(ostream& out, HoaDon a);
};

HoaDon::HoaDon(){
    MaHoaDon = NgayThang = "";
    LoaiHoaDon = SoLuong=Gia = 0; 
}

string HoaDon::getMaHoaDon(){
    return this->MaHoaDon;
}

int HoaDon::getLoaiHoaDon(){
    return this->LoaiHoaDon;
}

string HoaDon::getNgayThang(){
    return this->NgayThang;
}

int HoaDon::getSoLuong(){
    return this->SoLuong;
}

void HoaDon::setSoLuong(int a){
    this->SoLuong=a;
}
int HoaDon::getGia(){
    return this->Gia;
}

istream& operator>>(istream& in, HoaDon &a){
    getline(in,a.MaHang);
    getline(in,a.TenHang);
    getline(in,a.NhaSanXuat);
    getline(in,a.MaHoaDon);
    in >> a.LoaiHoaDon;
    in.ignore(1);
    in >> a.SoLuong;
    in.ignore(1);
    getline(in,a.NgayThang);
    in >> a.Gia;
    in.ignore(1);
    return in;
}

ostream& operator<<(ostream& out, HoaDon a){
    out <<"Ma hang: "<< a.MaHang << endl;
    out <<"Ten hang: "<< a.TenHang << endl;
    out <<"Nha san xuat: "<< a.NhaSanXuat << endl;
    out <<"Ma hoa don: "<< a.MaHoaDon << endl;
    out <<"Loai hoa don(1.mua , 2.ban): "<< a.LoaiHoaDon << endl;
    out <<"So Luong: "<< a.SoLuong << endl;
    out <<"Ngay Thang: "<< a.NgayThang << endl;
    out <<"Gia: "<< a.Gia << endl;
    return out;
}
