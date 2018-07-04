
// class rational

#include <iostream>
#include <string>

class Rational
{
private:
  int zaehler_;
  int nenner_;

public:
  // constructor
  Rational() = default;
  Rational(int zaehler, int nenner) : zaehler_(zaehler), nenner_(nenner) {}

  // Destructor
  virtual ~Rational() {}

  int getZaehler() const
  {
    return zaehler_;
  }
  int getNenner() const
  {
    return nenner_;
  }
  void setZaehler(int zaehler)
  {
    zaehler_ = zaehler;
  }
  void setNenner(int nenner)
  {
    nenner_ = nenner;
  }

  // to add two rational numbers :) use *this keyword
  Rational& addRational(const Rational &a, const Rational &b)
  {
    zaehler_ = (a.zaehler_ + b.zaehler_);
    nenner_ = (a.nenner_ + b.nenner_);
    return *this;
  }

  // For reference this code below does not work as intended...
  /*

  Rational& addRational(const Rational &a, const Rational &b)
  {
    Ratioanl temp;
    temp.zaehler_ = (a.zaehler_ + b.zaehler_);
    temp.nenner_ = (a.nenner_ + b.nenner_);
    return temp;
  }

  */

  // overload the addition + operator
  Rational operator +(const Rational &add)
  {
    return addRational(*this, add);
  }

};


int main()
{
  Rational test(3,4);
  Rational check(5,2);

  Rational result;
  result.addRational(test, check);

  std::cout << result.getZaehler() << std::endl;
  std::cout << result.getNenner() << std::endl;


  return 0;
}
