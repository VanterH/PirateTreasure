#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    ifstream in("C:\\Users\\vante\\source\\repos\\PirateTreasure\\PirateTreasure\\input.txt"); // Поменять путь к файлу !!!

    string s;

    getline(in, s);

    const double pi = 3.1415;
    double x1 = 0, y1 = 0;
    int a, b;

    while (in >> a >> b)
    {
        switch (a)
        {
        case 1:
            y1 += b;
            break;
        case 2:
            x1 = b * cos(pi / 4);
            y1 = b * sin(pi / 4);
            break;
        case 3:
            x1 += b;
            break;
        case 4:
            x1 += b * cos(pi / 4);
            y1 += b * (- sin(pi / 4));
            break;
        case 5:
            y1 -= b;
            break;
        case 6:
            x1 += b * (-cos(pi / 4));
            y1 += b * (-sin(pi / 4));
            break;
        case 7:
            x1 -= b;
            break;
        case 8:
            x1 += b * (-cos(pi / 4));
            y1 += b * sin(pi / 4);
            break;     
        }
    }

    in.close();

    x1 = round((x1 * 1000)) / 1000;
    y1 = round((y1 * 1000)) / 1000;

    ofstream out("C:\\Users\\vante\\source\\repos\\PirateTreasure\\PirateTreasure\\output.txt"); // Поменять путь к файлу !!!
    out << x1 << " " << y1 << endl;
    cout << x1 << " " << y1 << endl;
    out.close();

}
