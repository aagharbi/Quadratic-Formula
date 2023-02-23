#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// In C++, we must declare functions before use-scope.
// You can put the function definition before main(),
// but I personally think it can create clutter.
void Quadratic(float, float, float);

int main() {
  // Variable Declerations
  float a, b, c;

  // Prompt user for input
  cout << "(float) a: ";
  cin >> a;

  cout << "(float) b: ";
  cin >> b;

  cout << "(float) c: ";
  cin >> c;

  // -----Call Quadratic function------

  return 0;
}

// Quadratic Function takes in three coefficients of a quadratic equation
// and prints two zero values.
void Quadratic(float a, float b, float c) {
  string dummyOutput, imaginaryMinus, imaginaryPlus;
  float vertex, realPlus, realMinus, discriminant;

  /*
    Quadratic Formula has three use cases:
      1. When the discriminant (sqrt(b^2 + 4ac)) is 0.
          -The zeros are equal to the vertex.
      2. When the discriminant is less than 0.
          -The zeros are imaginary.
          -***Hint: Be careful with trying to take the square-root of a negative
    value! -Since the value will be something like: 5 + 2i, we should
    concatenate the values into a string -- use to_string(value)
      3. When the discriminant is greater than 0.
          -Use full quadratic formula and save the values into realPlus and
    realMinus, since both are real value zeros.

    ------------------
    CMATH Functions that you might want to use:
      -abs(value) will return an absolute value.
      -sqrt(value) will return a square root value.
      -pow(value, n) will return value to the n power (exponent) --
    alternatively you can just use b*b for b^2.
  */

  // dummyOutput is the first part of what you should output.  I left it
  // so you can see contcatenation and string-casting in action!
  dummyOutput = "The zeros for " + to_string(a) + "x^2 + " + to_string(b) +
                "x + " + to_string(c) + " are: ";

  //------Your Code Goes Here!------//

  // Calculate discriminant and vertex here.

  // If Discriminant is less than 0, then:
  /*
       ***Note:  If you get an error concatenating a float into string, you can
                use to_string(value) which works like static_cast<type>(value)
  */

  //   Calculate zeros and save (concatenate using '+') into string

  //   Print results
  // If Discriminant is 0, then:
  //   Calculate zeros

  //   Print results

  // Otherwise:
  //   Calculate using the whole quadratic formula

  //   Print results
}
