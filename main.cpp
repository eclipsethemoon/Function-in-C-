#include <iostream>

/* Weight Equations Formulas Calculator
    1. Solve for weight in kilogram
    2. Solve for mass in Newton
    3. Solve for acceleration of gravity W/m
*/
using namespace std;

const double GRAVITY = 9.80665;

//Function prototype.

double solveFW();
void solveFM();
double solveAG (double &,double &);

int main()
{
    double vObjWeight = 34.3233;
    double vObjMass = 3.5;
    double resultSolveFW;
    resultSolveFW = solveFW();
    cout <<"Weight(f) "<< resultSolveFW <<" newton\n" <<endl;
    for (int index =0; index < 5 ;index++)
    solveFM();
    cout << "What is the object weight in newton?"<<endl;
    cin >> vObjWeight;
    cout << "What is the object mass in kilogram ?"<<endl;
    cin >> vObjMass;
    cout << "The Acceleration of Gravity is "<<solveAG(vObjWeight,vObjMass)<<" meter/second^2 "<<endl;
    return 0;
}

//Function using local variable
double solveFW()
{
    double objWeight,objMass = 3.5;
    cout << "What is the object mass in kilogram ?"<<endl;
    cin >> objMass;
    return objWeight = objMass * GRAVITY ;
}

//Function using Static Local Variable
void solveFM()
{
    static double objWeight = 35;
    double objMass;
    //cout << "What is object's weight? "<< endl;
    //cin >> objWeight;
    objMass = objWeight / GRAVITY;
    cout << "Weight is: "<< objWeight <<" newton"<< endl;
    cout <<"mass(m) "<< objMass <<" kilogram" <<endl<<endl;
    objWeight++;


}
//Funtion using reference variables as parameters
double solveAG(double &objWeight,double &objMass)
{
    double g = 0.0;
    return g = objWeight / objMass;
}
