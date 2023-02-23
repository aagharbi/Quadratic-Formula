#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void Quadratic(float, float, float);

int main() {   
  // Variables
  float a, b, c;

  // Prompt user for input
  cout << "(float) a: ";
  cin >> a;

  cout << "(float) b: ";
  cin >> b;
  
  cout << "(float) c: ";
  cin >> c;
  
  // Call Quadratic function
  Quadratic(a, b, c);
  
  return 0; 
}

// Quadratic Function takes in three coefficients of a quadratic equation and prints two zero values.
void Quadratic(float a, float b, float c) {
  string dummyOutput, imaginaryMinus, imaginaryPlus;
  float vertex, realPlus, realMinus, discriminant;
  
  /*
    Quadratic Formula has three use cases:
      1. When the discriminant (sqrt(b^2 + 4ac)) is 0.
          -The zeros are equal to the vertex.
      2. When the discriminant is less than 0.
          -The zeros are imaginary.
          -Since the value will be something like: 5 + 2i, we should concatenate the 
            values into a string -- use to_string(value)
      3. When the discriminant is greater than 0.
          -Use full quadratic formula and save the values into realPlus and realMinus,
            since both are real value zeros.
  */
  
  dummyOutput = "The zeros for the quadratic equation " + to_string(a) + "x² + " + to_string(b) + "x + " + to_string(c) + " are: \n";
  discriminant = pow(b, 2) - (4 * a * c);
  vertex = -b / (2.0f * a);
  
  if (discriminant < 0.0f){   
    float quadTemp = sqrt(abs(discriminant)) / 2.0f * a;
    
    imaginaryPlus = to_string(vertex) + " + " + to_string(quadTemp) + 'i';
    imaginaryMinus = to_string(vertex) + " - " + to_string(quadTemp) + 'i';

    cout << dummyOutput << imaginaryPlus << " and " << imaginaryMinus << endl;
  } 
  else if (discriminant == 0.0f) {
    realPlus = realMinus = vertex;
    
    cout << dummyOutput << realPlus << " and " << realMinus << endl;
  } 
  else {
    realPlus = (-b + sqrt(discriminant)) / (2.0f * a);
    realMinus = (-b - sqrt(discriminant)) / (2.0f * a);

    cout << dummyOutput << realPlus << " and " << realMinus << endl;
  }
}
