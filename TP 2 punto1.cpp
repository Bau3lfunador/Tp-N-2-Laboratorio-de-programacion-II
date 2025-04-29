#include <iostream>
using namespace std;
int main(){
int v[]={4,7,2,9,6};
int suma=0;
int len=sizeof(v)/sizeof(int);
for(int i=0;i<len;i++)
suma+=v[i];
cout<<suma<<endl;
return 0;
}
