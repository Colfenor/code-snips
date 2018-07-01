// ClassVector.cpp :
//

#include <iostream>

class Vector
{
private:
  double v1_;
  double v2_;
  double v3_;
public:
  Vector() = default;
  Vector(double v1, double v2, double v3) : v1_(v1), v2_(v2), v3_(v3) {}
  virtual ~Vector() {}

  double getV1() const
  {
    return v1_;
  }

  void setV1(double v1)
  {
    v1_ = v1;
  }

  // multiply vector by scalar
  Vector& multiplyByScalar(const double &scalar)
  {
    v1_ * scalar;
    v2_ * scalar;
    v3_ * scalar;
    return *this;
  }

  // overload the multiply operator ! :)
  Vector operator*(const double &scalar)
  {
    return Vector(v1_*scalar, v2_*scalar, v3_*scalar);
  }

  /*
  2nd variation of multiply operator overloading 
  
  Vector operator*(const double &scalar)
  {
    Vector temp;
    temp.v1_ = v_1 * scalar;
    temp.v2_ = v_2 * scalar;
    temp.v3_ = v_3 * scalar;
    return temp;
  } 
  */

};




int main()
{
  Vector test(2, 2, 3);
  Vector result;

  std::cout << test.getV1() << std::endl;
  
  std::cout << result.getV1() << std::endl;

  result = test * 2.1;
  
  std::cout << result.getV1() << std::endl;

  std::cout << (test*2.1).getV1() << std::endl;

  return 0;
}

