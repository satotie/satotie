#include <iostream>
#include<cmath>
using namespace std;

double deg2rad(double a){
    return a*M_PI/180;
}

double rad2deg(double a){
    return a*180/M_PI;
}

double findXComponent(double a,double b,double c,double d){
    return (a*cos(c))+(b*cos(d));
}

double findYComponent(double a,double b,double c,double d){
    return (a*sin(c))+(b*sin(d));
}

double pythagoras(double xComponent, double yComponent) {
    return sqrt((xComponent * xComponent) + (yComponent * yComponent));
}

void showResult(double vectorLength, double vectorDirection) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << vectorLength << "\n";
    cout << "Direction of the resultant vector (deg) = " << vectorDirection << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}