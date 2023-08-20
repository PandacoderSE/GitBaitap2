#include <iostream>
using namespace std ;
class Ps{
private :
    int Ts,Ms ;
public :
    friend istream& operator>>(istream& in , Ps &k) ;
    friend ostream& operator<<(ostream& out, Ps k) ;
    Ps operator*(Ps q) ;
    Ps operator+(Ps a) ;
    Ps operator/(Ps c) ;
    Ps operator-(Ps d) ;
    float operator--() ;
    Ps() ;
    Ps(int b, int c) ;
};
Ps::Ps(){
    Ts=0 ;
    Ms=0 ;
}
Ps::Ps(int b, int c){
    Ts=b ;
    Ms=c ;
}
istream& operator>>(istream& in , Ps &k){
    cout<<"Nhap tu so :"; in>>k.Ts ;
    cout<<"Nhap Mau so :"; in>>k.Ms ;
    return in ;
}
ostream& operator<<(ostream& out, Ps k){
    out<<k.Ts<<"/"<<k.Ms<<" ";
    return out ;
}
Ps Ps::operator+(Ps a){
    Ps tg ;
    tg.Ts=Ts*a.Ms+a.Ts*Ms ;
    tg.Ms=Ms*a.Ms ;
    return tg ;
}
float Ps::operator--(){
    return (float)Ts/Ms ;
}
int main(){
    Ps p1,p2(2,3) ;
    cin>>p1;
    cin>>p2 ;
    cout<<p1<<p2 ;
    Ps p3 ;
    p3=p1+p2 ;
    cout<<p1<<"+"<<p2<<"="<<p3<<"="<<--p3<<endl ;
}

