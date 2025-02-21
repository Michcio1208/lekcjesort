#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){
vector<int> tab;
int n;
cin>>n;
tab.resize(n);
for(int i=0;i<tab.size();i++){
    tab[i]=rand()%100;
}

for(int i=0;i<tab.size();i++){
    cout<<tab[i]<<" ";
}
}
