/* Name: Madeline Whitton
Date: Feb 15th 2022
Section: 11
Assignment: 6
Due Date: Feb 20th 2022
About this project: plays with numbers and declares functions outside of the main function
Assumptions: N/A
All work below was performed by Madeline Whitton */


#include <iostream>
using namespace std;

void GetValidUserInputPosNumGT0(long int &num){
    //I can't figure out how to use this one, my compiler always complains
    //when I attempt to incorporate it.
        cout << "Please enter a value greater than 0\n";
        cin >> num;
}

long int SumOfDivisors(long int num){
    //this function calculates the sum of divisors
    int sum = 0;
    //there is a sum integer that is automatically set to 0
    for(int i = 1; i < num; i++){
        //i is the counter that counts up to the integer less than the number
        if(num % i == 0){
            //if the number divided by i has no remainders,
            sum =+ i;
            //add i to sum.
        }
    }
}

bool IsPrime(long int num){
    for(int i = 2; i < num; i++){
        //i is the counter and will count up to the number inputed
    if (num % i == 0){
        //if the number divided by i has no remainders
        return 0; // then the statement is false and the function will
        //return 0.
        }
    }
    return 1;
    //once the prime number has been validated, and the statement is true, then
    //return 1.
}

void DisplayCousinPrimes(long int num){
    cout << "(" << num << ", " << (num + 4) << ")\n";
    //this is the function that will display Cousin Prime numbers in the
    //style of: (a, b); if the function is prime.
}

bool IsPerfect(long int num){
    //a true false statement to calculate if the number is perfect
    if (SumOfDivisors(num) == num){
        //this is saying (using the sum of divisors function
        //which was created earlier.  If the sum of divisors
        //of the number is equal to the number, then the statement
        //is true and to return 1.
        return 1;
    }
    return 0; //if the statement is false then return 0.

    //I am facing some issues with this function.  I can't quite figure out why
    //it may be an issue with the SumOfDivisors function or the IsPerfect function
}

int main(){
    int primepairs; // this will be the integer that is used to evaluate cousin primes
    int perfectnum; // this integer will be used to see if the number is perfect
    int option = 0; //the option input is set to 0 so that the while statement underneath
    //the title statement will show up

    cout << "Welcome to the playing with numbers program!\n"; // welcome statement

    while(option > 3 || option < 1){
        //when the option is greater than 3 or less than 1, this statement will
        //show up.  (That's why option is set to 0 in the beginning)
        cout << "1) Compute all the cousin prime pairs less than a number\n";
        cout << "2) Compute if a number is a perfect number\n";
        cout << "3) Quit\n";
        cout << "Select an option (1..3)..";
        cin >> option;
    }

        if (option == 1) {
            //if the first option is chosen, this will come up.
            cout << "enter in a positive number greater than 0\n";
            cin >> primepairs; //the primepairs integer that is being evaluated.
            for (int counter = 2; counter <= primepairs; counter++) {
                //the counter integer will be what counts the number of primepairs
                if ((IsPrime(counter) == 1) && (IsPrime(counter + 4) == 1)){
                    //this is calling back to the is prime function.  It's saying if IsPrime is true
                    // and IsPrime + 4 is true...
                    DisplayCousinPrimes(counter);
                    //then display cousin primes, calling back to the cousin primes function.
                    //(there are no problems with this function so you don't need to correct anything on this.
                }
            }
        }

        if (option == 2) {
            //if they choose option 2, this statement will come out
            cout << "enter in a positive number greater than 0\n";
            cin >> perfectnum; //the number that's being evaluated for if its
            //perfect or not
            if (IsPerfect(perfectnum) == 1){
                //this is saying, if the function IsPerfect for the number entered
                //is true, then print "integer is perfect"
                cout << perfectnum << " is perfect\n";
            }
            else {
                //if that isn't true and the function returns 0, cout
                //that the number is not perfect.
                cout << perfectnum << " is not perfect\n";
            }
        }


        /*Issues that I am experiencing with this code:
         * 1. The void "GetValidUserInputGT0" is supposed to be used to print a statement to the screen
         * if the number entered is below 0.  (for the prime pairs and perfect numbers functions 1 & 2)
         * However, I am having difficulty understanding the point of &num and also how to attach that statement
         * to the screen.  The compiler complains frequently
         * 2. The IsPerfect function always says that the number is not perfect.  This could either be an issue
         * with the previous function "SumOfDivisors" or the IsPerfect function.
         * 3. The list is supposed to continuously loop until you enter 3 to quit, but I can't figure out
         * how to make the option set back to 0 to bring the list back again to allow the
         * user to select a new option.
         */


    return 0;
}