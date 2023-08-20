#include <iostream>
#include <fstream> 5

using namespace std ;
class mang{
private :
    float *a ;
    int n ;
public :
    friend istream& operator>>(istream& in, mang &b) ;
    friend ostream& operator<<(ostream& out, mang &c) ;
    mang operator--() ;
    mang operator++() ;
} ;
istream& operator>>(istream& in, mang &b){
    cout<<"Moi nhan so phan tu :"; in>>b.n ;
    b.a= new float[b.n] ;
    for(int i=0 ; i<b.n ; i++){
        cout<<"a["<<i<<"]=";
        in>>b.a[i] ;
    }
    return in ;
}
ostream& operator<<(ostream& out, mang &c){
    out<<"Xuat Mang :" ;
    for(int i=0 ; i<c.n ; i++){
        out<<c.a[i]<<" " ;
    }
    return out ;
}
mang mang::operator++(){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]>a[j]){
                int tg ;
                tg=a[i] ;
                a[i]=a[j] ;
                a[j]=tg ;
            }
        }
    }
    return *this ;
}
int main(){
    fstream f("txt2.txt", ios ::out) ;
    mang p1,p2;
    cin>>p1 ;
    cout<<p1 ;
    f<<p1 ;
    p2=++p1 ;
    cout<<"\n Sap xep tang :"<<p2;
    f<<"\n Sap xep tang :"<<p2;
    f.close() ;
}
