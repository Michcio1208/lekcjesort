#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

int NWDroz(int a, int b, int &x, int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d = NWDroz(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}

int main(){
    int a, b, x, y;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    int d = NWDroz(a, b, x, y);
    cout << "NWD(" << a << ", " << b << ") = " << d << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}