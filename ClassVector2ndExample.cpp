
#include <iostream>

class Vector
{
private:
  double x_;
  double y_;
  double z_;
public:
  Vector() = default;
  Vector(double x, double y, double z) : x_(x), y_(y), z_(z)
  {
    // constructor
  }
  virtual ~Vector() {} // Destructor

  double calcScalarProduct(const Vector &left, const Vector &right)
  {
    double result = (left.x_ * right.x_) + (left.y_ * right.y_) + (left.z_ * right.z_);
    return result;
  }

  // overload the multiply operator
  double operator*(const Vector &v2)
  {
    return calcScalarProduct(*this, v2);
  }

};

int main()
{
  Vector test(1, 3, 3);
  Vector test2(3, 2, 1);

  std::cout << "Ausgabe der Methode:  " << test.calcScalarProduct(test, test2) << std::endl;
  std::cout << "Ausgabe des * operators: " << test * test2 << std::endl;

   return 0;
}
