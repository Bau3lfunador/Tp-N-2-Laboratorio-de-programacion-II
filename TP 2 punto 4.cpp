#include <iostream>
using namespace std;

int main(){
const int n=10;
int v[n];
for(int i=0;i<n;i++){
cout<<"numero "<<i+1<<": ";
cin>>v[i];
}
int max=v[0],min=v[0];
for(int i=1;i<n;i++){
if(v[i]>max)max=v[i];
if(v[i]<min)min=v[i];
}
cout<<"maximo: "<<max<<endl;
cout<<"minimo: "<<min<<endl;
return 0;
}

