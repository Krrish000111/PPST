// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int a, b;
//     char oper;

//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter operator (+, -, *, /, %, ^): ";
//     cin >> oper;

//     cout << "Enter second number: ";
//     cin >> b;

//     if (oper == '+')
//         cout << "Result = " << a + b;

//     else if (oper == '-')
//         cout << "Result = " << a - b;

//     else if (oper == '*')
//         cout << "Result = " << a * b;

//     else if (oper == '/') {
//         if (b != 0)
//             cout << "Result = " << a / b;
//         else
//             cout << "Error: Division by zero";
//     }

//     else if (oper == '%') {
//         if (b != 0)
//             cout << "Remainder = " << a % b;
//         else
//             cout << "Error: Division by zero";
//     }

//     else if (oper == '^')
//         cout << "Result = " << pow(a, b);

//     else
//         cout << "Invalid operator";

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     float P, R, T;

//     cout << "Enter Principal amount: ";
//     cin >> P;

//     cout << "Enter Rate of Interest: ";
//     cin >> R;

//     cout << "Enter Time (in years): ";
//     cin >> T;

//     float Amount = P * pow((1 + R / 100), T);
//     float CI = Amount - P;

//     cout << "Compound Interest = " << CI << endl;
//     cout << "Total Amount = " << Amount << endl;

//     return 0;
// }
// Maximum of two numbers
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     if (a > b)
//         cout << "Maximum number is: " << a;
//     else if (b > a)
//         cout << "Maximum number is: " << b;
//     else
//         cout << "Both numbers are equal";

//     return 0;
// }


// Maximum of three numbers
// #include <iostream>
// using namespace std;
// int main()
// {
// int a, b, c;
//  cout << "Enter three numbers: ";
// cin >> a >> b >> c;
// int max;
// if (a >= b && a >= c)
// max = a;
// else if (b >= a && b >= c)
// max = b;
//  else
// max = c;
// cout << "Maximum number is: " << max;
// return 0;
// }

// Minimum of Three Numbers
// #include <iostream>
// using namespace std;
// int main()
// {
// int a, b, c;
//  cout << "Enter three numbers: ";
// cin >> a >> b >> c;
// int min;
// if (a <= b && a <= c)
// min = a;
//  else if (b <= a && b <= c)
//  min = b;
// else
// min = c;
// cout << "Minimum number is: " << min;
//  return 0;
// }

// Grade rade Letter Based on marks
// #include <iostream>
// using namespace std;
// int main()
// {
// int marks;
//  cout << "Enter marks: ";
// cin >> marks;
// if (marks >= 90 && marks <= 100)
// cout << "Grade: A";
// else if (marks >= 80 && marks < 90)
// cout << "Grade: B";
// else if (marks >= 70 && marks < 80)
// cout << "Grade: C";
// else if (marks >= 60 && marks < 70)
// cout << "Grade: D";
// else if (marks >= 0 && marks < 60)
//  cout << "Grade: F";
// else
// cout << "Invalid marks";
// return 0;
// }

//Roots of Quadratic Equation
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
// double a, b, c;
// double d, r1, r2, realPart, imagPart;
// cout << "Enter coefficients a, b and c: ";
// cin >> a >> b >> c;
// d = b*b - 4*a*c; // Discriminant
// if (d > 0)
// {
// r1 = (-b + sqrt(d)) / (2*a);
// r2 = (-b - sqrt(d)) / (2*a);
// cout << "Roots are real and different." << endl;
// cout << "Root 1 = " << r1 << endl;
// cout << "Root 2 = " << r2 << endl;
// }
// else if (d == 0)
// {
// r1 = -b / (2*a);
// cout << "Roots are real and equal." << endl;
// cout << "Root = " << r1 << endl;
// }
// else{
// realPart = -b / (2*a);
// imagPart = sqrt(-d) / (2*a);
// cout << "Roots are complex." << endl;
// cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
// cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
// }
// return 0;
// }


//Area of Circle, Equilateral Triangle, Rectangle, Square, Volume of Cube, Volume of
// Cylinder
#include <iostream>
using namespace std;
int main() {
int choice;
double r, a, b, h;
const double PI = 3.141592653589793;
cout << "Menu:\n";
cout << "1. Area of Circle\n";
cout << "2. Area of Equilateral Triangle\n";
cout << "3. Area of Rectangle\n";
cout << "4. Area of Square\n";
cout << "5. Volume of Cube\n";
cout << "6. Volume of Cylinder\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter radius: ";
cin >> r;
cout << "Area of Circle = " << PI * r * r;
break;case 2:
cout << "Enter side of equilateral triangle: ";
cin >> a;
cout << "Area of Equilateral Triangle = " << (1.732 * a * a) / 4;
break;
case 3:
cout << "Enter length and breadth: ";
cin >> a >> b;
cout << "Area of Rectangle = " << a * b;
break;
case 4:
cout << "Enter side of square: ";
cin >> a;
cout << "Area of Square = " << a * a;
break;
case 5:
cout << "Enter side of cube: ";
cin >> a;
cout << "Volume of Cube = " << a * a * a;
break;
case 6:
cout << "Enter radius and height: ";
cin >> r >> h;
cout << "Volume of Cylinder = " << PI * r * r * h;break;
default:
cout << "Invalid choice!";
}
return 0;
}
