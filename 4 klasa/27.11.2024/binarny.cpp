#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;







int main(){
    /*
//binarny na dziesietny
// 1101,11 = 1*2^3 + 1*2^2 + 0*2^1 +1*2^0 +1*2^-1 + 1*2^-2= 8+4+0+1+1/2+1/4= 13+3/4

// 101111,01101 = 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 1*2^0 + 0*2^-1 + 1*2^-2 + 1*2^-3 + 0*2^-4 + 1*2^-5 = 32+8+4+2+1+1/4+1/8+1/32= 47+ 13/32





// dziesietny na binarny 
16
16|0
8 |0
4 |0
2 |0
1 |1
calosci od dolu 
dzielimy na 2 
czyli 10000


0,1875
mnozymy razy 2
0|1875
0|375
0|75
1|5
1|0
ułamki od gory 
0,00011

852,6875

852|0
426|0
213|1
106|0
53 |1 
26 | 0
13 | 1
6  | 0
3  | 1
1 | 1 
czyli 1101010100

0 | 6875

1 | 375
0 | 75
1 | 5
1 | 0 

852,6875 = 1101010100,1011



osemkowy
jako binarny
0
1
2
3
4
5
6 
7 |


szesnastkowy
jako binarny
0 0000
1 0001
2 0010
3 0011
4 0100
5 0101
6 0110
7 0111
8 1000
9 1001
A 1010
B 1011
C 1100
D 1101
E 1110
F 1111

jak mamy liczbe 1011101111 i chcemy zamienić na osemkowy to dzielimy na trojki od prawej i uzupelniamy luki zerami
001 011 101 111
1    3  5    7  = 1357 w osemkowym



110011011 na szesnastkowy
0001 1001 1011
1     9    B   = 19B






w przypadku dodawwanie gdy w wyniku otrzymuje wartosc wieksza od 2,
w rozwiazaniu wpisujemy reszte z dzielenia  tej wartości przez 2 w lewo 
zaś przenosimy wynik dzielenia calkowietego tej liczby przez 2 


0+0=0
0+1=1
1+0=1
1+1=10
1+1+1=11
1+1+1+1=100
*/
}