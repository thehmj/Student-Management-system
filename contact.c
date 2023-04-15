int contact()
{
  int option, type1, type2, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15;
start:
  system("cls");
  printf("\t\t WELCOME TO IIITVADODARA CONTACTS\n");
  printf("\t\t**********************************\n");
  printf("Campus loaction : c/o Block No.9, Government Engineering College, Sector-28, Gandhinagar, Gujarat - 382028\n");
  printf("Phone number    : +91-79-29750281\n");
  printf("Email           : administration@iiitvadodara.ac.in\n\n");
  printf("1.Director\n2.Staff\n3.Faculty\n4.Class Represntative (Batch2020-24)\n");
  printf("Enter option : ");
  scanf("%d", &option);
  system("cls");

  switch (option)
  {
  case 1:
    system("cls");
    printf("Director:Prof Sarat Kumar Patra\nContact:skpatra@iiitvadodara.ac.in\n");
    printf("1.go back\n2.end\n");
    printf("enter option ");
    scanf("%d", &t1);
    switch (t1)
    {
    case 1:
      goto start;
      break;

    case 2:
      goto end;
      break;

    default:
      printf("\n\nplease choose correct option");
    }

    break;

  case 2:
  mid1:
    system("cls");
    printf("1.Registrar\n2.project Engineer\n3.Assistant Registrar\n4.Jr. Technical Superintendent\n5.Junior Superintendent\n6.Administrative Assistant\n7.Counselor\n8.Campus Manager\n9.Jr. System Administrator\n10.Training and Placement Officer\n11.Back\n");
    printf("Enter option : ");
    scanf("%d", &type1);
    system("cls");
    switch (type1)
    {
    case 1:
      system("cls");
      printf("Name:Col Ravi Chugh\nContact : registrar@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t2);
      switch (t2)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 2:
      system("cls");
      printf("Name:Mr. N R Katwale\nContact : project_engineer@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t3);
      switch (t3)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 3:
      system("cls");
      printf("Name:Mr. Jigar Shah\nContact : jigar_shah@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t4);
      switch (t4)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 4:
      system("cls");
      printf("Name:Mr. Jitu Sharma\nContact : jitusharma@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t5);
      switch (t5)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 5:
      system("cls");
      printf("Name:Mr. Narendra Solanki\nContact : narendra@iiitvadodara.ac.in\n\nName:Mr. Gautam Kumar Keshri\nContact : gautam@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t6);
      switch (t6)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 6:
      system("cls");
      printf("Name:Mr. Haresh Kumavat\nContact : haresh@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Mr. Abhishek Shah\nContact : abhishek@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Mrs. Namrata Bhouraskar\nContact : namrata@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ms. Darshana Rana\nContact : darshana@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ms. Rishika Joshi\nContact : rgjoshi@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ms. Nisha Age\nContact : nisha.age@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ms. Shah Aneri Jagdishkumar\nContact : aneri.shah@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Mr. Aakash Barapatre\nContact : aakash@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ms. Bijal Mehta\nContact : bijal@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t7);
      switch (t7)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 7:
      system("cls");
      printf("Name:Ms. Nitu Singh\nContact : counselor@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t8);
      switch (t8)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 8:
      system("cls");
      printf("Name:Mr. Bhupendrasinh Gohil\nContact : campus_manager@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t9);
      switch (t9)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 9:
      system("cls");
      printf("Name:Mr. Pratik Patel\nContact : pratikpatel@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t10);
      switch (t10)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 10:
      system("cls");
      printf("Name:Mrs. Madhu Kumari\nContact : madhu_kumari@iiitvadodara.ac.in\n");
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t11);
      switch (t11)
      {
      case 1:
        goto mid1;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 11:
      goto start;
      break;

    default:
      system("cls");
      printf("\n\nplease choose correct option");
    }

    break;
  mid2:
  case 3:
    system("cls");
    printf("1.Faculty Computer Science & Engineering\n2.Faculty Electronics & Communication Engineering\n3.Faculty Science, Math, & Humanities\n4.back\n");
    printf("Enter option : ");
    scanf("%d", &type2);
    system("cls");
    switch (type2)
    {
    case 1:
      system("cls");
      printf("Name:Antriksh Goswami\nContact:antriksh_goswami@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Ashish Phophalia\nContact:ashish_p@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Bhanu murthy\nContact:bhanu_murthy@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Naveen Kumar\nContact:naveen_kumar@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Novarun Deb\nContact:novarun_deb@iiitvadodara.ac.in\n9830715623\n\n");
      Sleep(150);
      printf("Name:Pramit Mazumdar\nContact:pramit.mazumdar@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Pratik Shah\nContact:pratik@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Soumen Atta\nContact:soumen_atta@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Jaishree Mayank\nContact:jaishree_mayank@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t12);
      switch (t12)
      {
      case 1:
        goto mid2;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 2:
      system("cls");
      printf("Name:Bhupendra Kumar\nContact:bhupendra_kumar@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Jignesh Bhatt\nContact:jignesh.bhatt@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Kamal Kishor Jha\nContact:kamal@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Sunil Dutt\nContact:sunil.dutt@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Sunandita Debnath\nContact:sunandita_debnath@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t13);
      switch (t13)
      {
      case 1:
        goto mid2;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 3:
      system("cls");
      printf("Name:Ajay Nath\nContact:ajay.nath@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Amandeep Singh\nContact:aman_singh@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Barnali Chetia\nContact:barnali@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Dhirendra Sinha\nContact:dhirendra.sinha@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Dibyendu Roy\nContact:dibyendu.roy@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Name:Manasi Kulkarni\nContact:manasi_kulkarni@iiitvadodara.ac.in\n9004657717\n\n");
      Sleep(150);
      printf("Name:Swapnil Lokhande\nContact:swapnil@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("Vivek Vyas\nContact:vivek.vyas@iiitvadodara.ac.in\n\n");
      Sleep(150);
      printf("1.go back\n2.end\n");
      printf("enter option ");
      scanf("%d", &t14);
      switch (t14)
      {
      case 1:
        goto mid2;
        break;

      case 2:
        goto end;
        break;

      default:
        printf("\n\nplease choose correct option");
      }
      break;

    case 4:
      goto start;
      break;

    default:
      system("cls");
      printf("\n\nplease choose correct option");
    }

    break;

  case 4:
    system("cls");
    printf("Name:Abhijit Patel\nMail:202051002@iiitvadodara.ac.in\n\n");
    Sleep(150);
    printf("Name:Anisha katiyar\nMail:202051027@iiitvadodara.ac.in\n\n");
    Sleep(150);
    printf("Name:Brijesh Agal\nMail:202051051@iiitvadodara.ac.in\n\n");
    Sleep(150);
    printf("Name:Chitranshi Srivastava\nMail:202051055@iiitvadodara.ac.in\n\n");
    Sleep(150);
    printf("Name:Keshav garg\nMail:202051102@iiitvadodara.ac.in\n\n\n");
    Sleep(150);
    printf("Name:Patel Nihar Rajendrakumar\nMail:202051139@iiitvadodara.ac.in\n\n");
    Sleep(150);
    printf("Name:Ronak jaiswal\nMail:202051162@iiitvadodara.ac.in\n\n\n");
    Sleep(150);
    printf("Name:Somya Jain\nMail:202052339@iiitvadodara.ac.in\n\n\n");
    Sleep(150);
    printf("Name:Sparsh Agrawal\nMail:202051182@iiitvadodara.ac.in\n\n\n");
    Sleep(150);
    printf("1.go back\n2.end\n");
    printf("enter option ");
    scanf("%d", &t15);
    switch (t15)
    {
    case 1:
      goto start;
      break;

    case 2:
      goto end;
      break;

    default:
      printf("\n\nplease choose correct option");
    }
    break;

  default:
    system("cls");
    printf("\n\nplease choose correct option");
  }
  printf("\n\n\n**************************************************************************************************************************\n");
  printf(" Campus loaction : c/o Block No.9, Government Engineering College, Sector-28, Gandhinagar, Gujarat - 382028\n");
  printf(" Phone number    : +91-79-29750281\n");
  printf(" Email           : administration@iiitvadodara.ac.in\n\n");

end:
endj();
  return 0;
}
