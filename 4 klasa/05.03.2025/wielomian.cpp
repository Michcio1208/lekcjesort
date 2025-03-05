#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;


void CzytajWielomian(vector<float> &A){
    int n;
    cout<<"stopien wielomianu: ";
    cin>>n;
    A.resize(n+1);
    for(int i = n; i >=0; i--){
        cout<<"a"<<i<<": ";
        cin>>A[i];

    }
}
int W(vector<float> &A, int x){
float y=A[0], z=1;
    for(int i = 1; i < A.size(); i++){
        z*=x;
        y+=A[i]*z;
    }
    return y;
}
int Horner(vector<float> &A, float x){
    int n = A.size()-1;
    float y=A[n];
    for(int i = n-1; i >= 0; i--){
        y = y*x + A[i];
    }
    return y;
}

int oblicz(vector<float> &A){
    int n = A.size()-1;
    float y=A[n];
    for(int i = n-1; i >= 0; i--){
        y = y*2 + A[i];
    }
    return y;
}

int main(){

vector<float> A;
CzytajWielomian(A);
int x;
cout<<"x: ";
cin>>x;
cout<<"W("<<x<<") = "<<W(A,x)<<endl;
cout<<"W("<<x<<") = "<<Horner(A,x)<<endl;





}