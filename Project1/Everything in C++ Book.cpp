#include <iostream>
#include <string> // must be included to use string
#include<iomanip>
#include<cstdlib> // must be included for rand, srand
#include<ctime> // must be included for time funtions
using namespace std;
int main()
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////               CHAPTER 3                   ////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	// return max value from array
	/*int maxValue = 0;
	int Array[4] = { 1,24,10,142213 };
	for (int i = 0; i <= 4; i++)
	{
		if (Array[i] > maxValue)
			maxValue = Array[i];
	}
	std::cout << maxValue;
	return 0;
	*/
	
	/*std::string myName = " Huy Vo";
	float DollarPrice;
	bool boolValue;
	
	boolValue = true;

	std::cout << "My name is" << myName << ".";
	DollarPrice = 7.25;
	std::cout << "\nThe minimum wage is: " << DollarPrice << " \n";
	std::cout << boolValue << std::endl;
	boolValue = false;
	std::cout << boolValue ;
	
	*/
	
	/* type casting example
	double number = 3.9;
	int val;
	val = static_cast<int>(number);
	std::cout << val; // so basically it swaps the value type of val to int from double, so the result of 
	*/
	
	//double value = 23.69012;
	//std::cout << std::setprecision(2) << std::fixed << value; // set the precise location of significant digits, and rounding ( i guess ). 
															  //Adding std::fixed seems to put the precisor right after the dot
															 //Adding std::showpoint put extra 0 after the dotcout << "This program has paused. Press Enter to continue."; 
	
	/*char ch; // char can also be initialized as ch[size] and the size is the lenght of that char.
	std::cin.get(ch); // each cin.get() pause the console
	std::cout << "It has paused a second time. Please press Enter again.";
	 ch = std::cin.get();
	std::cout << "It has paused a third time . Please press Enter again.";
	std::cin.get();
	std::cout << "Thank you!";
	*/
	// using std::cin.ignore(n,c) helps for scenario where the cin and cin.get fucks up. n is for the #20 of characters to skip, c is for the specific character to skip
	//string yo = " Texas"; // a way to define a string variable, it can also utilizes yo.length() to find length
	// string can also be combined by using + 
	
	
	/* integer randomizer
	int y = rand(); // initialize y as random integer variable, but will produce the SAME value everytime run on the same system, UNLESS below
	std::cout << y << std::endl;
	unsigned seed = time(0); // initialize seed for the upcoming srand, which actually will randomize the seed for the rand() function.
	srand(seed);// this will actually randomize the int x 
	int x = rand(); // x is now randomized for each run 
	std::cout << x << std::endl;
	//using the below to limit the range of the randomizer
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;
	int z = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	std::cout << z;
	*/
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////               CHAPTER 4               /////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	/* Relational Operators 
	< less than
	> bigger than
	>= bigger than or equal to
	<= smaller than or equal to
	!= not equal to
	== equal to
	if a boolean is true, it's value is set to 1.
	if a boolean is false, it's value is set to 0.
	*/
	
	/* If statement, here's where part of the fun begins
	
	if(expression) <-- Basically how an if statement's format looks like.
		statement;
	
	if(average > HIGH_SCORE)
		cout << " Congrats! You've gotten an A! ";
	
	if(x+y)
		cout << "It is true!"; // for this case, if the value of x + y != 0, it will automatically runs the cout statement. As long as the value is not a zero.
	
	if(expression)
	{ 
	  statement;
	  statement;
	  //Place as many as you want.
	}
	// DO NOT FORGET THE BRACES, AS IT WILL ONLY EXECUTES THE ONE UNDERNEATH THE IF 
	*/

	/* if-else statement
	
	if (expression ) <-- If-else format.
		statement;
	else
		statement; 
	
	if(x < 2)
		cout << " x is larger than 2";
	else
		cout << " x is smaller than 2";
	*/
	
	/*	Nested If statements
	
	if(expression)         <-- Generally the Nested If loop format
	{
		if(expression)
			statement;
	}
	
	// The way it works is that if the first if is false, it skips the entire loop. But if it's true, it runs the If Statement inside of the first If Statement.
	// It could also be combined with If else in a Nested If Statement.

	if( x <= 10 )
	{
		if( x == 5 )
		{
			cout << " x is 5.";
		}
		else
		{
			cout << " x isn't 5 but is smaller than 10." ;
		}
	}
	else
	{
		cout << " x is bigger than 10.";
	}
	// if x is smaller or equal to 10, next it checks if x is 5, if true returns first statement, if x isnt 5, returns the else statement inside.
	// if x is bigger than 10, skips the nested if, returns the else statement outside.
		
		
		
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	if (number > 0)
	{
		cout << "Zero\n";                 // An If inside of an If inside of an If, TRIPLE NESTED IF
		if (number > 10)				  // So with each Ifs, it executes the statement it has if the number value is true to the expression of each Ifs
		{
			cout << "Ten\n";
			if (number > 20)
			{
				cout << "Twenty\n";
			}
		}
	}
	*/

	/* If/Else If Statement
	if(expression_1)
	{
		statement;
		statement;
	}
	else if(expression_2)                     <------- General Format for If Else If Statement
	{
		statement;
		statement;
	}
	else
	{
		statement;
		statement;
	}
	
	
	*/
	
	/* Flags
	Flag is a Boolean or integer variable that signals when a condition exists
		 
	 
	 
	*/
return 0;
}
