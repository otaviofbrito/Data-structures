#ifndef ITEM_H
#define ITEM_H


class Item
{
private:
  int peso;
  int beneficio;
  double ratio;
  bool position = 0;

public:
  Item(int o_peso, int o_beneficio);

  void setPeso(int o_peso);

  void setBeneficio(int o_beneficio);

  void setRatio(double o_ratio);

  void setPosition(bool o_position);

  int getPeso()
  {
    return peso;
  }

  int getBeneficio()
  {
    return beneficio;
  }

  double getRatio()
  {
    return ratio;
  }

  bool getPosition()
  {
    return position;
  }
};

#endif // ITEM_H