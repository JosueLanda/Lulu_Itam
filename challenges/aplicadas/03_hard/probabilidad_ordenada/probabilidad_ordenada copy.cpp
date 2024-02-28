#include <iostream>
#include <cmath>
using namespace std;
//#define ORIGINAL

int main()
{
  int minimum;
  cin >> minimum;
  int blue = 15;
  int red  =  6;

  // keep going until limit is reached
  while (blue + red < minimum)
  {
    // at first I brute-forced the first solutions and wrote them down
    // then I saw the following relationship for p/q = 1/2:
    //  red(i+1) = 2 * blue(i) + red(i) - 1;
    // blue(i+1) = 2 * red(i+1)
    red   = 2 * blue + red - 1; // seems to be true for most p/q
    blue += 2 * red;            // but this line is not correct for p/q != 1/2
  }

  cout << blue << endl;

  return 0;
}
