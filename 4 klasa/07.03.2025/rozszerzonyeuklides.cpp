#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

int NWD(int a, int b){
    if(b==0) return a;{
    return(NWD(b,a%b));
    }
}

pair<int,int> NWDroz(int a, int b){
    if(b==0) return make_pair(1,0);
    pair<int,int> p = NWDroz(b,a%b);
    return make_pair(p.second,p.first-(a/b)*p.second);
}
    


int main(){
    int a, b;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    pair<int, int> result = NWDroz(a, b);
    int d = NWD(a, b);
    cout << "NWD(" << a << ", " << b << ") = " << d << endl;
    cout << "Wspolczynniki: x = " << result.first << ", y = " << result.second << endl;

    return 0;
}