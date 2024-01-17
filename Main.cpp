#include <iostream>
#include <array>
#include <string>
using namespace std;

int numbers[] = {1,2,3,4,5};
bool found = false;
int number;
string output;`
int main()
{
    cout << "Hello Oscar!";
    cout << "\nEnter A Number: ";
    cin >> number;
    cout << "Number is: " << number;
    for(auto i: numbers)
    {
        if(number == numbers[i])
        {
            found = true;
        }
    }
    if(found == true)
    {
        cout << "\n"+to_string(number)+" Was Found!";
    }
    else
    {
        cout << "\n"+to_string(number)+" Was Not Found!";
    }
    return 0;
}
