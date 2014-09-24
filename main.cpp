#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Finds the distance between two points\n";
        cin.get();
    float x2, x1, xresult, y2, y1, yresult, distance;
    cout << "What is (coorsponding to this order) X1 and X2?\n";
        cin >> x1;
        cin >> x2;
    cout << "What is (coorsponding again) Y1 and Y2?\n\n";
        cin >> y1;
        cin >> y2;
    xresult = (x2-x1)*(x2-x1); yresult = (y2-y1)*(y2-y1);
        distance = sqrt(xresult+yresult);
            cout << "The distance between these two points is "
                 << distance
                 << "units.\n\n\n\n Created by Sam Middlebrooks";
}
