// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer : ";
    cin >> a;
    cout << "Integer = " << a << " And the size is : "<< sizeof(a) <<"bytes"<<endl ;
    
    float b;
    cout<<"Enter any decimal number : ";
    cin >> b;
    cout << "Decimal = " << b << " And the size is : "<< sizeof(b) <<"bytes"<<endl ;
    
    string c;
    cout<<"Enter any String : ";
    cin >> c;
    cout << "String = " << c << " And the size is : "<< sizeof(c) <<"bytes"<<endl ;
    
    double d;
    cout << "Enter any double : ";
    cin >> d;
    cout << "Double = " << d << " And the size is : " << sizeof(d) << "bytes" << endl;
    
    char e;
    cout << "Enter any character : ";
    cin >> e;
    cout << "Char =  " << e << " And the size is : " << sizeof(e) << "bytes" << endl;
    
    bool f;
    cout << "Enter boolean : ";
    cin >> f;
    cout << "Bolean = " << f << " And the size is : " << sizeof(f) <<" bytes "<< endl;
    
    return 0;
}

/*
Enter any integer : 123
Integer = 123 And the size is : 4bytes
Enter any decimal number : 123.33
Decimal = 123.33 And the size is : 4bytes
Enter any String : hello!
String = hello! And the size is : 32bytes
Enter any double : 25.776
Double = 25.776 And the size is : 8bytes
Enter any character : H
Char =  H And the size is : 1bytes
Enter boolean : 0
Bolean = 0 And the size is : 1 bytes 

=== Code Execution Successful ===
*/
