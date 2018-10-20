#include <iostream>

using namespace std;

int main()
{
   int a,b,c;

   cout<< "Masukan sisi A :";
   cin>> a;

   cout<< "Masukan sisi B :";
   cin>> b;

   cout<< "Masukan sisi C :";
   cin>> c;

   if (a==b && a==c)
   {
       cout<< "Segitiga Sama Sisi" << endl;
   }
   else if  (a==b || a==c)
   {
       if  (a!=b || a!=c)
       {
           cout<<"Segitiga Sama Kaki"<<endl;
       }
   }
   else
    cout<< "Segitiga Sembarang" ;
    return 0;
}
