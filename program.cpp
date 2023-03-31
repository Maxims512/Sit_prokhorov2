#include <iostream>

#include <iostream>
using namespace std;

int main()
{ 
    int a1=0, a2=1, a, n;
    n=10;
    cout<<a1<<endl<<a2<<endl;
    for(int i=3; i<=n; i++)
    { 
        a=a1+a2;
        cout<<a<<endl;
        a1=a2;
        a2=a; 
    }
    return 0;
}