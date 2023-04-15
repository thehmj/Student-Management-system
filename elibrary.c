#include <stdio.h>
int elibrary()
{
    int input1, input11, input111, input112, input2, input21, input211, input212, input311;
    int input3, input31, input312, input4, input41, input411, input412;
    int input5, input51, input511, input512, input6, input61;
    question1:
    system("cls"); //This function will clear the screen
    printf("\t\t\t\t\t**********************************************\n");
    printf("\t\t\t\t\t*      WELCOME  TO  OUR  STUDENTS LIBRARY    *\n");
    printf("\t\t\t\t\t*  -------------------X--------------------  *\n");
    printf("\t\t\t\t\t*                                            *\n");
    printf("\t\t\t\t\t**********************************************\n\n\n");
    printf("Enter 1 To Explore our COMPUTER SCIENCE AND INFORMATION SECTION\nEnter 2 To Explore our MATHEMATICS SECTION\n");
    printf("Enter 3 To Explore our PHYSICS SECTION\nEnter 4 To Explore our ELECTRONIC AND CIRCUIT SECTION\nEnter 5 To Explore our LITERATURE SECTION\n");
    printf("Enter 6 To Explore our non-acadmics SECTION\nEnter 7 To Exit\n\n");
    printf("Enter your choice : ");
    scanf("%d", &input1);
    printf("\n");
    switch (input1)
    {
    case 1:
    question11:
        system("cls");
        printf("\t\t\t\t\tWELCOME TO COMPUTER SCIENCE AND INFORMATION SECTION\n\n\n\n");
        printf("Enter 1 To Find Text book or reference books\n");
        printf("Enter 2 To Find lab manuals\nEnter 3 To go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input11);
        switch (input11)
        {
        case 1:
        question111:
            system("cls");
            printf("ENTER 1 C How to Program, 7th Ed., P Deitel and H Deitel.\n");
            printf("Enter 2 C Programming Language, 2nd Ed., Kernighan, Brian W. & Ritchie, Dennis.\n");
            printf("Enter 3 HTML and CSS Design and Build Websites.\n");
            printf("Enter 4 An Introduction to Understanding and Implementing Core Data Structure and Algorithm Fundamentals-Apress (2019)\n");
            printf("Enter 5 To go back\n\n");
            scanf("%d", &input111);
            switch (input111)
            {
            case 1:
                printf("https://drive.google.com/file/d/1F2k18QFtx_lO8mR9z30v43fqI_xKBHt2/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/12F63gHDbkb42MPz1BBV2--kn0nFHq2pb/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/1YwGDnecacjy2Hu2w3yJwtgGjLC8BzTC2/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1a11te2xCP2XKEEMsBGsCgK2oSKZKu7bR/view?usp=sharing\n\n");
                break;
            case 5:
                goto question11;
                break;
            default:
                printf("enter a valid input\n\n");
                goto question111;
            }
            break;
        case 2:
        question112:
            system("cls");
            printf("Enter 1 Practical C Programming, 3rd Ed, Oualline, Steve, Shroff Publishers, 2000.\n");
            printf("Enter 2 C Programming:  A Modern Approach\n");
            printf("Enter 3 To go back\n\n");
            scanf("%d", &input112);
            switch (input112)
            {
            case 1:
                printf("https://drive.google.com/file/d/1wFom9UTH1Wtu2dN0ZyYJO7tmLFOsI1j-/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1pR3U9nnRutiABW697vFA9M7U5ePcOL4P/view?usp=sharing\n\n");
                break;
            case 3:
                goto question11;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question111;
                break;
            }
            break;
        case 3:
            goto question1;
            break;
        }
        break;
    case 2:
    question21:
        system("cls");
        printf("\t\t\t\tWELCOME TO MATHEMATICS SECTION\n\n\n\n");
        printf("Enter 1 To Find text book or reference books\n");
        printf("Enter 2 To Find competitive books\nenter 3 to go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input21);
        switch (input21)
        {
        case 1:
        question211:
            system("cls");
            printf("Enter 1 Introduction to Linear Algebra, Gilbert Strang, 5th Ed, SIAM, 2016.\n");
            printf("Enter 2 Linear Algebra, Kunze Ray, Hoffman Kenneth 2nd Ed, Phi Learning, 2014.\n");
            printf("Enter 3 Fundamentals of Matrix Computations, David S. Watkins, 3d ed, Wiley.\n");
            printf("Enter 4 Discrete Mathematical Structure, 4th Ed, B. Kolman, R.C. Busby and S. C. Ross, PHI, 2000.\n");
            printf("Enter 5 A.R. Heesterman - Handbook of linear algebra-World Scientific Publishing Company.\n");
            printf("Enter 6 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", input211);
            switch (input211)
            {
            case 1:
                printf("https://drive.google.com/file/d/11GRpXHUc-Gx10zLiI1kZb6WPr75-UevW/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1kLiyYvgF9WcHBm2c2dQpe3rkZcB5NCxS/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/15MhUsHqR_7dEgAt_ZqbJq533rKC_4VVZ/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1VDETSMVGmKoeSTxYwpYu0Cxb7O9bo6Gr/view?usp=sharing\n\n");
                break;
            case 5:
                printf("https://drive.google.com/file/d/1Hw7kTFYq2bt5cJ_xSUJDJSzhDOQ40S1h/view?usp=sharing\n\n");
                break;
            case 6:
                goto question21;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question211;
            }
            break;
        case 2:
        question212:
            system("cls");
            printf("Enter 1 Integral equations and boundary value problems.\n");
            printf("Enter 2 Advance differential equations\n");
            printf("Enter 3 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input212);
            switch (input212)
            {
            case 1:
                printf("https://drive.google.com/file/d/1LbZviNgWBFl5QRWq0p_-tUsMqHHffpT3/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1BoHI0BgmzZLrXbKF2d7Tu4y6CvQKgl33/view?usp=sharing\n\n");
                break;
            case 3:
                goto question21;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question212;
            }
        break;
        case 3:
            goto question1;
            break;
        }
        break;
    case 3:
    question31:
        system("cls");
        printf("\t\t\t\tWELCOME TO PHYSICS SECTION\n\n\n\n");
        printf("Enter 1 To find text books or reference books\nEnter 2 To the find beyond the physics related books\n");
        printf("Enter 3 To go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input31);
        switch (input31)
        {
        case 1:
        question311:
            system("cls");
            printf("Enter 1 An Introduction to Mechanics; D. Kleppner and R. Kolenkow, Second Edition.\n");
            printf("Enter 2 Concepts of Modern Physics:  Arthur Beiser, Sixth Edition.\n");
            printf("Enter 3 Heat and Thermodynamics:  M. W. Zemansky and R. H. Dittman, Seventh Edition.\n");
            printf("Enter 4 The Feynman Lectures on Physics, Vol-I & III, Feynman, Leighton and Sands; Pearson Education.\n");
            printf("Enter 5 Fundamental of thermodynamics,claus borgnakke,richard E sonntag.\n");
            printf("Enter 6 to go back\n\n");
            scanf("%d", &input311);
            switch (input311)
            {
            case 1:
                printf("https://drive.google.com/file/d/19EJqyPdQ_CscWbpTuOsFKOp6Ba1C06dz/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1RUmA6t21vn0Z45dYVzjzdW2BMhMkGdji/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/18Ih_uPeoo1rHWmCeJnxNgD8QltBN2T8T/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1WqR0f_xHMA0PAwsOalfFRqHH--sJ1Fko/view?usp=sharing\n\n");
            case 5:
                break;
                printf("https://drive.google.com/file/d/1yYQhILapzidveLGx3qolp4njKZMnR6zw/view?usp=sharing\n\n");
                break;
            case 6:
                goto question31;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question311;
            }
            break;
        case 2:
        question312:
            system("cls");
            printf("Enter 1 CHAOUS \n");
            printf("Enter 2 The theory of everything\n");
            printf("Enter 3 Introduction to quantum physics\n");
            printf("Enter 4 The order of time\n");
            printf("Enter 5 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input312);
            switch (input312)
            {
            case 1:
                printf("https://drive.google.com/file/d/1UWzlhMdiQlXVFdE57r1tHf1tue1JntJ3/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1cQXjS-PLx02aCmWYwV72F2FUbh6zEj2O/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/16AbkcMOXNGf4R02JNN8UNL0zNfUIUzX1/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/19CKvXvn8z2NLsWLcJfcp-IFDTLtgypsu/view?usp=sharing\n\n");
                break;
            case 5:
                goto question31;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question312;
            }
            break;
        case 3:
            goto question1;
            break;
        }
        break;
    case 4:
    question41:
        system("cls");
        printf("\t\t\t\tWELCOME TO ELECTRONIC AND CIRCUITS SECTION\n\n\n\n");
        printf("Enter 1 To find text books or reference books\nEnter 2 To find competitive books\n");
        printf("Enter 3 To go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input41);
        switch (input41)
        {
        case 1:
        question411:
            system("cls");
            printf("enter 1 Electronic Principles, 7th Ed, Albert Malvino, and David Bates, Tata McGraw-Hill, 2007.\n");
            printf("enter 2 Electronic Devices 9th Edition, Thomas L. Floyd, Pearson.\n");
            printf("enter 3 Microelectronic Circuits. Theory and Applications, A.S. Sedra and K.C. Smith, Oxford University Press, Sixth Edition.\n");
            printf("enter 4 Electronic devices and circuits,jacob millman\n");
            printf("enter 5 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input411);
            switch (input411)
            {
            case 1:
                printf("https://drive.google.com/file/d/1Pgb_ypv01D63YZ3JHwXAM2lN_6x7h58G/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1wPAOc8YtrfJN91ylUPJxH76aWB8Ugadi/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/1BUK7jUHm66JenunYRwQ19a-w1IV0c9UK/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1mnwIo7VUeUHcLenNwhYFGy8oWxER8vHU/view?usp=sharing\n\n");
                break;
            case 5:
                goto question41;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question411;
                break;
            }
            break;
        case 2:
        question412:
            system("cls");
            printf("Enter 1 fundamental of digital circuits by anand kumar.\n");
            printf("Enter 2 microelectronic circuits by adel sedra and kenneth C.smith.\n");
            printf("Enter 3 fundamentals of logic design by charles h roth.\n");
            printf("Enter 4 to go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input412);
            switch (input412)
            {
            case 1:
                printf("https://drive.google.com/file/d/1BkREjgYz8vNS5DsgmZgZtvrINAmeDwVF/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1BUK7jUHm66JenunYRwQ19a-w1IV0c9UK/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/1FvbSevkUPiqwsNUDuuFsUynTF4EUL-r-/view?usp=sharing\n\n");
                break;
            case 4:
                goto question41;
                break;
            }
        break;
        case 3:
            goto question1;
        }
        break;
    case 5:
    question51:
        system("cls");
        printf("\t\t\t\tWELCOME TO LITERATURE SECTION\n\n\n\n");
        printf("Enter 1 to find text books or reference books\nEnter 2 To explore novels and stuff.\n");
        printf("enter 3 to go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input51);
        switch (input51)
        {
        case 1:
        question511:
            system("cls");
            printf("Enter 1 The Source Unleash Your Natural Energy, Power Up Your Health, and Feel 10 Years Younger-Free Press\n");
            printf("Enter 2 Technical Communication:  Principles and Practice, Second Edition, by Meenakshi Raman and Sangeeta Sharma, 2009.\n");
            printf("Enter 3 English and Communication Skills for Students of Science and Engineering. Dhanavel, 2009.\n");
            printf("Enter 4 Scientific English:  A Guide for Scientists and Other Professionals. 2 nd ed. Day. R A.\n");
            printf("Enter 5 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input511);
            switch (input511)
            {
            case 1:
                printf("https://drive.google.com/file/d/1mUW_UMNDpBXdQP7M9oa1ova69HxcWPY_/view?usp=sharing\n\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1pWrTaTgU3tbWYqBZIFNJYcwJ9EHnHxbD/view?usp=sharing\n\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/1R4bswifKp7GwlW3ltFGuaY6rdXWp4Mgy/view?usp=sharing\n\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1V05KxsI4dCLCG0bGh6l5JpyETAOO1AcW/view?usp=sharing\n\n");
                break;
            case 5:
                goto question51;
                break;
            default:
                printf("Enter a valid input\n\n");
                goto question511;
            }
        break;
        case 2:
        question512:
            system("cls");
            printf("Enter 1 One Minute Mysteries  65 More Short Mysteries You Solve With Science-Science, Naturally.\n");
            printf("Enter 2 Mine Till Midnight (The Hathaways #1).\n");
            printf("Enter 3 Novel for students variation end .\n");
            printf("Enter 4 Tempt Me at Twilight.\n");
            printf("Enter 5 One night with You.\n");
            printf("Enter 6 To go back\n\n");
            printf("Enter your choice : ");
            scanf("%d", &input512);
            switch (input512)
            {
            case 1:
                printf("https://drive.google.com/file/d/16qLaxyHsxeYVxpWq3Q7xd2MN8fU6QH-6/view?usp=sharing\n");
                break;
            case 2:
                printf("https://drive.google.com/file/d/1t0bVIB6_oR9DVvoM7b-v76CUMi_uW9EO/view?usp=sharing\n");
                break;
            case 3:
                printf("https://drive.google.com/file/d/1slEo5uozTvVXXo_CCOy42I3Q8SapP4UC/view?usp=sharing\n");
                break;
            case 4:
                printf("https://drive.google.com/file/d/1Wi6vxWLqWuaUJmsEYgOPaEZ50CpyABbV/view?usp=sharing\n");
                break;
            case 5:
                printf("https://drive.google.com/file/d/1v0AvFxudU6aeRfzi24Dvj-luPcl1G7Zk/view?usp=sharing\n");
                break;
            case 6:
                goto question51;
            default:
                printf("Enter a valid input\n\n");
                goto question512;
            }
            break;
        case 3:
            goto question1;
        }
        break;
    case 6:
    question61:
        system("cls");
        printf("enter 1 Anna Karenina by Leo Tolstoy.\n");
        printf("enter 2 Madame Bovary by Gustav Flaubert.\n");
        printf("enter 3 Marc Gopin - Holy war, holy peace,how religion can bring peace to the Middle East-Oxford University Press \n");
        printf("enter 4 Lolita by Vladimir Nabokov.\n");
        printf("enter 5 The Adventures of Huckleberry Finn by Mark Twain.\n");
        printf("enter 6 In Search of Lost Time by Marcel Proust.\n");
        printf("enter 7 To go back\n\n");
        printf("Enter your choice : ");
        scanf("%d", &input61);
        switch (input61)
        {
        case 1:
            printf("https://drive.google.com/file/d/1a6Az1ljhyXvkNVkdr7N1NN9uqP2OndFR/view?usp=sharing\n");
            break;
        case 2:
            printf("https://drive.google.com/file/d/1yY-k3_bpo10AFkqrxPWSYgc1y8xk1sLX/view?usp=sharing\n");
            break;
        case 3:
            printf("https://drive.google.com/file/d/1PYa_B-2JQqXAgTFUFqligySclCZq_XdO/view?usp=sharing\n");
            break;
        case 4:
            printf("https://drive.google.com/file/d/1TmC8b6DFZ1TU3Y9O5SAll_w0MNDO1icb/view?usp=sharing\n");
            break;
        case 5:
            printf("https://drive.google.com/file/d/1fc7hWzw8Zc4cciR_2vVbFMTHWOVAGIeE/view?usp=sharing\n");
            break;
        case 6:
            printf("https://drive.google.com/file/d/12ZIjprvcDXvm7F_MHuvgcMjkiGoLbPpJ/view?usp=sharing\n");
            getch();
            break;
        case 7:
            goto question1;
        default:
            printf("Enter a valid input\n\n");
            goto question61;
        }
        break;
    case 7:
        getch();
        endj();
        break;
    default:
        printf("Enter a valid input\n\n");
        goto question1;
    }
    getch();
    endj();
    return 0;
}