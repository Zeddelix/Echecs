#ifndef COLISEXPRESS_H
#define COLISEXPRESS_H

#include"colis.h"

class colisExpress : public colis {
public:
  colisExpress(double poids, double prix, int priorite);
  colisExpress(double poids, int priorite);
  int priorite() const;
  virtual double prix() const override;
  virtual void affiche(std::ostream& ost) const override;
private:
  int d_priorite;
};

#endif // COLISEXPRESS_H


