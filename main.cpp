/* Temperature
 *
 * Description
 *
 * Program asks the user to enter a temperature and then converts it from
 * Celsius to Farenheit and from Farenheit to Celsius.
 *
 * Writer of the program
 *
 * Name: EILeh
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a temperature: ";

    int temperature = 0;

    cin >> temperature;

    cout << temperature << " degrees Celsius is " << temperature * 1.8 + 32
         << " degrees Fahrenheit" << endl;

    cout << temperature << " degrees Fahrenheit is " << (temperature - 32) / 1.8
         << " degrees Celsius" << endl;

    return 0;
}
