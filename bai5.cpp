#include <bits/stdc++.h>
using namespace std;
int main (){
int n;
float s=0;
cin >>n;
for (int i=1;i<=n;i++){
     s+=1.0/(i*2-1);}
cout<<s;
return 0;
}