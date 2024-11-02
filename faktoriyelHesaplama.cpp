#include<iostream>
using namespace std;
main(){
	int sayi,i,faktoriyel=1;
	cout<<"Faktoriyel hesaplama programina hosgeldiniz"<<endl<<endl<<endl;
	cout<<"Faktoriyelini hesaplamak istediginiz sayiyi giriniz ";
	cin>>sayi;
	for(i=1;i<=sayi;i=i+1){
		faktoriyel=faktoriyel*i;
	}
	cout<<sayi<<"!: "<<faktoriyel;
}
