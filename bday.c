void bday()// This function asks current date and check the birthday on that day
{
    int month, date;
    system("cls");
    timeprint();
    Sleep(200);
    printf("\nEnter date in format dd/mm : ");
    scanf("%d/%d", &date, &month);
    bdaylist(date, month);
}

void bdaylist(int date, int month)
{
    system("COLOR 05");
    if (month == 1)
    {
        if (date == 25)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("VRANDA MAHAJAN");
        }
        else if (date == 5)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("LOKESH");
        }
        else if (date == 10)
        {

            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KAMAL KUMAR");
        }

        else if (date == 2)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HARSH JITESH DAWDA");
        }
        else if (date == 12)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DHRUV DAVE");
        }
        else if (date == 17)
        {
            Sleep(300);

            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GARIMA MANGAL");
        }
        else if (date == 27)
        {
            Sleep(300);

            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KESHAV GARG");
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {

            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 2)
    {
        if (date == 7)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HIMANSHU KANOJIA");
        }
        else if (date == 8)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KALASH ABHAY KALA");
        }
        else if (date == 26)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KANANI DARPAN ASHOKBHAI");
        }
        else if (date > 28)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 28 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 3)
    {
        if (date == 23)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("JOSHI TEJAS DEEPAK");
        }
        else if (date == 9)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("CHATARKAR CHANDRACHOOD NANDKISHOR");
        }
        else if (date == 10)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GADDE SAI SANTO SH");
        }
        else if (date == 12)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GUDUGUNTLA KARTHYKEYA");
        }
        else if (date == 5)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GYAN BABU");
        }
        else if (date == 27)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("MUGDHA SHARMA");
        }
        else if (date == 30)
        {
            Sleep(300);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("JATIN ");
                Sleep(150);
                printf("RAJ SAINI");
                Sleep(150);
            }
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 4)
    {
        if (date == 30)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HARSH VERDHAN SINGH SHEKHAWAT");
        }
        else if (date == 6)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KALASH SINGH JADOUN");
        }
        else if (date == 14)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("CHETAN VERMA");
        }
        else if (date > 30)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 30 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 5)
    {
        if (date == 28)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HITESH KUMAR VERMA");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KAYALA VISHWAKSEN REDDY");
        }
        else if (date == 31)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HOTWANI VISHAL RAMESHKUMAR");
        }
        else if (date == 27)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("JUKTA BARUA");
        }
        else if (date == 8)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KAMLESH KUMAR");
        }
        else if (date == 3)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("CHITRANSHI SRIVASTAVA");
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 6)
    {
        if (date == 9)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HARIOM KAUSHAL");
        }
        else if (date == 11)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GAURAV VERMA");
        }
        else if (date > 30)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 30 days only ");
            Sleep(1000);
            bday();
        }

        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 7)
    {
        if (date == 30)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KAILASH KUMAR");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DEVANG PATEL");
        }
        else if (date == 9)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DELHIWALA KEWAL");
        }
        else if (date == 15)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DEVENDAR KUMAR");
        }
        else if (date == 17)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DILIP KUMAR");
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 8)
    {
        if (date == 15)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KESHAV BASODIYA");
        }
        else if (date == 8)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DILESH CHAUHAN");
        }
        else if (date == 22)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GOPISETTI GIRIDHAR");
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 9)
    {
        if (date == 4)
        {

            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DEEPANJANA DAS");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HARDIK GABRIYAL");
        }
        else if (date == 18)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GARV CHAUHAN");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KOTADIYA JANKI KALPESHBHAI");
        }
        else if (date > 30)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 30 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 10)
    {
        if (date == 11)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HRITIK KUMAR");
        }
        else if (date == 16)
        {

            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GHIYA JAY MANISHBHAI");
            Sleep(1000);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("GOVIND ");
                Sleep(150);
                printf("SHARMA");
                Sleep(150);
            }
        }
        else if (date == 2)
        {
            Sleep(300);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("HIMANSHU ");
                Sleep(150);
                printf("VERMA");
                Sleep(150);
            }
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 11)
    {
        if (date == 10)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("JASHWIN GAUTAM");
        }
        else if (date == 20)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DORADLA INDRA NEELA");
        }
        else if (date == 21)
        {
            Sleep(300);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("JAYANT ");
                Sleep(150);
                printf("ASUDHANI");
                Sleep(150);
            }
        }
        else if (date > 30)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 30 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There");
            Sleep(150);
            printf("is");
            Sleep(150);
            printf("no");
            Sleep(150);
            printf("Birthday");
            Sleep(150);
            printf("on");
            Sleep(150);
            printf("Entered");
            Sleep(150);
            printf("Date");
        }
    }

    else if (month == 12)
    {
        if (date == 6)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("ISHAN PANDEY");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KOTINI SWATEJ");
        }
        else if (date == 4)
        {

            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KALASH AMIT SHAH");
            Sleep(300);
            Sleep(300);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("HIMANSHU ");
                Sleep(150);
                printf("JAIN");
                Sleep(150);
            }
        }
        else if (date == 7)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("DHYEY SAVALIA");
        }
        else if (date == 11)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GHANSHYAM RATHORE");
        }
        else if (date == 21)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("GOSWAMI KRISHNA TAGORGIRI");
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("HAJA RAM");
        }
        else if (date == 31)
        {
            Sleep(300);
            printf("\nWISH  ");
            Sleep(150);
            printf("HAPPY ");
            Sleep(150);
            printf("BIRTHDAY ");
            Sleep(150);
            printf("TO ");
            Sleep(150);
            printf("KOMMULA CHIRANJEEVI SAGAR");
        }
        else if (date == 1)
        {
            Sleep(300);
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                printf("\t\t\t\t\t\tWISH  ");
                system("COLOR 0B");
                Sleep(150);
                printf("HAPPY ");
                system("COLOR 0D");
                Sleep(150);
                printf("BIRTHDAY ");
                system("COLOR 0E");
                Sleep(150);
                printf("TO ");
                system("COLOR 0B");
                Sleep(150);
                system("COLOR 0D");
                printf("DINESH ");
                Sleep(150);
                printf("KUMAR");
                Sleep(150);
            }
        }
        else if (date > 31)
        {
            printf("INVALID ");
            Sleep(100);
            printf("ACTION");
            Sleep(500);
            printf("\n\nThis month has 31 days only ");
            Sleep(1000);
            bday();
        }
        else
        {
            Sleep(300);
            printf("There ");
            Sleep(150);
            printf("is ");
            Sleep(150);
            printf("no ");
            Sleep(150);
            printf("Birthday ");
            Sleep(150);
            printf("on ");
            Sleep(150);
            printf("Entered ");
            Sleep(150);
            printf("Date");
        }
    }

    else
    {
        printf("INVALID ");
        Sleep(100);
        printf("ACTION");
        Sleep(500);
        printf("\n\nMonth can't be greater than 12");
        Sleep(1000);
        bday();
    }
    Sleep(150);
    printf("\n\nPress any key to exit");
    getch();
    endj();
}