
#include <iostream>
using namespace std;

int main()
{
    // Test Case 1
    int age = 18;
    int points = 450;
    if (age > 18)
    {
        cout << "Yes Age Is Ok\n";
    }
    else
        cout << "No Age Is Not Ok\n";

    if (points > 500)
        cout << "Yes Points Is Ok\n";
    else
        cout << "No Points Is Not Ok\n";
    // Output
    //    "No Age Is Not Ok"
    //    "No Points Is Not Ok"

    // Test Case 2
    age = 20;
    points = 450;
    if (age > 18)
    {
        cout << "Yes Age Is Ok\n";
    }
    else
        cout << "No Age Is Not Ok\n";

    if (points > 500)
        cout << "Yes Points Is Ok\n";
    else
        cout << "No Points Is Not Ok\n";
    // Output
    // "Yes Age Is Ok"
    // "No Points Is Not Ok"

    // Test Case 3
    age = 20;
    points = 650;
    if (age > 18)
    {
        cout << "Yes Age Is Ok\n";
    }
    else
        cout << "No Age Is Not Ok\n";

    if (points > 500)
        cout << "Yes Points Is Ok\n";
    else
        cout << "No Points Is Not Ok\n";
    // Output
    // "Yes Age Is Ok"
    // "Yes Points Is Ok"
    return 0;
}
