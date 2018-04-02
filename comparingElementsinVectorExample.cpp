
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  vector<int> a = {10,1,2,3,4,5,6,7,8,8,9,10};

  cout << "the vectors size started with: " << a.size() << endl;

  if(a.begin() == a.end())
  {
    cout << "first and last elements are the SAME" << endl;
  }
  else
  {
    cout << "the first and last elements are NOT the same" << endl;
  }

  // Comparing two elements in a vector using 2 for loops :)
  for (int i = 1; i < a.size(); ++i)
  {
    if(a.at(i-1) == a.at(i))
    {
      a.erase(a.begin()+i);
    }
  }


  cout << "the vectors size is now: " << a.size() << endl;

  for (int h = 0; h < a.size(); ++h)
  {
    cout << a.at(h) << endl;
  }

  return 0;

}
