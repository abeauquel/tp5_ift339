/**
* \ file main.cpp
* \ author Alexandre Beauquel, Joel Lemaire
* \ brief Ce fichier contient des tests des opérations
*/


#include "map.h"

int main(){

    //Test du code
    cout << "Test du main " << endl ;
    map<char,int> * map = new ::map<char,int>();
    map->insert('1');
    map->insert('2');
    map->insert('3');
    map->afficher();
    return 0;

}


