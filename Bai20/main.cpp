#include<bits/stdc++.h>
#include"HoaDon.cpp"
#include"Vector.cpp"
using namespace std;

void Docthongtin(fstream &file, MyVector<HoaDon> &A,int n){     
    string FileName;
    cout<<"Nhap vao ten tep ban muon doc du lieu : "; getline(cin,FileName);
    file.open(FileName,ios::in);
    
    if(file.is_open()){
        for(int i=0;i<n;i++){
            HoaDon a;
            file>>a;
            A.push_back(a);
        }
        file.close();
    }
    else {
        cout<<"\nKhong mo duoc file!"<<endl;
        exit(0);
    }
}
void Ghithongtin(fstream &file, MyVector<HoaDon> A){
    string FileName;
    cout<<"\nNhap vao ten tep ban muon luu du lieu : "; getline(cin,FileName);
    file.open(FileName,ios::out);
    
    if(file.is_open()){
        for(auto x: A)
            file<<x<<endl;
        file.close();
    }
    else {
        cout<<"\nKhong mo duoc file!"<<endl;
        exit(0);
    }
}

void nhapMatHang(MyVector<MatHang> &A, int m){
    for(int i=0;i<m;i++){
       MatHang a;
       a.nhap();
       A.push_back(a);
   }
   for(auto x: A){
    x.xuat();
    cout<<endl;
}
}
void HienThiDs(MyVector<MatHang> A, int m){
 for(auto x: A){
    x.xuat();
    cout<<endl;
}
}
// loaihd=1 +
// loaihd=2 - 
void Thongke( MyVector<HoaDon> a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            if(a[i].getTenHang()>a[j].getTenHang())
            swap(a[i],a[j]);
        }
    }

    MyVector<HoaDon> m;
    m.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        if(a[i].getTenHang() == m.back().getTenHang()){
             int t =  m.back().getSoLuong();   // 
             if(a[i].getLoaiHoaDon()==1){
                t+=a[i].getSoLuong();
            }
            else if(a[i].getLoaiHoaDon()==2){
                t-=a[i].getSoLuong();
            }
            m.back().setSoLuong(t);
        }
        else{
            m.push_back(a[i]);
        }
    }

    for(int i=0;i<m.size();i++){
        for(int j=0;j<m.size();j++){
            if(m[i].getTenHang()<m[j].getTenHang())
            swap(m[i],m[j]);
        }
    }
    for(auto x: m){
        cout<<x.getTenHang()<<" so luong : "<<x.getSoLuong()<<endl;
    }
}
int main(){
    fstream fs;
    int n;
    cout << "Nhap vao so hoa don n = "; 
    cin >> n; 
    cin.ignore();
    MyVector<HoaDon> hd;
    //Phan a: doc thong tin tu file input.txt
    Docthongtin(fs,hd,n);
    hd.resize(n);

    //Phan b: Ghi thong tin vao file output.txt
    Ghithongtin(fs,hd);
    
    //Phan c: Nhap xuat cac mat hang
    int m ; 
    cout <<"\nSo mat hang la m = ";
    cin >> m;
    cin.ignore();
    MyVector<MatHang> mh;// m phan tu
    nhapMatHang(mh,m);

    cout << endl;
    cout<<"Cac mat hang hien co la: "<<endl;
    //Phan d: hien thi danh sach tat ca mat hang hien co
    HienThiDs(mh,m);
    
    cout<<endl;
    //Phan e: thong ke cac hang ton
    cout <<"Cac hang con ton la : "<<endl;
    Thongke(hd);
    return 0;
}