#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    /*
vector<int> tab;
int n;
cin>>n;
tab.resize(n);
for(int i=0;i<tab.size();i++){
    tab[i]=rand()%100;
}

for(int i=0;i<tab.size();i++){
    cout<<tab[i]<<" ";
}*/

vector<vector<int> > tab;
int n;
cin>>n;
tab.resize(n);
for(int i=0;i<tab.size();i++){
    tab[i].resize(i+1);
    for(int j=0;j<tab[i].size();j++){
        tab[i][j]=rand()%100;
    }
}

for(int i=0;i<tab.size();i++){
    for(int j=0;j<tab[i].size();j++){
        cout<<tab[i][j]<<" ";
    }
    cout<<endl;
}










}
