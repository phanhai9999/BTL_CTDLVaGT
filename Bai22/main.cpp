#include "CayHeap.h"
#include <iostream>

using namespace std;

int main()
{
    Heap *a= new Heap;
    int n;
    cout<<"Nhap So Phan Tu Can Them Vao Cay:";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap Phan Tu Thu "<<i+1<<" : ";
        int x;cin>>x;
        a->push(x);
    }
    a->heapsort();
    cout<<"Phan Tu Duoc Sap Xep Theo Gia Tri Giam Dan Cua Mang La:\n";
    a->xuat();
    cout<<"Bai Tap Ve Noi Thanh Kiem Loai.\n";
    int k;
    cout<<"Nhap So Phan Tu:";cin>>k;
    Heap *b= new Heap;
    for(int i=0;i<k;i++)
    {
        int x;
        cout<<"Nhap Do Dai Thanh Kim Loai Thu "<<i+1<<" : ";cin>>x;
        b->push(x);
    }
    int chiphi=0;
    while(b->getsize()!=0)
    {
        int p=b->top();
        b->pop();
        int q=b->top();
        b->pop();
        b->push(p+q);
        chiphi+=(p+q);
        if(b->getsize()==1) break;
    }
    cout<<"Chi Phi Re Nhat La:"<<chiphi<<"\n";
}