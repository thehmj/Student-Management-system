int whichdays(char days[10]);
void schedule()
{
    char days[10];
    int day, input311;
    system("cls");
    printf("\t\t\t\t\tEnter the day you want to check\n\n");
    scanf("%s", days);
    day = whichdays(days);
    switch (day)
    {
    case 1:
        printf("\n\n08:00-08:55AM : IT101\n");
        Sleep(200);
        printf("09:00-09:55AM : HS101\n");
        Sleep(200);
        printf("10:15-11:10AM : EC100\n");
        Sleep(200);
        printf("11:15-12:10AM : NO CLASS\n\n");
        Sleep(200);
        printf("BREAK \n\n");
        Sleep(200);
        printf("3:30PM : HS101 LAB STARTS\n");
        Sleep(200);
        printf("5:30PM : HS101 LAB ENDS\n\n");

    question3111:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3111;
        }
        break;
    case 2:
        printf("\n\n08:00-08:55AM : MA101\n");
        Sleep(200);
        printf("09:00-09:55AM : NO CLASS\n");
        Sleep(200);
        printf("10:15-11:10AM : PH100\n");
        Sleep(200);
        printf("11:15-12:10AM : NO CLASS\n\n");
        Sleep(200);
        printf("BREAK \n\n");
        Sleep(200);
        printf("2:30PM : PH160/EC160 LAB STARTS\n");
        Sleep(200);
        printf("5:30PM : PH160/EC160 LAB ENDS\n\n");
    question3112:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3112;
        }
        break;
    case 3:
        printf("\n\n08:00-08:55AM : IT101\n");
        Sleep(200);
        printf("09:00-09:55AM : HS101\n");
        Sleep(200);
        printf("10:15-11:10AM : EC100\n");
        Sleep(200);
        printf("11:15-12:10AM : NO CLASS\n\n");
        Sleep(200);
        printf("BREAK \n\n");
        Sleep(200);
        printf("3:30PM : IT161 LAB STARTS\n");
        Sleep(200);
        printf("5:30PM : IT161 LAB ENDS\n\n");
    question3113:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3113;
        }
        break;
    case 4:
        printf("\n\n08:00-08:55AM : PH100\n");
        Sleep(200);
        printf("09:00-09:55AM : NO CLASS\n");
        Sleep(200);
        printf("10:15-11:10AM : MA101\n");
        Sleep(200);
        printf("11:15-12:10AM : NO CLASS\n\n");
        Sleep(200);
        printf("BREAK \n\n");
        Sleep(200);
        printf("2:30-3:30PM : EC100 TUT\n");
        Sleep(200);
        printf("4:30-5:30PM : MA101 TUT\n\n");
    question3114:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3114;
        }
        break;
    case 5:
        printf("\n\n08:00-08:55AM : EC100\n");
        Sleep(200);
        printf("09:00-09:55AM : MA101\n");
        Sleep(200);
        printf("10:15-11:10AM : IT101\n");
        Sleep(200);
        printf("11:15-12:10AM : PH100\n\n");
        Sleep(200);
        printf("BREAK \n\n");
        Sleep(200);
        printf("NO LAB AND TUTORIALS\n\n");
    question3115:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3115;
        }
        break;
    case 6:
        printf("\n\nTODAY IS HOLIDAY!!!\n\n");
    question3116:
        printf("Enter 1 for links\nEnter 2 to exit\n\n");
        scanf("%d", &input311);
        switch (input311)
        {
        case 1:
            classlink();
            break;
        case 2:
            endj();
            break;
        default:
            printf("Enter a valid input\n\n");
            goto question3116;
        }
        break;
    }
}

int whichdays(char days[10])
{
    if (days[0] == 'm' || days[0] == 'M')
    {
        return 1;
    }
    else if (days[0] == 'w' || days[0] == 'W')
    {
        return 3;
    }
    else if (days[0] == 'f' || days[0] == 'F')
    {
        return 5;
    }
    else if (days[0] == 's' || days[0] == 'S')
    {
        return 6;
    }
    else if ((days[0] == 't' || days[0] == 'T') && (days[1] == 'h' || days[1] == 'H'))
    {
        return 4;
    }
    else if ((days[0] == 't' || days[0] == 'T') && (days[1] == 'u' || days[1] == 'U'))
    {
        return 2;
    }
    else
    {
        printf("\n\nInvalid day ");
        Sleep(150);
        printf("\n\nPress any key to re-enter the day");
        getch();
        schedule();
    }
}