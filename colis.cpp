#include"colis.h"

colis::colis(double poids, double prix): d_poids{poids}, d_prixDeBase{prix}
{
}
colis::colis(double poids): d_poids{poids}, d_prixDeBase{prixBaremePoids(d_poids)}
{}

colis::~colis()
{}

double colis::poids() const
{
  return d_poids;
}

double colis::prixDeBase() const
{
  return d_prixDeBase;
}

double colis::prix()const
{
  return prixDeBase();
}

void colis::affiche(std::ostream& ost) const
{
  ost<<"colis poids : "<<d_poids;
  ost<<" prix de base: "<<d_prixDeBase;
  ost<<" prix : "<<prix();
}

double colis::prixBaremePoids(double poids)
{
  return 1.5*poids;
}
