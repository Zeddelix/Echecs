#ifndef COLIS_H
#define COLIS_H
#include<iostream>

class colis {
public:
  colis(double poids, double prix);
  colis(double poids);
  virtual ~colis();
  double poids() const;
  virtual double prix()const;
  double prixDeBase() const;
  virtual void affiche(std::ostream& ost) const;
  static double prixBaremePoids(double poids);
private:
  double d_poids;
  double d_prixDeBase;
};

#endif // COLIS_H
