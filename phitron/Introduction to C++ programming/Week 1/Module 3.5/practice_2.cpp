#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	char country[100];
};

int main ()
{
    Cricketer* dhoni=new Cricketer;
    dhoni->jersey_no = 7;
    char s[100] = "India";
    strcpy(dhoni->country,s);

    Cricketer* kholi= new Cricketer;
    //kholi=dhoni;(worng approach)

    kholi->jersey_no=dhoni->jersey_no;
    strcpy(kholi->country,dhoni->country);

    delete(dhoni);
    
    cout << kholi->jersey_no << endl << kholi->country;
    
    return 0;
}