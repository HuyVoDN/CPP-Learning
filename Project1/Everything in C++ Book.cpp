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
	/////////////////////////////////////////////////////               CHAPTER 4 MAKING DECISIONS              ////////////////////////////////////
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
	//Flag is a Boolean or integer variable that signals when a condition exists
	
	bool Something = false;        <--- It sets the condition of the Something boolean to false, it can be used as a flag to indicate something for your program
									    like a sales quota.
	bool Something = 0;            <--- 0 means false, 1 means true, functions the same as above.
	 
	*/

	/* Logical Operators
	&& - AND        // Both expressions must be true for the entire thing to be true
	|| - OR         // Either one must be true for the whole thing to be true, or both
	!  - NOT        // Reverse the original "truth" condition of the boolean, or variable
	
	if ( x < 10 && x == 2 )
		cout << " x is 2.";  <-- If x is SMALLER THAN 10 AND x is EQUAL TO 2, then print the statement
	
	if ( x < 10 || x == 2)
		cout << " x could or couldn't be 2."; <--- If x is SMALLER THAN 10 OR x is EQUAL TO 2, then print statement. //This is a very vague If statement, avoid it.
																												// x could be 9, and it isn't 2, yet the statement still executes
																												// because it isn't wrong.
	if ( x != 2)
		cout << " x isn't 2."; <-- If x is NOT 2, then print statement. // Well duh, no shit
	*/

	/* Validating User Input
	Any program should be written to filter out bad input.
	By using an if else nested loop
	if (expression)
	{
		if(expression)
		else if(expression)
			statement;
			etc...
	}
	else
		statement; // this is for any invalid input the user might put in.
	
	*/
	/* Comparing Characters and Strings
	Character				ASCII Value
	0 - 9					48 - 57
	A - Z					65 - 90
	a - z					97 - 122
	Blank/Space				32
	Period					46
	
	so when 2 characters are being compared, the computer actually compares the ASCII Value as they are stored as integers in memory.

	Strings are the same, the ASCII value are again, be compared. It is actually the ASCII values of the character making up the strings.
	They actually compare the value of each character one by one.
	String str1 = "ABC";
	String str2 = "XYZ"; // str2 > str1 since the ASCII value of str2 > ASCII value of str1.
	*/
	
	/* The Conditional Operator
	?  -  Executes the statement if the first expression is true.
	:  -  Executes the statement if the first expression is false.
	
	(x < 0) ? (y = 10) : (z = 20);  // If the first expression is true, executes y = 10.
								    // If the first expression is false, executes z = 20.
	
	a = x > 100 ? 0 : 1; // if x > 100 is TRUE, executes a = 0, if x > 100 is FALSE, executes a = 1;
	The statement above is similar to this if else statement
	if (x > 100)
		a = 0;
	else
		a = 1;
	*/
	
	/* The Switch Statement
	switch ( IntegerExpression )                              
	{
		case ConstantExpression:
			statement or more statements;
			break;
		case ConstantExpression:
			statement or more statements;						<----- Switch Statement format
			break;
		//repeat as much as you need
		
		default:
			statement or more statements;
			break;

			
	}
	//this is very useful to create a menu
	// ConstantExpression must be an integer literal or a constant.
	
	Example is as follow:

	char choice;
	cin >> choice;
	switch(choice)
	{
		case 'A': 
			cout << "You've entered A.\n";
			break;
		case 'B':
			cout << "You've entered B.\n";
			break;
		default:
			cout << "You did not enter neither.\n";
	}
	*/

	/* The scope of a variable is LIMITED to the BLOCK IN WHICH IT IS DEFINED.
	//Common practice to define a function's variables at the top of the function itself, to avoid confusion, both to the dev and the computer.
	For example

	int main()
	{	
		int Income = 10;
		int salary;					<--- these variables here, exists within the main() statement, thus it can be used by anything inside of the int main() as well.
		cin >> salary;
		
		if ( salary < Income )
		{
			int years;                 <----- The int years variable only exists within this if statement, marking the scope of it to be inside this if statement only
			cin >> years;
		}
	}

	// variables of the same names can also exists inside the same function, as long as the duplicated one stays within another scope
	int main()
	{
		int Income = 10;
		int salary;					
		cin >> salary;

		if ( salary < Income )
		{
			int Income;                 <----- The int Income here as the same name as the first one, however, it is a COMPLETELY different variable stored only inside the If statement
			cin >> Income;
		}
	}

	
	*/
	
	
	//============================================================================================
	//====================== Chapter 4 PROGRAMMING CHALLENGES ====================================
	//============================================================================================
	// Name: Time Calculator.
	// Problem Number: Page 223, Problem #7.
	// Programmer: Huy Vo.
	// Purpose: Convert the user's input seconds into minutes, hours, days
	// Improvision: Instead of just doing simple calculation like 100 seconds / 60 = 1.667 minutes, It would be alot better if it was displayed as 1 minute and 40 seconds.
	// Status : [FINISHED]
	/*static int minSec = 60, hourSec = 3600, daySec = 86400;
	int seconds, 
		extraSecInMin, extraMinInHour, minutes,
		extraSecInHour, extraHourInDay, hours,
		extraSecInDay, days; 
	cin >> seconds;

	minutes = seconds / minSec;
	extraSecInMin = seconds % minSec;
	extraMinInHour = seconds % hourSec / minSec;
	
	hours = seconds / hourSec;
	extraSecInHour = seconds % hourSec;
	extraHourInDay = seconds % daySec / hourSec;
	
	days = seconds / daySec;
	extraSecInDay = seconds % daySec;

	if (seconds >= minSec && seconds < hourSec) // easiest, just needs amount of total sec / 60, and remainder of that is the extra seconds.
	{
		cout << minutes << " Minute(s) and " << extraSecInMin << " Second(s)";
	}
	else if (seconds >= hourSec && seconds < daySec) // what the fucking fuck is this?
	{
		if ( seconds % hourSec > 60) // for the amount of remainder of that given seconds divide by 3600 is bigger than 60, like 3661 for example
									 // as it would be 3661 = 3600(1 hour) + 60(1 minute) + 1(1 sec). So 3661 % 3600 = 61, which 61 > 60.
			cout << hours << " Hour(s) and " <<  extraMinInHour << " Minute(s) and " << extraSecInMin << " Second(s)";
		else // this else is for the case that the Extra Seconds in that given Hour(s) does not exceed 60.
			cout << hours << " Hour(s) and " << extraSecInHour << " second(s)";
	
	
	}
	else if (seconds >= daySec) // holy grail of fucked 
	{
		//if statement for remaining sec > 3600
		if (seconds % daySec > 3600) //for remainder of seconds of a day exceeds 3600, which is an hour of seconds
		{
			if (extraMinInHour >= 1 && extraSecInMin >= 1) // same statement but with 1 or more extra minute(s) AND second(s), by utilizing the method of taking that remainder
														   // mod by 3600 and divide by 60, giving us the Extra Minute(s). As for, seconds, we use the value inputted by user
														   // mod that by 60, so if the remainder of seconds % 60  . 
				
				//using extraSecInMin as well as extraMinInHour is better because it takes the remainder amount 
				//of the seconds in the amount of Extra Minutes in the calculated Extra Hours, calculated by the program, check variables upstair for reference
				//instead of using extraSecInDay because it will gives the 
				//total remainder of Day % 86400 instead.
				cout << days << " Day(s) and " << extraHourInDay << " Hour(s) and " << extraMinInHour << " Minute(s) and " << extraSecInMin << " Second(s)";
			
			else if (extraMinInHour < 1 && extraSecInMin >= 1) // less than 1 extra minute but more than 1 extra seconds.
				//same things are applied here
				cout << days << " Day(s) and " << extraHourInDay << " Hour(s) and " << extraSecInMin << " Second(s)";
			
			else if (extraMinInHour >= 1 && extraSecInMin < 1) //more than 1 extra minute but less than 1 extra second
				cout << days << " Day(s) and " << extraHourInDay << " Hour(s) and " << extraMinInHour << " Minute(s)";
			
			else if (extraSecInMin < 1) // less than 1 extra second and minute.
				cout << days << " Day(s) and " << extraHourInDay << " Hour(s)";
		}
		//else if()//if statement for remaining sec > 60
		else
			cout << days << " Day(s)";
	}
	


	//Name: Wi-Fi Diagnostic Tree
	//Where: Page 228-229, Problem #27
	//Goal: Using a flowchart and create a program to help a dumbass fix his wifi.
	//Status: [ FINISHED ]
	//Thoughts: This is an If-Else Inception.
	
	string answer;
	cout << "Reboot the computer and try to connect.\n" << "Did that fix the problem?" << endl;
	cin >> answer;
	if (answer == "yes")
		exit(0);
	else 
	{
		cout << "Reboot the router and try to connect.\n" << "Did that fix the problem?" << endl;
		cin >> answer;
		
		if (answer == "yes")
			exit(0);
		else 
		{
			cout << "Make sure the cables between the router and modem are plugged in firmly.\n" << "Did that fix the problem?" << endl;
			cin >> answer;
			
			if (answer == "yes")
				exit(0);
			else
			{
				cout << "Move the router to a new location and try to connect.\n" << "Did that fix the problem?" << endl;
				cin >> answer;

				if (answer == "yes")
				{
					cout << "you stupid fuck.";
					exit(0);
					
				}
				else
					cout << "just fucking smash it and buy a new one you brokie :) \n\n\n ";
			}
		}
	}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////               CHAPTER 5 LOOPS AND FILES              ///////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////
////////////   5.1) The Increment and Decrement Operators   ///////////
///////////////////////////////////////////////////////////////////////
/*
      ++ //increasing by one.
	  -- //decreasing by one.
	 // Postfix
	  num++; //num variable is being increment/added by 1.
	  num--; //num variable is being decreased by 1.
	  
	  // Prefix
	  ++num; //num variable is being increment/added by 1.
	  --numl //num variable is being decreased by 1.
	 
	 // Main difference between pre and post
	  num++; //will increment the value after it has been used in an expression
	  ++num; //will increment the value before it might be used in an expression

	  //Comparison between pre or post
	  int num = 4;
	  cout << num; // Displays 4 | num = 4
	  cout << num++; //Displays 4, then adds 1 to it | num = 5
	  cout << num; //Displays 5 | num = 5
	  cout >> ++num; //adds 1 to num, then displays 6 | num =6;
	  cout >> num; //Displays 6 | num = 6
*/
///////////////////////////////////////////////////////////////////////
////////////			5.2) The While Loop          //////////////////
///////////////////////////////////////////////////////////////////////
/*



*/



return 0;
}
