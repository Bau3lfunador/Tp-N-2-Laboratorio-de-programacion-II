#include <iostream>
using namespace std;
int main(){
const int n=5;
float v[n],suma=0;
for(int i=0;i<n;i++){
cout<<"altura "<<i+1<<": ";
cin>>v[i];
suma+=v[i];
}
float prom=suma/n;
int mas=0,menos=0;
for(int i=0;i<n;i++){
if(v[i]>prom)mas++;
if(v[i]<prom)menos++;
}
cout<<"promedio: "<<prom<<endl;
cout<<"mas altas: "<<mas<<endl;
cout<<"mas bajas: "<<menos<<endl;
return 0;
}
