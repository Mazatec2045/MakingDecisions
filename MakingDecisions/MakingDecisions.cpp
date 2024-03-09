
#include <iostream>
#include <string>

using namespace std; 


int main()
{
    //min/maz program using super short if statement 
    
    int num1, num2; // to hold our numbers for comparison 

    // get first number 
    cout << "Enter the 1st number: "; 
    cin >> num1; 

    // get second number 
    cout << "Enter the 2nd number: "; 
    cin >> num2; 

    // determine which number is smaller and which is larger 
    cout << num1 << " is " << (num1 > num2 ? "larger than " : "smaller than ") << num2 << endl; 

    return 0; 

}

