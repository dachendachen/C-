/*
 C++ primer exercise
 Chen Da
 */
#include <iostream>

int main(){
 
    /*section 1.2 demo
    std::cout << "Enter two numbers: " << std::endl;
    int v1=0, v2 =0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of "<< v1 <<" and "<< v2 <<" is "<< v1+v2 << std::endl;
     */
    
    /*exercise 1.3 print hello world
    std::cout << "Hello World!"<< std::endl;
    */
    
    /*1.4 try *, multiplication
    std::cout << "the product is " << v1*v2<< std::endl;
    */
    
    /*1.5 rewrite line 13 into separate statement to print each operand
    std::cout << "the sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1+v2;
    std::cout << std::endl;
    */
    
    /*1.6 determine whether the following program fragment is legal
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 +v2 << std::endl;
    
    ILLEAGL. lost part of operands, left operand must be an ostream object
     Compiler Error
     */
    
    //section 1.4 flow of control
    
    /*1.4.1 the  while statement, Demo
    int sum = 0, val= 1;
    while(val<=10)
    {
        sum+= val;
        ++val;
    }
    std:: cout<< "Sum of 1 to 10 inclusive is " << sum << std::endl;
    */
    
    /* exercise 1.9 while loop to sum numbers from 50 to 100
     int sum_9 = 0, val_9 = 50;
     while(val_9 <=100)
     {
         sum_9 += val_9;
         ++val_9;
     }
     std::cout<<"Sum of 50 to 100 inclusive is " << sum_9 << std::endl;
     //Sum of 50 to 100 inclusive is 3825
     */

    /* 1.10 prints the bumbers from ten down to zero, using decrement, --
    int start = 10;
    while(start>=0)
    {
        std::cout << start << std::endl;
        --start;
    }
    */
    

    /* 1.11 prompts the users for two integers. print each number in tha range specified by those two integers. assuming the first number always be smaller.

    int input1=0, input2=0;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> input1 >> input2;
    while(input1 <= input2){
        std::cout<< input1 << std::endl;
        ++input1;
    }
      */
    
    /* 1.4.2 the for statement
     
    int sum =0;
    for(int val=1;val<=10; ++val)
        sum+=val;
    std::cout <<"Sum of 1 to 10 inclusive is " << sum <<std::endl;
    */
    
    /* exercise 1.13 rewrite 1.9 and 1.10 using for loop
     1.
     int sum= 0;
     for(int val=50; val<=100; ++val)
        sum+=val;
     std::cout<< sum << std::endl;
     
     2.
     for(int val=10;val<=0;--val)
        std::cout << val << std::endl;
     
     */
    
    /* 1.4.3 reading an unknown number of inputs (control-d to indicate the end of file)
    
    int sum = 0, value = 0;
    while(std::cin >> value)//read until end of file (input stream)
        sum+=value;
    std::cout << "sum is: " << sum << std::endl;
     
     */
    
    /* 1.16 write your own version of a program that prints the sum of a set of integers read from cin.
     
     int sum=0, value = 0;
     std::cout << "Enter numbers and -1 indicates the end" << std::endl;
     while(std::cin>>value && value != -1)
        sum+=value;
    std::cout << sum << std::endl;
     */
    
    /*1.4.4 the if statement, demo
    
    int current = 0, val= 0;
    if(std::cin >> current){
        int cnt = 1;
        while(std::cin >> val){
            if(val == current)
                ++cnt;
            else{
                std::cout << current << " occurs " << cnt <<" times"<< std::endl;
                current = val;
                cnt =1;
            }
        }
        std::cout << current << " occurs " << cnt << " times" << std::endl;
    }
     */
    
    /* 1.5 Classes, a class defines a type along with a collection of operations that are related to that type.
     see notes after the main function
     */
    return 0;

}



/*
 std, standard, cout = c out
 namespace
 std::
 expalins where the function cout comes from
 cout: object, console output object
 
 alternative: using directive
 #include <iostream>
 using namespace std;
 int main{
    cout<<"hello world\n";
 }
 
//using declaration
 #include <iostream>
 using std::cout;
 
 int main(){
    cout<<"Hello world\n";
 }
 
 */


/* Classes
 use headers to access classes defined for our own applications.
 Bookstore Demo, Sales_item class defines a type named Sales_item.
 Sales_item item; //item is an object of type Sales_item.
 
 */
