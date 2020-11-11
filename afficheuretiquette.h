#ifndef AFFICHEURETIQUETTE_H
#define AFFICHEURETIQUETTE_H

#include<iostream>

class colis;
class colisExpress;

class afficheurEtiquette {
public:
  virtual ~afficheurEtiquette();
  virtual void afficheEtiquette(const colis& c, std::ostream& ost) const =0;
  virtual void afficheEtiquetteExpress(const colisExpress& c, std::ostream& ost) const =0;
};


#endif // AFFICHEURETIQUETTE_H
