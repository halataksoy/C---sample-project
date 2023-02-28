#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main() {
	
	int secim;
	float birincisayi, ikincisayi, sonuc;
	cout<<"birinci sayiyi giriniz...:"<<endl;
	cin>>birincisayi;
	cout<<"ikinci sayiyi giriniz...:"<<endl;
	cin>>ikincisayi;
	cout<<"Toplama yapmak icin 1 e basiniz..."<<endl;
	cout<<"Cikarma yapmak icin 2 e basiniz..."<<endl;
	cout<<"Carpma yapmak icin 3 e basiniz..."<<endl;
	cout<<"Bolme yapmak icin 4 e basiniz."<<endl;
	cout<<"Seciminizi giriniz...:"<<endl;
	cin>>secim;
	
	switch(secim){
		
		case 1:
				cout<<"Girilen sayilarin toplami:"<<birincisayi+ikincisayi<<endl;
			 	break;
		case 2:
				cout<<"Girilen sayilarin farki: "<<birincisayi-ikincisayi<<endl;
				break;
		case 3:
				cout<<"Girilen sayilarin carpimi: "<<birincisayi*ikincisayi<<endl;
				break;
		case 4:
				cout<<"Girilen sayilarin bölümü: "<<birincisayi/ikincisayi<<endl;
				break;
		
	}
	
	
	
	
	
	
	
	return 0;
}
