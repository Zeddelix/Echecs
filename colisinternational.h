#ifndef COLISINTERNATIONAL_H
#define COLISINTERNATIONAL_H
#include<string>
#include"colis.h"

class colisInternational : public colis {
public:
  colisInternational(double poids, double prix, const std::string& pays);
  colisInternational(double poids, const std::string& pays);
  std::string pays() const;
  virtual double prix() const override;
private:
  std::string d_pays;
};

#endif // COLISINTERNATIONAL_H
