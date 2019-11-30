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
  /*... a effacer et completer ...*/
  return iterator();
}


  template <typename Tclef, typename Tvaleur>
  typename map<Tclef,Tvaleur>::iterator map<Tclef,Tvaleur>::insert(iterator j,const Tclef& c){
  /*... a effacer et completer ...*/
  return iterator();
}

template <typename Tclef, typename Tvaleur>
  size_t map<Tclef,Tvaleur>::erase(const Tclef& c){
  noeud* p=APRES;
  iterator it= find(c); //todo need lowerbound
  noeud * aRemplacer= (it).POINTEUR;
  if(aRemplacer->PARENT != nullptr){
      aRemplacer=aRemplacer->PARENT;
      while(aRemplacer->GAUCHE != nullptr){
          aRemplacer=aRemplacer->GAUCHE;
      }
  } else{
      aRemplacer= nullptr;
  }

    if(erase(c, p, aRemplacer)){
        return 1;
    }
  return 0;
}

template <typename Tclef, typename Tvaleur>
  typename map<Tclef,Tvaleur>::iterator map<Tclef,Tvaleur>::erase(iterator i){
  /*... a effacer et completer ...*/
  return iterator();
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
  p->INDICE=nib;
  p->GAUCHE = temp->DROITE;
  temp->DROITE= p;
  p=temp;

}

template <typename Tclef, typename Tvaleur>
void map<Tclef,Tvaleur>::rotation_droite_gauche(noeud*& p){
    noeud * temp = p->DROITE;
    int ia= temp->INDICE;
    int ib = p->INDICE;
    int nib= -ia+ std::max(0, -ia) + ib;
    int nia= -ia- std::max(0, -nib)- 1;

    temp->INDICE = nia;
    p->INDICE=nib;
    p->DROITE = temp->GAUCHE;
    temp->GAUCHE= p;
    p=temp;
}


#endif /* map2_h */
