#include <iostream>

using namespace std;

int main()
{

   //  for(int k=0;k<=10;k++){

       // if( k%2!=0){
        //    continue;
        //}
        //cout<<k<<endl;
        //}
       // int x, suma;
       // suma=0;
      //  for(;;){
       //     cin<<x;
       //     suma+=x;
       //     cout<<x;
       // }
    //   int x, suma;
      // suma=0;
//while(true){
  //  cin>>x;
  //  suma+=x;
  //  if(x==0) break;
//}

//cout<<"suma to: "<<suma<<endl;


int n;
cout<<"1-NOWY, 2-OTwORZ, 3-ZAPISZ, 4-ZAPISZ JAKO, 5- DRUKUJ, 6- WYJDZ"<<endl;
cout<<"podaj liczbe: "<<endl;
cin>>n;
switch(n){
case 1:cout<<"NOWY"<<endl;break;
case 2:cout<<"OTWORZ"<<endl;break;
case 3:cout<<"ZAPISZ"<<endl;break;
case 4:cout<<"ZAPISZ jako"<<endl;break;
case 5:cout<<"DRUKUJ"<<endl;break;
case 6:cout<<"WYJDZ"<<endl;break;
default:cout<<"blad";break;




}

if(n==1)cout<<"tworzenie nowego pliku..."<<endl;
else if (n==2)cout<<"otwieranie..."<<endl;
else if (n==3)cout<<"zpaisywanie..."<<endl;
else if (n==4)cout<<"zapisywanie jako..."<<endl;
else if (n==5)cout<<"drukowanie.."<<endl;
else if (n==6)cout<<"wychodzenie..."<<endl;
else cout<<"blad"<<endl;



}
