#include<iostream>
#include<cstring>
using namespace std;

int main(){
char[10] name;
cin>>name;
char names[4][10]={"bruise","tony","peter"};
int n=4;
  arr[4]=name;
  for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
if(strcmp(names[i],names[j])<=0){
char [] temp=names[i];
  names[i]=names[j];
  names[j]=temp;
}
}
for(int i=0;i<n;i++){
cout<<names[i]<<endl;
}
}

return 0;
}
