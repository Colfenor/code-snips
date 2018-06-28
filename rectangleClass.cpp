#include <iostream>

class Rectangle
{
private:
  double height_;
  double width_;
  // CopyConstructor implemented as private to avid, "shallow-copy" problem
  //
  Rectangle(const Rectangle &rhs) {} 

public:
  Rectangle(double height, double width) : height_(height), width_(width) {}
  virtual ~Rectangle() {}

  double getHeight() const
  {
    return height_;
  }
  // const method is important here, because we want the guarantee
  // that the getter method is not modifying our class members! 

  double getWidth() const
  {
    return width_;
  }

  void setHeight(double height)
  {
    height_ = height;
  }
  void setWidth(double width)
  {
    width_ = width;
  }

  // Calculate the area of a rectangle object
  double calcArea()
  {
    return height_ * width_;
  }

  //overloading the multiply operator so that two rectangle
  // objects can be multiplied with each other

  friend Rectangle operator* (const Rectangle &left, const Rectangle &right)
  {
    return Rectangle(left.height_ * right.height_, left.width_ * right.width_);
  }

  // TODO: overload = operator !

  // Scaling function for a rectangle

  double scaleRectangleArea(const double &scale_height, const double &scale_width)
  {
    return ((scale_height*height_)*(scale_width*width_));
  }

};


int main()
{
  Rectangle test(2, 3);

  Rectangle check(4, 3);
  Rectangle result();

  std::cout << (test*check).getWidth() << std::endl;

  std::cout << test.calcArea() << std::endl;

  std::cout << test.scaleRectangleArea(2.1, 2.2) << std::endl;

  return 0;
}
