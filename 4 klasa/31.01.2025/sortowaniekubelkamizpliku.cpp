#include <iostream>
#include <list>
#include <string>
#include <fstream>
using namespace std;
const string alfabet="aąbcćdeęfghijklłmnńoóprsśtuwyzźż";
const int N=35;
void Budujliste(list<string> &lista, int&mdl){
    ifstream we("slowa.txt");
    string s;
    while(we>>s){
        if(s.size()>mdl){
            mdl=s.size();
        }
    }
    we.close();
}

//z pliku
//wir,kra,kwiat,wiatr,świat,świt,kraj
//jakies sortowanie kubełkowe 

void Zapiszliste(list<string> &lista){
    ofstream wy("slowa.txt");
    list<string>::iterator it;
    for( it=lista.begin(); it!=lista.end(); it++){
        wy<<*it<<endl;
    }
    wy.close();


    void Sortujslowa(lista<string> &lista, int mdl){
        queue<string> kubelki[N];
        list<string> kubelek[N];
        list<string>::iterator it;
        int i,j;
        string s;
        for(i=mdl-1;i>=0;i--)
        it=lista.begin();
        while(it!=lista.end()){
            s=*it;
            if(s.size()>i){
                it=lista.erase(it);
                j=alfabet.find(s[i]);
                kubelek[j].push_back(s);
                
            }
            else{
                it++;
            }
        }
        
    } for(j=0;j<N;j++){
        for(it=kubelek[j].begin();it!=kubelek[j].end();it++){
            lista.push_back(kubelki[j]).front();
            kubelki[j].pop();
        }
    }
}

int main() {
int n,k;
list<int> lista;
list<int>::iterator it;
cout<<"n= "; cin>>n;
cout<<"k= "; cin>>k;




}