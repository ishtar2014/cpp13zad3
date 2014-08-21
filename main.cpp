#include <iostream>

using namespace std;


bool czytrojkat(double a, double b, double c)

{

if(a<=0 || b<= 0 || c<=0) return false;
if(a<b+c && b<c+a && c<b+a) return true;
return false;

}

#define TESTY ///definiowanie testow

void testujtrojkat() ///testy

{

if(czytrojkat(0,2,-3) != false) cout<<"problem 1"<<endl;
if(czytrojkat(1,2,3) != false) cout<<"problem 2"<<endl;
if(czytrojkat(2,2,2) != true) cout<<"problem 3"<<endl;

}

#undef TESTY /// jesli to zakomentujemy to "wejdziemy w tryb testowania"

int main()

{

#ifdef TESTY

testujtrojkat();

#else

double a,b,c;
cout << "Wprowadz liczby" << endl;
cin>>a;cin>>b;cin>>c;
cout << "To ";czytrojkat(a,b,c)?cout<<"jest ":cout <<"nie jest ";cout << "trojkat.";

#endif
return 0;

}
