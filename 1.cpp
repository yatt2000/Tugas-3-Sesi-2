#include <iostream>
using namespace std;
void tukar(int &a, int &b)

{
int temp = a;
a=b;
b=temp;
}
int main() {
int p=4,q=7;
cout<<"Sebelum penukaran : "<<endl;
cout<<"Nilai A : "<<p<<endl;
cout<<"Nilai B : "<<q<<endl;
tukar (p,q);
cout<<"Setelah penukaran : "<<endl;
cout<<"Nilai A : "<<p<<endl;
cout<<"Nilai B : "<<q<<endl;
return 0;
}
