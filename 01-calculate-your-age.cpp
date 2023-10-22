#include <iostream>
using namespace std;

int main()
{
    int born_year, current_year;

    cout << "#############################\n";    
    cout << "#### Calculate your age #####\n";    
    cout << "#############################\n";

    cout << "Enter born year: ";
    cin >> born_year;
    cout << "Enter the current year: ";
    cin >> current_year;
    
    int age_in_years = current_year - born_year;
    int age_in_days = age_in_years * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60;

    cout << "\nYou have "; cout << age_in_years; cout << " Year\n";
    cout << "and "; cout << age_in_days; cout << " day\n";
    cout << "and "; cout << age_in_hours; cout << " hour\n";
    cout << "and "; cout << age_in_minutes; cout << " minute\n";
    cout << "and "; cout << age_in_seconds; cout << " second";
    return 0;
}