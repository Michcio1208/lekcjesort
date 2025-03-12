#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
typedef vector<vector<int> > tgraf;


void wczytaj(tgraf &graf){
int n,m,w1,w2;
ifstream we("graf-2-txt.txt");
we>>n>>m;
graf.resize(n);
for(int i=0;i<m;i++){
    we>>w1>>w2;
    graf[w1].push_back(w2);
    graf[w2].push_back(w1);


}
we.close();
}

void DFS(int w1, tgraf &graf, vector<bool> &odwiedzone){
    cout<<"odwiedzony wierzchołek "<<w1<<endl;
    odwiedzone[w1]=true;
    for(int i=0;i<graf[w1].size();i++){
        int w2=graf[w1][i];
        if(!odwiedzone[graf[w2][i]]){
            DFS(graf[w2][i],graf,odwiedzone);
        }
    }
}

int main (){
tgraf graf;
wczytaj(graf);
vector<bool> odwiedzone;
odwiedzone.resize(graf.size(),false);
int w1;
cout<<"podaj wierzchołka startowego"<<endl;
cin>>w1;
DFS(w1,graf,odwiedzone);







}