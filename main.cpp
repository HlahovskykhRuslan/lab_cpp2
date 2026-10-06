#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // int 19
    cout << "Integer19" << endl;
    //змінна N
    int n = 0;
    // запит данних
    cout << "Enter time(Seconds): ";
    cin >> n ;
    // змінна де считаємо скільки повних хвилин пройшло
    int f = n / 60;
    // виводимо дані
    cout << "Whole minutes: " << f << endl;

    //bol 30
    cout << "Boolean30" << endl;
    // змінна a,b,c
    int a, b, c;
    // показ тексту про запит довжини трикутника у консоль
    cout << "Enter triangle sides a, b, c lenght: ";
    // запит данних
    cin >> a >> b >> c;
    // перевірка чи сторони трикутника рівні
    bool ts = ( ( a == b ) && ( b == c ) );
    // відпвовідь у консоль
    cout << boolalpha << "Triangle equilateral: " << ts << endl;


    //math 29
    cout << "Math29" << endl;
    // змінні
    float y;
    float x;
    // запит данних для Х
    cout << "Enter X: ";
    cin >> x;
    // рішення
    y = ( cbrt( abs(( pow( x, 3.0 ) / 4.0 ) - pow( sin( pow( x, 3.0 )), 2.0 ) * 2.0 )) * ( log( abs( x )) / log( 5.0 ))) / ( pow( 2.0 , x ) * sqrt( abs(( 3.0 * x ) + 2.5 * abs( tan( x )))));
    // вивід значення
    cout << "y = " << y << endl;

    return 0;
}
