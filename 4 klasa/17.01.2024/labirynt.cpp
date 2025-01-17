#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <stack>
#include <iomanip>
using namespace std;
const int N=20;

void wczytajlabirynt(int lab[][N]){
    string s;
    ifstream we("labirynt.txt");
    for(int i=0;i<N;i++){
        we>>s;
        for(int j=0;j<N;j++){
            if(s[j]=='X') lab[i][j]=-1;
            else lab[i][j]=0;
        }
    }
we.close();

}

void wypiszlabirynt(int lab[][N]){
    cout<<"   ";
        for(int j=0;j<N;j++){
            cout<<setw(3)<<j;
        }
        cout<<endl;
        for(int i=0;i<N;i++){
            cout<<setw(3)<<i;
            for(int j=0;j<N;j++){
                if(lab[i][j]==-1) cout<<"  X";
                else cout<<"   ";
            }
            cout<<endl;
        }
    }



       
    bool droga(int lab [][N],int w,int k){
        lab[w][k]=1;
        if(w==0 || w==N-1 || k==0 || k==N-1) return true;
        if(lab[w-1][k]==0 && droga(lab,w-1,k)) return true;
        if(lab[w+1][k]==0 && droga(lab,w+1,k)) return true;
        if(lab[w][k-1]==0 && droga(lab,w,k-1)) return true;
        if(lab[w][k+1]==0 && droga(lab,w,k+1)) return true;

        return false;
    }
int main(){
 int lab[N][N];
    wczytajlabirynt(lab);
    wypiszlabirynt(lab);
    droga(lab,0,0);

}