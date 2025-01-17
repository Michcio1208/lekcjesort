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
            if(s[j]=='#') lab[i][j]=-1;
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

int main(){
 int lab[N][N];
    wczytajlabirynt(lab);
    wypiszlabirynt(lab);

}