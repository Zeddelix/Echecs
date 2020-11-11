#include <iostream>
#include<vector>
#include<memory>
#include"colis.h"
#include"colisexpress.h"
#include"colisinternational.h"

using std::cout;

void test1()
{
  colis c{1.2,30};
  c.affiche(cout);
}

void test2()
{
  colisExpress ce{1.2,30,2};
  cout<<"prix : "<<ce.prix()<<std::endl;
  ce.affiche(cout);
}

double sommePrix(const std::vector<std::unique_ptr<colis>>& tc)
{
  double somme {0.0};
  for (const auto& c: tc)
  {
    somme += c->prix();
  }
  return somme;
}

void test3()
{
  std::vector<std::unique_ptr<colis>> tc;
  tc.push_back(std::make_unique<colis>(1.2,30));//std::unique_ptr<colis>(new colis{1.2,30})
  tc.push_back(std::make_unique<colisExpress>(1.2,30,2));
  tc.push_back(std::make_unique<colisInternational>(1.2,40, "France"));
  tc.push_back(std::make_unique<colisInternational>(1.2,40, "Suisse"));

  for (int i=0; i<tc.size(); ++i)
  {
    cout<<"prix : "<<tc[i]->prix()<<std::endl;
  }
  for (const auto& c: tc)
  {
    cout<<"prix : "<<c->prix()<<std::endl;
  }
  cout<<"prix total : "<<sommePrix(tc)<<std::endl;
}

void imprimmeEtiquette(const colis& c, const afficheurEtiquette& aff)
{
  aff.afficheEtiquette(c, std::cout);
}

int main()
{
    test2();
    return 0;
}
