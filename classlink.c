void classlink2();
int whichday(char days[10]);
void classlink()
{
    system("cls");
    timeprint();
    int ask1;
    classlink2();
firstquestion:
    printf("Press 1 to re-enter the details \nPress 2 to Exit\n\n");
    scanf("%d", &ask1);
    if (ask1 == 1)
    {
        classlink();
    }
    else if (ask1 == 2)
    {
        endj();
    }
    else
    {
        printf("Enter a valid input\n\n");
        goto firstquestion;
    }
}
// Askschedeule starts from here
void classlink2()
{
    time_t s, val = 1;
    time(&s);
    struct tm *current_time;

    // time in seconds
    s = time(0);

    // to get current time
    current_time = localtime(&s);
    char days[10];
    int day, hr, min, input1;
    system("cls");
    printf("\t\t\t\t\tPlease Enter what day is today\n\n");
    scanf("%s", days);
    day = whichday(days);
    switch (day)
    {
    case 1:
    asktime1:
        system("cls");
        printf("1.Enter time manually");
        Sleep(150);
        printf("\n2.Enter time automatically\n\n");
        scanf("%d", &input1);
        Sleep(150);
        printf("\n\n");
        switch (input1)
        {
        case 1:
            printf("\t\t\t\t  Enter the current time in 24hr(hh:mm) sytem\n\n");
            printf("Enter: ");

            scanf("%d:%d", &hr, &min);
            printf("\n\n");
        monday:
            if (min >= 60)
            {
                printf("Please Enter correct time \n\n");
                goto asktime1;
            }
            else if (hr < 8 && (min >= 0 && min < 60))
            {
                printf("Your next class is IT101\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 8 && (min >= 0 && min <= 55))
            {
                printf("Your IT101 class is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 8 && (min > 55 && min < 60))
            {
                printf("Your next class is HS101 class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if (hr == 9 && (min >= 0 && min <= 55))
            {
                printf("Your HS101 class is going on, join fast!!\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if ((hr == 9 && (min > 55 && min < 60)) || (hr == 10 && (min >= 0 && min < 15)))
            {
                printf("Your next class is EC100\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if ((hr == 10 && (min >= 15 && min < 60)) || (hr == 11 && (min >= 0 && min <= 10)))
            {
                printf("Your EC100 class is going on, join fast!!\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if ((hr == 11 && (min > 10 && min < 15)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 15:30\nWhich is HS Lab class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if ((hr == 11 && (min >= 15 && min < 60)) || (hr == 12 && (min >= 0 && min <= 10)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 15:30\nWhich is HS Lab class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if ((hr == 12 && (min < 10 && min > 60)) || (hr == 13 && (min > 0 && min < 60)) || (hr == 14 && (min > 0 && min < 30)))
            {
                printf("you have BREAK now\n\n");
                printf("Your next class is at 15:30\nWhich is HS Lab class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if (hr == 14 && (min >= 30 && min < 60) || (hr == 15 && (min > 0 && min < 30)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 15:30\nWhich is HS Lab class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if (hr == 15 && (min >= 30 && min < 60) || (hr == 16 && (min > 0 && min < 30)))
            {
                printf("Your HS Lab class is going on, join fast!!\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if (hr == 16 && (min >= 30 && min < 60) || (hr == 17 && (min > 0 && min < 30)))
            {
                printf("Your HS Lab class is going on, join fast!!\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else
            {
                printf("you do not have any class now\n\n");
            }
            break;
        case 2:
            hr = current_time->tm_hour;
            min = current_time->tm_min;
            goto monday;
            break;
        default:
            printf("Enter a valid input\n\n");
            goto asktime1;
            break;
        }
        break;
    case 2:
    asktime2:
        system("cls");
        printf("1.Enter time manually\n2.enter time automatically\n\n");
        scanf("%d", &input1);
        switch (input1)
        {
        case 1:
            printf("\t\t\t\t  Enter the current time in 24hr(hh:mm) sytem\n\n");

            printf("Enter: ");
            scanf("%d:%d", &hr, &min);
            printf("\n\n");
        tuesday:
            if (min >= 60)
            {
                printf("Please Enter correct time \n\n");
                goto asktime2;
            }
            else if (hr < 8 && (min >= 0 && min < 60))
            {
                printf("Your next class is MA101\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if (hr == 8 && (min >= 0 && min <= 55))
            {
                printf("Your MA101 class is going on, join fast!!\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if (hr == 8 && (min > 55 && min < 60))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 10:15\nWhich is PH100 class\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if (hr == 9 && (min >= 0 && min <= 55))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 10:15\nWhich is PH100 class\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if ((hr == 9 && (min > 55 && min < 60)) || (hr == 10 && (min >= 0 && min < 15)))
            {
                printf("Your next class is PH100\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if ((hr == 10 && (min >= 15 && min < 60)) || (hr == 11 && (min >= 0 && min <= 10)))
            {
                printf("Your PH100 class is going on, join fast!!\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if ((hr == 11 && (min > 10 && min < 15)))
            {
                printf("Your next class PH tutorial\nLink : meet.google.com/xzo-ptmm-vbc\n\n");
            }
            else if ((hr == 11 && (min >= 15 && min < 60)) || (hr == 12 && (min >= 0 && min <= 10)))
            {
                printf("Your PH tutorial is going on,join fast!!\nLink : meet.google.com/xzo-ptmm-vbc\n\n");
            }
            else if ((hr == 12 && (min < 10 && min > 60)) || (hr == 13 && (min > 0 && min < 60)) || (hr == 14 && (min > 0 && min < 30)))
            {
                printf("you have BREAK now\n\n");
                printf("Your next class is at 14:30\nWhich is EC/PH Lab class\nEC Link : meet.google.com/vzk-xmmf-qtr\nPH Link : meet.google.com/xzo-ptmm-vbc\n\n");
            }
            else if (hr == 14 && (min >= 30 && min < 60) || (hr == 15 && (min > 0 && min < 30)))
            {
                printf("You EC/PH Lab is going on,join fast!!\nclass\nEC Link : meet.google.com/vzk-xmmf-qtr\nPH Link : meet.google.com/xzo-ptmm-vbc\n\n");
            }
            else if (hr == 15 && (min >= 30 && min < 60) || (hr == 16 && (min > 0 && min < 30)))
            {
                printf("You EC/PH Lab is going on,join fast!!\nclass\nEC Link : meet.google.com/vzk-xmmf-qtr\nPH Link : meet.google.com/xzo-ptmm-vbc\n\n");
                ;
            }
            else if (hr == 16 && (min >= 30 && min < 60) || (hr == 17 && (min > 0 && min < 30)))
            {
                printf("You EC/PH Lab is going on,join fast!!\nclass\nEC Link : meet.google.com/vzk-xmmf-qtr\nPH Link : meet.google.com/xzo-ptmm-vbc\n\n");
            }
            else
            {
                printf("you do not have any class now\n\n");
            }
            break;
        case 2:
            hr = current_time->tm_hour;
            min = current_time->tm_min;
            goto tuesday;
            break;
        default:
            printf("Enter a valid input\n\n");
            goto asktime2;
            break;
        }
        break;
    case 3:
    asktime3:
        system("cls");
        printf("1.Enter time manually\n2.enter time automatically\n\n");
        scanf("%d", &input1);
        switch (input1)
        {
        case 1:
            printf("\t\t\t\t  Enter the current time in 24hr(hh:mm) sytem\n\n");

            printf("Enter: ");
            scanf("%d:%d", &hr, &min);
            printf("\n\n");
        wednesday:
            if (min >= 60)
            {
                printf("Please Enter correct time \n\n");
                goto asktime3;
            }
            else if (hr < 8 && (min >= 0 && min < 60))
            {
                printf("Your next class is IT101\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 8 && (min >= 0 && min <= 55))
            {
                printf("Your IT101 class is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 8 && (min > 55 && min < 60))
            {
                printf("Your next class is HS101 class\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if (hr == 9 && (min >= 0 && min <= 55))
            {
                printf("Your HS101 class is going on, join fast!!\nGo to your mail for the link\nhttp://www.gmail.com\n\n");
            }
            else if ((hr == 9 && (min > 55 && min < 60)) || (hr == 10 && (min >= 0 && min < 15)))
            {
                printf("Your next class is EC100\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if ((hr == 10 && (min >= 15 && min < 60)) || (hr == 11 && (min >= 0 && min <= 10)))
            {
                printf("Your EC100 class is going on, join fast!!\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if ((hr == 11 && (min > 10 && min < 15)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 14:30\nWhich is IT Lab class\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if ((hr == 11 && (min >= 15 && min < 60)) || (hr == 12 && (min >= 0 && min <= 10)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 14:30\nWhich is IT Lab class\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if ((hr == 12 && (min < 10 && min > 60)) || (hr == 13 && (min > 0 && min < 60)) || (hr == 14 && (min > 0 && min < 30)))
            {
                printf("you have BREAK now\n\n");
                printf("Your next class is at 14:30\nWhich is IT Lab class\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 14 && (min >= 30 && min < 60) || (hr == 15 && (min > 0 && min < 30)))
            {
                printf("Your IT Lab is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 15 && (min >= 30 && min < 60) || (hr == 16 && (min > 0 && min < 30)))
            {
                printf("Your IT Lab is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if (hr == 16 && (min >= 30 && min < 60) || (hr == 17 && (min > 0 && min < 30)))
            {
                printf("Your IT Lab is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else
            {
                printf("you do not have any class now\n\n");
            }
            break;
        case 2:
            hr = current_time->tm_hour;
            min = current_time->tm_min;
            goto wednesday;
            break;
        default:
            printf("Enter a valid input\n\n");
            goto asktime3;
            break;
        }
        break;
    case 4:
    asktime4:
        system("cls");
        printf("1.Enter time manually\n2.enter time automatically\n\n");
        scanf("%d", &input1);
        switch (input1)
        {
        case 1:
            printf("\t\t\t\t  Enter the current time in 24hr(hh:mm) sytem\n\n");

            printf("Enter: ");
            scanf("%d:%d", &hr, &min);
            printf("\n\n");
        thursday:
            if (min >= 60)
            {
                printf("Please Enter correct time \n\n");
                goto asktime4;
            }
            else if (hr < 8 && (min >= 0 && min < 60))
            {
                printf("Your next class is PH100\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if (hr == 8 && (min >= 0 && min <= 55))
            {
                printf("Your PH100 class is going on, join fast!!\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if (hr == 8 && (min > 55 && min < 60))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 10:15\nWhich is MA101 class\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if (hr == 9 && (min >= 0 && min <= 55))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 10:15\nWhich is MA101 class\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if ((hr == 9 && (min > 55 && min < 60)) || (hr == 10 && (min >= 0 && min < 15)))
            {
                printf("Your next class is MA101\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if ((hr == 10 && (min >= 15 && min < 60)) || (hr == 11 && (min >= 0 && min <= 10)))
            {
                printf("Your MA101 class is going on, join fast!!\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if ((hr == 11 && (min > 10 && min < 15)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 14:30\nwhich is EC tutorial\nLink : meet.google.com/vzk-xmmf-qtr");
            }
            else if ((hr == 11 && (min >= 15 && min < 60)) || (hr == 12 && (min >= 0 && min <= 10)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 14:30\nwhich is EC tutorial\nLink : meet.google.com/vzk-xmmf-qtr");
            }
            else if ((hr == 12 && (min < 10 && min > 60)) || (hr == 13 && (min > 0 && min < 60)) || (hr == 14 && (min > 0 && min < 30)))
            {
                printf("you have BREAK now\n\n");
                printf("Your next class is at 14:30\nwhich is EC tutorial\nLink : meet.google.com/vzk-xmmf-qtr");
            }
            else if (hr == 14 && (min >= 30 && min < 60) || (hr == 15 && (min > 0 && min < 30)))
            {
                printf("You EC tutorial is going on,join fast!!\nLink : meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if (hr == 15 && (min >= 30 && min < 60) || (hr == 16 && (min > 0 && min < 30)))
            {
                printf("you do not have any class now\n\n");
                printf("Your next class is at 16:30\nwhich is MA tutorial\nLink : meet.google.com/qfc-mfyd-zum\n\n");
            }
            else if (hr == 16 && (min >= 30 && min < 60) || (hr == 17 && (min > 0 && min < 30)))
            {
                printf("You MA tutorial is going on,join fast!!\nLink : qfc-mfyd-zum\n\n");
            }
            else
            {
                printf("you do not have any class now\n\n");
            }
            break;
        case 2:
            hr = current_time->tm_hour;
            min = current_time->tm_min;
            goto thursday;
            break;
        default:
            printf("Enter a valid input\n\n");
            goto asktime4;
            break;
        }
        break;
    case 5:
    asktime5:
        system("cls");
        printf("1.Enter time manually\n2.enter time automatically\n\n");
        scanf("%d", &input1);
        switch (input1)
        {
        case 1:
            printf("\t\t\t\t  Enter the current time in 24hr(hh:mm) sytem\n\n");

            printf("Enter: ");
            scanf("%d:%d", &hr, &min);
            printf("\n\n");
        friday:
            if (min >= 60)
            {
                printf("Please Enter correct time \n\n");
                goto asktime5;
            }
            else if (hr < 8 && (min >= 0 && min < 60))
            {
                printf("Your next class is EC100\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if (hr == 8 && (min >= 0 && min <= 55))
            {
                printf("Your EC100 class is going on, join fast!!\nLink : https://meet.google.com/vzk-xmmf-qtr\n\n");
            }
            else if (hr == 8 && (min > 55 && min < 60))
            {
                printf("Your next class is MA101\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if (hr == 9 && (min >= 0 && min <= 55))
            {
                printf("Your MA101 class is going on, join fast!!\nLink : https://meet.google.com/dsu-mfya-wjh\n\n");
            }
            else if ((hr == 9 && (min > 55 && min < 60)) || (hr == 10 && (min >= 0 && min < 15)))
            {
                printf("Your next class is IT101\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if ((hr == 10 && (min >= 15 && min < 60)) || (hr == 11 && (min >= 0 && min <= 10)))
            {
                printf("Your IT101 class is going on, join fast!!\nLink : https://meet.google.com/fwk-vdzc-wdq\n\n");
            }
            else if ((hr == 11 && (min > 10 && min < 15)))
            {
                printf("Your next class is PH100\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else if ((hr == 11 && (min >= 15 && min < 60)) || (hr == 12 && (min >= 0 && min <= 10)))
            {
                printf("Your PH100 class is going on, join fast!!\nLink : https://meet.google.com/jyj-hcbr-psf\n\n");
            }
            else
            {
                printf("you do not have any class now\n\n");
            }
            break;
        case 2:
            hr = current_time->tm_hour;
            min = current_time->tm_min;
            goto friday;
            break;
        default:
            printf("Enter a valid input\n\n");
            goto asktime5;
            break;
        }
        break;
    case 6:
        system("cls");

        printf("\t\t\t\t\tToday is holiday.\nEnjoy!!\n\n");
        break;
    }
}
//The function below will check which day it is and return the number accordingly
int whichday(char days[10])
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
        printf("Enter the correct day ");
        classlink2();
    }
}
