/**
* \ file set2.h
* \ author Aida Ouangraoua (Nov. 2019)
* \ brief Ce fichier contient les fonctions 
* \ du type map à coder
*/


#ifndef map2_h
#define map2_h


/////////////////////////////////////////////////
// map
// fonctions publiques
/////////////////////////////////////////////////

template <typename Tclef, typename Tvaleur>
typename map<Tclef,Tvaleur>::iterator map<Tclef,Tvaleur>::lower_bound(const Tclef& c)const{

    noeud * noeud = APRES->GAUCHE;
    while (noeud->DROITE != nullptr && noeud->CONTENU->first < c){
        noeud= noeud->DROITE;
    }
    return iterator(noeud);
}


template <typename Tclef, typename Tvaleur>
typename map<Tclef,Tvaleur>::iterator map<Tclef,Tvaleur>::insert(iterator j,const Tclef& c){
    /*... a effacer et completer ...*/
    //insert(c, APRES,  j)
    return iterator();
}

template <typename Tclef, typename Tvaleur>
size_t map<Tclef,Tvaleur>::erase(const Tclef& c){
    iterator aSupprimer= find(c); //todo need lowerbound
    noeud * aRemplacer= new noeud();;
    if(erase(c, APRES->GAUCHE, aRemplacer)){
        return 1;
    }
    return 0;
}

template <typename Tclef, typename Tvaleur>
typename map<Tclef,Tvaleur>::iterator map<Tclef,Tvaleur>::erase(iterator i){
    noeud * noeud = i.POINTEUR;
    erase(noeud->CONTENU->first);
    return iterator(noeud);
}


///////////////////////////////////////////////////
// fonctions privees pour la gestion de l'equilibre
///////////////////////////////////////////////////


template <typename Tclef, typename Tvaleur>
void map<Tclef,Tvaleur>::rotation_gauche_droite(noeud*& p){
  noeud * temp = p->GAUCHE;
  int ia= temp->INDICE;
  int ib = p->INDICE;
  int nib= -ia- std::max(0, -ia)- 1 + ib;
  int nia= ia- std::max(0, -nib)- 1;
  temp->INDICE = nia;
  temp->PARENT=p->PARENT; //
  p->INDICE=nib;
  p->GAUCHE = temp->DROITE;
  if(temp->DROITE != nullptr)
    temp->DROITE->PARENT=p; //
  temp->DROITE= p;
  p->PARENT=temp;
  p=temp;


}

template <typename Tclef, typename Tvaleur>
void map<Tclef,Tvaleur>::rotation_droite_gauche(noeud*& p){
    noeud * temp = p->DROITE;
    int ia= temp->INDICE;
    int ib = p->INDICE;
    int nib= std::max(0, -ia)+1+ib;
    int nia= std::max(0, -ia) + std::max(0,- nib) +ia +ib + 2;

    temp->INDICE = nia;
    p->INDICE=nib;
    p->DROITE = temp->GAUCHE;
    temp->PARENT=p->PARENT; //

    if(temp->GAUCHE != nullptr)
        temp->GAUCHE->PARENT=p; //
    temp->GAUCHE= p;
    p=temp;
}


#endif /* map2_h */
