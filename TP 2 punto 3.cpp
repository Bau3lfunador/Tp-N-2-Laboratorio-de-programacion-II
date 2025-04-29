#include <iostream>
using namespace std;
int main(){
int n;
cout<<"cantidad de elementos: ";
cin>>n;
int v[n];
for(int i=0;i<n;i++){
cout<<"valor "<<i+1<<": ";
cin>>v[i];
}
cout<<"duplicados: ";
for(int i=0;i<n;i++)
cout<<v[i]*2<<" ";
cout<<endl;
int pos,nuevo;
cout<<"posicion a insertar (0 a "<<n<<"): ";
cin>>pos;
cout<<"nuevo valor: ";
cin>>nuevo;
int v2[n+1];
for(int i=0;i<pos;i++)
v2[i]=v[i];
v2[pos]=nuevo;
for(int i=pos;i<n;i++)
v2[i+1]=v[i];
cout<<"vector con insercion: ";
for(int i=0;i<=n;i++)
cout<<v2[i]<<" ";
cout<<endl;
cout<<"sin ceros: ";
for(int i=0;i<n;i++)
if(v[i]!=0)
cout<<v[i]<<" ";
cout<<endl;
return 0;
}
