#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
   string b;
   char temp;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
    
  
    return 0;
}
