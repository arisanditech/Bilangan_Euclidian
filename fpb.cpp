//Arisandi
#include <iostream>
using namespace std;

int main(){
	int a,b;
		if(a < b){
			int t = a;
			a = b;
			b = t;
			int r = 0;
			cout<<"Masukkan Bilangan Pertama : ";
			cin>>a;
			
			cout<<"Masukkan Bilangan Kedua : ";
			cin>>b;
			
		do {
			r = a%b;
			a = b;
			b = r;
		}
		while(r);
		cout<<"\nFPB Bilangan Pertama dan Kedua adalah "<<a<<endl;
		return a;
		}
}
