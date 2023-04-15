#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "bday.c" //Calling the .c files to use the respective functions in it
#include "classlink.c"
#include "schedule.c"
#include "contact.c"
#include "elibrary.c"
int usercheck(int id); //This functions check the student ID is of admin or not
void timeprint(); //This functions prints Time
void menuprint(); // This function prints menu
int endj() //This function prints the end message in a message box
{
    MessageBox(0, "Thanks for using SMS (STUDENT MANAGEMENT SYSTEM) ", "Good Bye", 1);
    return 0;
}
void main()
{
    int sid, option;
    system("cls");
    system("COLOR 0D"); //Text colour is changed to purple
    printf("\t\t\t\t\t**********************************************\n");
    system("COLOR 0B");
    Sleep(150); //This will delay the next statement by 150 milliseconds
    printf("\t\t\t\t\t*                                            *\n");
    system("COLOR 0D");
    Sleep(150);
    printf("\t\t\t\t\t*  WELCOME TO THE STUDENT MANAGEMENT SYSTEM  *\n");
    system("COLOR 0F"); // Text colour is changed again and again to give it rainbow effect
    Sleep(150);
    printf("\t\t\t\t\t*  -------------------X--------------------  *\n");
    system("COLOR 0B");
    Sleep(150);
    printf("\t\t\t\t\t*                                            *\n");
    system("COLOR 0D");
    Sleep(150);
    printf("\t\t\t\t\t**********************************************\n\n\n\n");
    system("COLOR 0F");
    Sleep(150);
    system("COLOR 0D");
    printf("Enter your login credentials");
    Sleep(500);
    printf("\n\nUserID : ");
    Sleep(250);
    scanf("%d", &sid);
    int admincheck = usercheck(sid);
    system("cls");
    if (admincheck == 0)
    {
        system("COLOR 0A");
        printf("\t\t\t\t\t\tWelcome ADMIN\n\n");
        timeprint();
        printf("\n");
        Sleep(200);
        switch (sid) //This will print the name of the user according to there StudentID
        {
        case 202052317:
            printf("USERNAME: Himanshu Kumar Verma\n\n");
            break;
        case 202052314:
            printf("USERNAME: Dinesh Kumar\n\n");
            break;
        case 202052315:
            printf("USERNAME: Govind sharma\n\n");
            break;
        case 202052316:
            printf("USERNAME: Himanshu Jain\n\n");
            break;
        case 202052318:
            printf("USERNAME: Jatin Raj Saini\n\n");
            break;
        case 202052319:
            printf("USERNAME: Jayant Asudhani\n\n");
            break;
        }
        menuprint();
    }
    else //If the Student is not of admin it will change colour to yellow
    {
        system("COLOR 0E");
        printf("\t\t\t\t\t\tWelcome USER\n\n");
        timeprint();
        printf("USER ID : %d", sid);
        printf("\n");
        menuprint(sid);
    }
}
int usercheck(int sid)
{
    int pass;
    if (sid <= 202052319 && sid >= 202052314)
    {
        printf("Enter the password : ");
        scanf("%d", &pass);
        if (pass == 9099)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
void timeprint()
{
    time_t s, val = 1;
    struct tm *current_time;
    s = time(NULL);
    current_time = localtime(&s);
    printf("Time: %02d:%02d:%02d",current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    printf("\n");
    Sleep(150);
}
void menuprint()
{
    int option;

menu:
    printf("\n1. Birthday Checker\n");
    Sleep(150);
    printf("2. Weekly Schedule");
    Sleep(150);
    printf("\n3. Class link");
    Sleep(150);
    printf("\n4. e-Library");
    Sleep(150);
    printf("\n5. Contact");
    Sleep(150);
    printf("\n6. EXIT\n");
    Sleep(150);
    printf("\nSelect option from the above: ");
    Sleep(200);
    scanf("%d", &option);
    if (option == 1)
    {
        bday();
    }
    else if (option == 2)
    {
        schedule();
    }
    else if (option == 3)
    {
        classlink();
    }
    else if (option == 4)
    {
        elibrary();
    }
    else if (option == 5)
    {
        contact();
    }
    else if (option == 6)
    {
        endj();
    }
    else
    {
        printf("INVALID ENTRY!!! Enter the number of the options");
        system("cls");
        goto menu;
    }
    getch();
}
