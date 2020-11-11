#include"colisinternational.h"

colisInternational::colisInternational(double poids, double prix, const std::string& pays):
  colis{poids, prix}, d_pays{pays}
{}

colisInternational::colisInternational(double poids, const std::string& pays):
  colis{poids}, d_pays{pays}
{}
std::string colisInternational::pays() const
{
  return d_pays;
}

double colisInternational::prix() const
{
  return (d_pays != "France") ? prixDeBase()+50 : prixDeBase();
}
