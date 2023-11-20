#include<bits/stdc++.h>
using namespace std;

class MatHang{
protected:
    string MaHang, TenHang, NhaSanXuat;
public:
  MatHang();
  string getMaHang();
  string getTenHang();
  string getNhaSanXuat();
  void nhap();
  void xuat();
};

MatHang::MatHang(){
    MaHang=TenHang=NhaSanXuat="";
}

string MatHang::getMaHang(){
    return MaHang;
}

string MatHang::getTenHang(){
    return this->TenHang;
}

string MatHang::getNhaSanXuat(){
    return this->NhaSanXuat;
}

void MatHang::nhap(){
    cout <<"\nNhap ma hang: ";
    getline(cin,MaHang);
    cout << "Nhap ten hang: ";
    getline(cin,TenHang);
    cout << "Nhap nha san xuat: ";
    getline(cin,NhaSanXuat);
}

void MatHang::xuat(){
    cout << MaHang <<"\t"<< TenHang <<"\t"<< NhaSanXuat;
}