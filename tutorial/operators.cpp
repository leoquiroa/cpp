using namespace std;
#include <iostream>

int main() {
    //Arithmetic
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    /*
    +	    Addition	        Adds together two values	x + y	
    -	    Subtraction	        Subtracts one value from another	x - y	
    *	    Multiplication	    Multiplies two values	x * y	
    /	    Division	        Divides one value by another	x / y	
    %	    Modulus	            Returns the division remainder	x % y	
    ++	    Increment	        Increases the value of a variable by 1	++x	
    --	    Decrement	        Decreases the value of a variable by 1	--x
    */
    int x = 11;
    int y = 9;
    cout << "mod operation " << x % y << endl;

    //Bit Operator
    // a = 5(00000101), 
    // b = 9(00001001)
    int a = 5, b = 9;
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    // The result is 00000001 AND
    cout << "a & b = " << (a & b) << endl;
    // The result is 00001101 OR
    cout << "a | b = " << (a | b) << endl;
    // The result is 00001100 XOR
    cout << "a ^ b = " << (a ^ b) << endl;
    // The result is 11111010 NOT
    cout << "~a = " << (~a) << endl;
    // The result is 00010010 LEFT SHIFT
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    // The result is 00000100 RIGHT SHIFT
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
    
    //Comparison

    /*
    ==	Equal to	                x == y	
    !=	Not equal	                x != y	
    >	Greater than	            x > y	
    <	Less than	                x < y	
    >=	Greater than or equal to	x >= y	
    <=	Less than or equal to	    x <= y
    */

    //Logical

    /*
    && 	    x < 5 &&  x < 10	
    || 		x < 5 || x < 4	
    !		!(x < 5 && x < 10)
    */

    //String
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;

    string myString = "Hello";
    cout << myString[0] << endl;
    cout << myString[4] << endl;
    myString[0] = 'J';
    cout << myString << endl;

}