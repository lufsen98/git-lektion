//beräkna hur mycket växel som ska fås tillbaka när man handlat
//vilka sedlar och mynt som ska få tillaba(optimalt för kund så stora valörer)
//indata till programmet pris man skall betala och belopp man betalar med

//alla belopp är helt i kronor

//sedlar betalas aldrig tillbaka i högre valör än 100


// exempel ska man betala 711 kronor betalar med 1000kr
//2 100kronorsedlar
//1 50 kronorsedel
//1 20 kornorsedel
//1 10
//1 femkrona
//4 enkrona

#include <iostream>
using namespace std;

int main(){
    //initiera datatyp till variabler som ska användas för pris och betalning,växel
    int price, payment, change;
    // valörer intiera variabler med ett konstant värde
    int hundred, fifty, twenty, tencoin,
    fivecoin, onecoin;

    //skriv in priset spara i price

    /* FRÅGA till Chi Thu:
    Jag tycker det blir tydligare att skriva output och inputen som hör ihop
    på samma rad? vad är den generella rekommendationen?
    */
    cout << "Skriv in vad kunden ska betala: "; cin >> price;
    
    //skriv in payment spara i payment och skriv ut hur mycket växel kunden ska få
    cout << "Skriv summan du vill betala: "; cin >> payment;
    cout << endl;
    change = payment - price; 
    /* FRÅGA till Chi Thu:
    anser du att detta statment är för långt ska man dela upp det på fler rader?*/
    cout << "Du betalde med: " << payment << "kr och ska totalt få tillbaka: " << change << endl;

    // beräkna ut vilka sedlar som ska betalas ut
    hundred = change / 100; change %= 100;

    fifty = change / 50; change %= 50;

    twenty = change / 20; change %= 20;


    tencoin = change / 10; change %= 10;

    fivecoin = change / 5; change %= 5;

    onecoin = change / 1;

    //skriv ut om och vilka valörer som ska betalas ut.
    if (hundred >= 1){
        cout << "Du ska få tillbaka: " << hundred << " Hundralappar" << endl;
    }
    if (fifty >= 1){
        cout << "Du ska få tillbaka: " << fifty << " Femtiolappar" << endl;
    }
    if (twenty >= 1){
        cout << "Du ska få tillbaka: " << twenty << " Tjugolappar" << endl;
    }
    if (tencoin >= 1){
        cout << "Du ska få tillbaka: " << tencoin << " Tior" << endl;
    }
    if (fivecoin >= 1){
        cout << "Du ska få tillbaka: " << fivecoin << " Femor" << endl;
    }
    if (onecoin >= 1){
        cout << "Du ska få tillbaka: " << onecoin << " Enkronor" << endl;
    }


return 0;


}