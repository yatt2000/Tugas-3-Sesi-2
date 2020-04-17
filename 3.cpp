#include <iostream>
using namespace std;

int box[3][3]={{2,4,6},{8,10,12},{14,16,18}};
int a, *p;
void x(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a=box[i][j];
			p=&a;
			cout<<*p<<" ";
		}
	}cout<<endl;
}
void y(int n){
	int k=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a=box[i][j];
			p=&a;
			cout<<"Jumlah box "<<k++<<": "<<*p<<endl;
			
		}
	}
}
int main(){
	int n=3, l=9;
	cout<<"Jumlah Nomor : "<<l<<endl;
	cout<<"Nomor Dus : ";
	x(n);
	y(n);
	return 0;
}

