#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double TriangleArea(double side_a, double side_b, double side_c) //calculate triangle's area, it is basic on sides length
{
    double area;
    if((side_a+side_b>side_c)&&(side_a+side_c>side_b)&&(side_b+side_c>side_a))
    {
    area=sqrt((side_a+side_b+side_c)*(side_a+side_b-side_c)*(side_a-side_b+side_c)*(-side_a+side_b+side_c))/4;

     return area;
    }


    else
    return 0;

}
int Factorial(int Fac) //calculate factorial from input
{
    long long int Score=1;
    for(int i=1; i<Fac+1; i++)
    {
        Score*=i;

    }

    return Score;
}
double isSimilar(double side_x1, double side_y1, double side_x2, double side_y2) //triangle pair similar checker
{

    if(side_x1/side_y1==side_x2/side_y2)
        return 1;

    else
        return 0;
}

int Power(int base, int index) //it is calculating power from any number
{
    int Score=1;
    for(int i=0; i<index; i++)
    {

        Score*=base;

    }
        return Score;
}

double Sphere_vol(double radius) //it is calculating sphere volume, radius is input
{
    return 3.141592653589793238462643383279502884197*(4/3)*(radius*radius*radius);
}

