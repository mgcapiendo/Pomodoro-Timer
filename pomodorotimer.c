/*
Manuel Capiendo

Project #1 

Pomodoro Timer
- 3 Session Types
- 3 Interval Types
- Break Inbetween Intervals
- New Timer Or End Program

Started: 02/DEC/2023
Ended:   04/DEC/2023 

Approx: 15 Hours
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <windows.h>

int main() {

	greeting();
	sessionChoice(); 

	return 0;
}

void delay(int seconds)
{
	Sleep(seconds * 100);
}

greeting() {
	printf("\n\n Welcome");
	printf(" To");
	printf(" Your");
	printf(" Pomodoro");
	printf(" Timer\n");

	return 0;
}

sessionChoice() {

	printf("\n\n What Will You Do This Session\n");

	printf("-----------------------------------------\n");
	printf("\n (1) Quick");
	printf("    (2) Normal"); 
	printf("    (3) Extended\n\n");
	printf("-----------------------------------------"); 
	
	int option = 0; 

	printf("\n\nPlease Enter Your Choice Here: ");
	scanf("%d", &option); 
	
	if (option == 1)  
	{ 
		printf("\nQuick Session Details:\n");  
		printf("\nWe will be doing one session");  
		printf("\n\nLets Choose The Interval");  
		IntervalChoiceQuick(); 
	} 
	else if (option == 2)  
	{ 
		printf("\nNormal Session Details:\n"); 
		IntervalChoiceNormal();   
	} 
	else if (option == 3)  
	{
		printf("\nExtended Session Details:\n"); 
		IntervalChoiceExtended();   
	}
	else {
		printf("How"); 
	}
	
	return 0;
}

IntervalChoiceQuick() {
	int interval; 

	printf("\n\nWe recommend:\n(1) 25 Minutes \n(2) 45 Minutes \n(3) 60 Minutes\n\n"); 
	printf("Please Enter Your Choice Here: "); 

	scanf("%d", &interval); 

	if (interval == 1) 
	{
		QuickTwentyFive();
	}
	else if (interval == 2) 
	{
		QuickFourtyFive(); 
	}
	else if (interval == 3) 
	{
		QuickSixty(); 
	}
	else 
	{
		printf("how");
	}
	 
}
IntervalChoiceNormal() {
	int interval; 

	printf("\n\nWe recommend:\n(1) 25 Minutes \n(2) 45 Minutes \n(3) 60 Minutes\n\n"); 
	printf("Please Enter Your Choice Here: "); 

	scanf("%d", &interval); 

	if (interval == 1) 
	{
		NormalTwentyFive(); 
	}
	else if (interval == 2) 
	{
		NormalFourtyFive();  
	}
	else if (interval == 3) 
	{
		NormalSixty();  
	}
	else
	{
		printf("how"); 
	}
}
IntervalChoiceExtended() {
	int interval; 

	printf("\n\nWe recommend:\n(1) 25 Minutes \n(2) 45 Minutes \n(3) 60 Minutes\n\n"); 
	printf("Please Enter Your Choice Here: "); 

	scanf("%d", &interval); 

	if (interval == 1) 
	{
		ExtendedTwentyFive(); 
	}
	else if (interval == 2) 
	{
		ExtendedFourtyFive(); 
	}
	else if (interval == 3) 
	{
		ExtendedSixty(); 
	}
	else
	{
		printf("how"); 
	}
}

//Time Intervals 
TwentyFive() {
	printf("\n\n---------------------------------------");  
	printf("\nStarting Your Pomodoro Timer Now...\n"); 
	printf("---------------------------------------\n"); 

	printf("\n25 Minutes And 0 Seconds Remaining\n");

	int second = 59; 
	int minute = 24; 
	int count = 100; 
	 
	for (int i = 0; i < count; i++)
	{
		while (second >= 0 && minute >= 0) //help 
		{
			printf("\n%d Minutes And ", minute);
			printf("%d Seconds Remaining\n", second);
			delay(10); //delays 1 second //help  
			second = second - 1;
		}

		minute = minute - 1;
		second = 59;

		if (minute < 0)
		{
			break;
		}
	}
}
FourtyFive() {
	printf("\n\n---------------------------------------"); 
	printf("\nStarting Your Pomodoro Timer Now...\n");  
	printf("---------------------------------------\n"); 

	printf("\n45 Minutes And 0 Seconds Remaining\n"); 

	int second = 59; 
	int minute = 44; 
	int count = 100; 

	for (int i = 0; i < count; i++) 
	{
		while (second >= 0 && minute >= 0) //help  
		{
			printf("\n%d Minutes And ", minute); 
			printf("%d Seconds Remaining\n", second); 
			delay(10); //delays 1 second //help   
			second = second - 1; 
		}

		minute = minute - 1; 
		second = 59; 

		if (minute < 0) 
		{
			break;
		}
	}

}
Sixty() {
	printf("\n\n---------------------------------------"); 
	printf("\n\nStarting Your Pomodoro Timer Now...\n"); 
	printf("---------------------------------------\n");

	printf("\n60 Minutes And 0 Seconds Remaining\n");

	int second = 59; 
	int minute = 59; 
	int count = 100; 

	for (int i = 0; i < count; i++) 
	{
		while (second >= 0 && minute >= 0) //help  
		{
			printf("\n%d Minutes And ", minute); 
			printf("%d Seconds Remaining\n", second); 
			delay(10); //delays 1 second //help   
			second = second - 1; 
		}

		minute = minute - 1; 
		second = 59; 

		if (minute < 0) 
		{
			break;
		}
	}

}

//End Program or New Timer 
Controls() { 

	int decision;

	printf("\nWould you like to start another timer?");
	printf("\n(1) New Timer");
	printf("\n(2) Finished");

	printf("\n\nEnter Choice: ");

	scanf("%d", &decision);

	if (decision == 1)
	{
		sessionChoice();
	}
	else if (decision == 2)
	{
		Goodbye();
	}
	else
	{
		printf("\nInvalid Input, Try Again");
	}

	return 0;

}

//Quick Session 
QuickTwentyFive() {  
	TwentyFive(); 
	Controls(); 
}
QuickFourtyFive() {
	FourtyFive();
	Controls();
}
QuickSixty() {
	Sixty();
	Controls();
}

//Normal Session 
NormalTwentyFive() {

	//session1
	TwentyFive(); 

	//break
	Relax();

	//session2
	TwentyFive(); 

	//break
	Relax();

	//session3
	TwentyFive(); 

	//controls
	Controls();
}
NormalFourtyFive() {
	//session1
	FourtyFive();

	//break
	Relax();

	//session2
	FourtyFive();

	//break
	Relax();

	//session3
	FourtyFive(); 

	//controls
	Controls();
}
NormalSixty() {
	//session1
	Sixty();

	//break
	Relax(); 

	//session2
	Sixty(); 

	//break
	Relax();

	//session3
	Sixty();  

	//controls
	Controls();
}

//Extended Session 
ExtendedTwentyFive() {
//session 1
	TwentyFive();

//break
	Relax();

//session 2
	TwentyFive(); 

//break
	Relax();

//session 3
	TwentyFive();

//break
	Relax();

//session 4
	TwentyFive(); 

//break
	Relax();

//session 5
	TwentyFive();

//controls
	Controls();

}
ExtendedFourtyFive() {
	//session 1
	FourtyFive(); 

	//break
	Relax();
	
	//session 2
	FourtyFive(); 

	//break
	Relax(); 

	//session 3
	FourtyFive();

	//break
	Relax(); 

	//session 4
	FourtyFive();

	//break
	Relax(); 

	//session 5
	FourtyFive();

	//controls
	Controls();
}
ExtendedSixty() {
	//session 1
	Sixty();

	//break
	Relax(); 

	//session 2
	Sixty();

	//break
	Relax(); 

	//session 3
	Sixty(); 

	//break
	Relax();

	//session 4
	Sixty(); 

	//break
	Relax(); 

	//session 5
	Sixty(); 

	//controls
	Controls(); 
}

//Timer Rest
Relax() {
	printf("\n\n---------------------------------------"); 
	printf("\nStarting Your Break Timer Now...\n"); 
	printf("---------------------------------------\n");
	
	printf("\n5 Minutes And 0 Seconds Remaining\n"); 

	int second = 2; 
	int minute = 1; 
	int count = 100; 

	for (int i = 0; i < count; i++) 
	{
		while (second >= 0 && minute >= 0) //help 
		{
			printf("\n%d Minutes And ", minute); 
			printf("%d Seconds Remaining\n", second); 
			delay(10); //delays 1 second //help  
			second = second - 1; 
		}

		minute = minute - 1; 
		second = 2; 

		if (minute < 0) 
		{
			break;
		}
	}
}

//Goodbye
Goodbye() {
	printf("\n\n---------------------------------------");
	printf("\n\n               Goodbye");
	printf("\n\n---------------------------------------"); 
	printf("\n\n\nChok");

	return 0;
}

/*To-Do FUTURE When I learn more! :D
- Be able to have custom times for timer and break 
- Be able to have custom session amounts
- Be able to pause/play timer
- Be able to restart the timer instead of making a new timer
- Be able to show one single line of a clock counting down
- Be able to have an image that goes along with the clock count down
- Be able to play a sound
- Be able to store user infomration (time spent studying under certain user)*/