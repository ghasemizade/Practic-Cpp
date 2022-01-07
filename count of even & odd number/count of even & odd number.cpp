#include <iostream>
using namespace std;
// Hosein ghasemizade

int main() {
{
    int num ,even = 0 ,odd = 0 ;
    while (true)
    {
        cout << "enter number ( -1 to end ) : " ;
        cin >> num ;
        if ( num == -1 )
            break ;
        if ( num % 2 == 0 )
            ++even ;
        else
            ++odd ;
    }
    cout << "even : "<< even << endl << "odd : " << odd << endl ;
}
return 0;
}

