/*
Seconds Translator
Goal: Translate the seconds to minutes, hours, or days [ FINISHED ].
Improvision: Instead of letting the numbers to be a double, make it become like
1 minute 35 seconds.

// Puesdo-code
Define variables; // could make the variables as int instead
Asks for user's input for seconds;

min = sec / 60;
hour = sec / 3600;
day = sec / 86400;

if ( sec > 60 && sec < 3600 )
cout << min << " minutes and" << min % 60; 

Example 
if 90615 was inputted, it would display
1 day and 1 hour and 10 minutes and 15 seconds.
// 90615 = 86400(1 day) + 3600(1 hour) + 600(10 min) + 15(15 sec)

if 3664 was inputted, it would display
1 hour and 1 minute and 4 seconds.
// 3600 + 60 + 4
3600 = 1 hour, 60 = 1 minute, 4 = 4 seconds

3664 & 3600 = 64 ; 64 / 60 = 1 == min / minSec
64 % 60 = 4 

// assuming 
hour is find through hour = sec / 3600
remainder would mean the extra seconds in that number of hours.














































*/