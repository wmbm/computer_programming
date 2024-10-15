#include <iostream>
#include <string>
using namespace std;

int main(){
    string user_name;

    // Ask the user for their name and return a welcome message
    cout << "What is your name? " << std::endl;
    cin >> user_name;
    cout << "Welcome " << user_name << "to Python programming!" << std:endl;
    
    return 0;
}