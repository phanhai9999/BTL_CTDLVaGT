#ifndef CAY_HEAP_H
#define CAY_HEAP_H

#include<iostream>

using namespace std;

class Heap
{
    private:
    int *a;
    int sz;
    public:

    Heap()
    {
        a = new int[100000];
        sz=0;
    }

    ~Heap()
    {
        delete []a;
        a=NULL;
    }

    int getsize()
    {
        return sz;
    }



    void heapify_arr(int *a,int n,int i)
    {
        if(n==1)
        {
            return;//mang co 1 phan tu thi khong can cap nhat
        }
        else
        {
            int largest=i;   //luu vi tri dinh min ban dau
            int left=2*i+1;  //Vi tri left
            int right=2*i+2; //Vi tri right
            if(left<n&&a[left]<a[largest])   // neu ton tai left nho hon cha, gan min = left
            {
                largest=left;
            }
            if(right<n&&a[right]<a[largest]) // neu ton tai right nho hon cha, gan min = right
            {
                largest=right;
            }
            if(largest!=i)   // Neu nut cha ko pai la min nhat
            {
                swap(a[i],a[largest]);  // doi cho 2 ptu neu gia tri nut cha lon hon nut con 
                heapify_arr(a,n,largest); // de quy nut tai vi tri moi
            }
        }
    }

    void push(int value)
    {
        if(sz==0)
        {
            a[sz]=value;
            sz+=1;
        }
        else
        {
            a[sz]=value;
            sz+=1;
            for(int i=sz/2-1;i>=0;i--)
            {
                heapify_arr(a,sz,i);
            }
        }
    }

    void pop()
    {
        swap(a[0],a[sz-1]);
        sz-=1;
        for(int i = sz/2 -1;i>=0;i--)
        {
            heapify_arr(a,sz,i);
        }
    }

    int top()
    {
        return a[0];
    }

    void xuat()
    {
        if(sz==0)
        {
            cout<<"cay rong!\n";
            return;
        }
        for(int i=0;i<sz;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    void heapsort()
    {
        for(int i=sz-1;i>=0;i--)
        {
            swap(a[i],a[0]);
            heapify_arr(a,i,0);
        }
    }


};

#endif