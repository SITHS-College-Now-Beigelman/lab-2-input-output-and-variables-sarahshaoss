//Sarah Shao
//Lab 2
//09/17/2024

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //defines all the variables into string or double (in order to use math)
    string nameOfCereal;
    double calories;
    double ounces;
    double numOfCalories;

    // Uses user input to give the variables a number or string
    cout << "Enter the name of the cereal:\n> ";
    cin >> nameOfCereal;
    cout << "Enter the number of calories per serving:\n> ";
    cin >> calories;
    cout << "Enter number of ounces per serving:\n> ";
    cin >> ounces;
    cout << "One serving of " << nameOfCereal << " is " << ounces << " ounces and has " << calories << " calories per ounce.\n";

    // Part 2: asking how many calories the user wants to eat and putting it in the variable
    cout << "How many calories of cereal are you willing to eat today?\n> ";
    cin >> numOfCalories;

    // Calculates the amount of ounces the use eats to be under the amount of calories the user doesn't want to go over
    cout << "The amount of " << nameOfCereal << " you can have is: " << (ounces * numOfCalories) / calories << " ounces";
    /* Uses proportions to find the number of ounces
        Num of calories          Calories not to go under
        ----------------  =    --------------------------------
            ounces               ounces (what we are finding) */

    return 0;


    /*Enter the name of the cereal:
    > sarah
    Enter the number of calories per serving:
    > 169
    Enter number of ounces per serving:
    > 20
    One serving of sarah is 20 ounces and has 169 calories per ounce.
    How many calories of cereal are you willing to eat today?
    > 200
    The amount of sarah you can have is: 23.6686 ounces*/
}