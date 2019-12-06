/**
* \ file main.cpp
* \ author Alexandre Beauquel, Joel Lemaire
* \ brief Ce fichier contient des tests des opérations
*/


#include "map.h"

int main(){

    //Test du code
    cout << "Test du main " << endl ;
    map<int,int> * m = new ::map<int,int>();
    m->insert(1);
    m->insert(2);
    m->insert(3);
    //m->insert(4);
    //m->insert(5);
    //m->insert(7);
    //m->insert(9);

//    m->insert(9);
//    m->insert(4);
//    m->insert(3);
//    m->insert(2);
//    m->insert(1);

    m->afficher();
   // map<int,int>::iterator it= m->find(1);
    //m->erase(1);
    m->insert(m->find(6), 7);
    m->afficher();


    //m->insert(4);
//    map->insert(3);
//    map->insert(4);
//    map->insert(10);
//    map->insert(5);
//    map->insert(7);
    //map<int,int>::iterator it= m->begin();
    //(*it).second=60;
    //(*m)[5]=65;
  //  m->afficher();
    return 0;

}


