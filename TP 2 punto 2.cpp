#include <iostream>
using namespace std;
int main(){
const int n=5;
int v[n],suma=0;
for(int i=0;i<n;i++){
cin>>v[i];
suma+=v[i];
}
float promedio=(float)suma/n;
cout<<suma<<endl;
cout<<promedio<<endl;
return 0;
}
