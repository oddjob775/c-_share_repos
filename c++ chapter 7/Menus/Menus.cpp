/*
use switch statements to make a menu

request inputs for area
    for rectangle
        for cirlce
            for right triangle

request inputs for volume
    for cylinder
        for sphere

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::left;
using std::right;
using std::pow;
using std::endl;


int main()
{
    int
        main_menu_choice,
        area_menu_choice,
        volume_menu_choice;

    double
        rect_h,
        rect_w,
        circ_r,
        rtl_a,
        rtl_b,
        cyl_r,
        cyl_h,
        sph_r;

 /*   const double

        π = 3.141592653,
        rect_a = rect_h * rect_w,
        circ_a = π * pow(circ_r, 2),
        rt_a = (rtl_a * rtl_b) / 2,
        cyl_v = π * (pow(cyl_r, 2) * cyl_h),
        sph_v = (1.33333) * π * pow(sph_r, 3);

*/

    cout << setw(60) << right << "-----Main Menu-----\n\n\n" << setw(50);
    cout << setw(56) << right << "1) Calculate Area\n" << setw(60);
    cout << setw(60) << right << "2) Calculate Volume\n\n\n" << setw(60);
    cout << setw(64) << right << "What would you like to do?\n\n\n" << setw(60);
    cin >> main_menu_choice;

    switch (main_menu_choice)
    {
    case 1:
        cout << "1" << endl;
        break;

    case 2:
        cout << "2" << endl;
        break;

    default:
        cout << "Invalid Choice Given" << endl;
        break;
    }

    /*

    cout << "\n\nWhat would you like to find the area of?\t\n";
    cin >> area_menu_choice;

    */

    /*
    switch (area_menu_choice)
    {
    case 1:
        cout << "Rectangle" << endl;
        break;

    case 2:
        cout << "Circle" << endl;
        break;

    case 3:
        cout << "Right Triangle" << endl;
        break;

    default:
        cout << "Invalid Choice Given" << endl;
        break;

    }
    */

    /*

 cout << "\n\nWhat would you like to find the volume of?\t\n";
 cin >> volume_menu_choice;

 */

    /*
    switch (volume_menu_choice)
    {
    case 1:
        cout << "Cylinder" << endl;
        break;

    case 2:
        cout << "Sphere" << endl;
        break;

        default:
        cout << "Invalid Choice Given" << endl;
        break;

    }
    */
    cout << "\n";
}

