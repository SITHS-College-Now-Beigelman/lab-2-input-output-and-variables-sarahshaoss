//Sarah Shao
//Lab 2
//09/17/2024

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nameOfCereal;
    char calories;
    char ounces;

    char numOfCalories;

    cout << "Enter the name of the cereal:\n> ";
    cin >> nameOfCereal;
    cout << "Enter the number of calories per serving:\n> ";
    cin >> calories;
    cout << "Enter number of ounces per serving:\n> ";
    cin >> ounces;
    cout << "One serving of " << nameOfCereal << " is " << ounces << " ounces and has " << numOfCalories << " calories per ounce.";

    cout << "How many calories of cereal are you willing to eat today?\n> ";
    cin >> numOfCalories;

    cout << "The amount of " << nameOfCereal << " you can have is: " << (ounces * numOfCalories) / calories << " ounces";

    return 0;

}