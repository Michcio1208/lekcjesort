#include <iostream>
#include <vector>
using namespace std;


/*int sumofd( int a )
{
    int s =0;
    while(a>0){
        s+=a%10;
        a/=10;
    }
    return s;

}

bool smith(int a)
{
int s=0,b=a;
for(int i=2;i<b/2;i++)
{
    while(a%i==0)
        {
        s+=sumofd(i);
         a/=i;
    }
}
return(s==sumofd(b));



}*/
bool isprime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

vector<int> factorize(int n)
{
    vector<int> facts;
    int fact = 2;
    while (fact <= n)
    {
        while (n % fact == 0)
        {
            n /= fact;
            facts.push_back(fact);
        }

        fact++;
    }

    return facts;
}

int digitsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

bool isSmith(int n)
{
    int fsum = 0;
    vector<int> fs = factorize(n);
    for (int i = 0; i < fs.size(); i++)
    {
        fsum += digitsum(fs[i]);
    }

    return (n > 1 && !isprime(n) && digitsum(n) == fsum);
}
int main()
{
    //liczba smitha: liczba nat. wieksza od 1, ktora nie jest liczba pierwsza oraz ktore suma cyfr
    //jest rowna sumie cyfr wszystkich liczb wystepujacych w jej rozkladzie na czynniki pierwsze

int c;
cin>>c;
if(isSmith(c)){
    cout<<"tak"<<endl;
}
else{
    cout<<"nie"<<endl;
}

//sito eratostenesa: algorytm generujacy liczby pierwsze z przedzialu 2 do n, opiera sie na wlasnosci liczb zlozonych,
// ze liczba zlozona jest wielokrotnoscia co najmniej jednej liczby pierwszej np. 10 jest wielokrotnoscia liczb 2 i 5




















}
