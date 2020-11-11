#include"colisexpress.h"

colisExpress::colisExpress(double poids, double prix, int priorite):
              colis{poids, prix}, d_priorite{priorite}
{}


colisExpress::colisExpress(double poids, int priorite):
              colis{poids}, d_priorite{priorite}
{}

int colisExpress::priorite() const
{
  return d_priorite;
}

double colisExpress::prix() const
{
  return prixDeBase() * d_priorite;
}

void colisExpress::affiche(std::ostream& ost) const
{
  ost<<"colis express ";
  colis::affiche(ost);
  ost<<" priorite : "<<d_priorite;
}

