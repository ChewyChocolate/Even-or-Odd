#include <iostream>

using namespace std;

int main()
{

    int num;

    while (true){
    cout << "Enter a Number: " << endl;
    cin >> num;

    num = num % 2;

    if (num == 0){
        cout << "Even\n\n";
    }
    else{
    cout << "Odd\n\n";
    }
    }
    return 0;
}
