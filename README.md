# praktikum3

*Latihan1 #Menentukan Bilangan Terbesar dari Banyak Bilangan.

```
Alur Algoritma.
	1.Mendeklarasikan int i,max,a, dan x.
	2.mendeklarasikan variabel a dan x sebagai nilai inputan.
	3.Mendeklarasikan variabel i sebagai perulangan.
	4.Mendeklarasikan variabel max sebagai pengingat nilai.
	5.Membuat rumus perulangan untuk menentukan banyak bilangan yang akan di bandingkan
		for (i;i<a;i++)
	6.Menginputkan nilai a.
	7.menginputkan nilai x.
	8.Membandingkan nilai x dengan max
		if ( x> max) // jika x lebih besar dari max
	    	max= x   // maka nilai max adalah x
```

*Berikut kode lengkapnya

```c++
	int main()
{
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukan Jumlah Bilangan :";
    cin >> a;

    for (i;i<a;i++){
        cout<< "Masukan Bilangan Ke-" << i+1 << ":";
        cin>> x;

        if (x > max)
            max = x;
    }
    cout << "Bilangan Terbesar Adalah :"<< max <<endl;
    return 0;
}
```

*Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum3/master/hasil1.png)


*Latihan2 #Mengurutkan dari bilangan yang terkecil sampai terbesar
```
Alur Algoritmanya
	1.Mendeklasrasikan int a,b,c sebagai variabel input
	2.Membandingkan setiap variabel untuk menentukan nilai yang terkceil sampai yang terbesar
	3.Dengan menggunkan rumus if dan percabangan
		if (a<b)
    		    {
       		       if (b<c)
                       cout<< a << "  " << b << "  " <<c;
		Jika a lebih kecil dari b dan jika b lebih kecil dari c maka yang akan ditampilkan
		a b c
```
*Berikut Kode Lengkapnya

```c++
int main()
{
    int a,b,c;
    cin>> a >> b >> c;
    if (a<b)
    {
        if (b<c)
            cout<< a << "  " << b << "  " <<c;
        else
        {
            if (a<c)
                cout<< a << "  " << c << "  " <<b;
            else
                cout << c << "  " << a << "  " <<b;
        }
    }
    else
    {
        if (a<c)
            cout << b << "  " << a << "  " << c;
        else
        {
            if ( b<c )
                cout << b << "  " << c << "  " <<a;
            else
                cout << c << "  " << b << "  " <<a;
        }
    }
    return 0;
}
```c++

*Berikut Hasilnya

![img] (https://raw.githubusercontent.com/aseps12/praktikum3/master/hasil2.png)
![img] (https://raw.githubusercontent.com/aseps12/praktikum3/master/hasil3.png)
![img] (https://raw.githubusercontent.com/aseps12/praktikum3/master/hasil4.png)