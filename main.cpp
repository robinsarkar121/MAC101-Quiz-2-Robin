#include <iostream>

using namespace std;

int main () {
    int n;
    //get an intiger variable
    cout<< "Please provide the value of N"<<endl;
    cin>>n;

    for (int i=1; i<=n; ++i) { //this is the for loop
        if (i % 3==0){ //The first if condition.This means if the number is divisible by 3 it will print Fizz
            cout<<"Fizz"<<endl;
        }
        else if (i%5==0) { //the second condition where if the number is divisible by 5 it will print Buzz
            cout<<"Buzz"<<endl;
        }
        else if(i%3==0 && i%5==0){ //the last condition where if the number is divisible by both it will print Fizzbuzz
            cout<<"FizzBuzz"<<endl;
        }
        else { //or if it is not divisible by both it will print the number
            cout<<i<<endl;
        }
    }
    return 0;
}
