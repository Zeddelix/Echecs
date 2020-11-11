#include"afficheuretiquette.h"

class afficheurEtiquetteHTML : public afficheurEtiquette {
public:
  virtual void afficheEtiquette(const colis& c, std::ostream& ost) const override;
  virtual void afficheEtiquetteExpress(const colisExpress& c, std::ostream& ost) const override;
};
