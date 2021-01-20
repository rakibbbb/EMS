#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
using namespace std;

void mainmenu();
void logadmin();
void logemployee();
void administratormenu();
void employeemenu();
void add_profile();
void search_em_profile();
void view_emp_profile();
void update_emp_profile();
void dlt_emp_profile();
void cal_sal_pack();
void logout_ad();

void view_profile();
void view_salary();
void logout_emp();

void mainmenu()
{
    system("cls");
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"                           EMPLOYEE MANAGEMENT SYSTEM                           "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"     [1]- LOGIN AS ADMIN "<<endl;
    cout<<"     [2]- LOGIN AS EMPLOYEE "<<endl;
    cout<<"     [3]- EXIT "<<endl;

    int n;
    cout<<"\n\n";
    cout<<"     ENTER YOUR CHOICE:\t";
    cin>>n;
    switch(n)
    {
    case 1:
        logadmin();
        break;
    case 2:
        logemployee();
        break;
    case 3:
        system("cls");
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"                      THANK YOU FOR USING THIS SOFTWARE                                   "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"\n\n\n\n\n\n"<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"                           ***DEVELOPED BY rAKIB***                                       "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        getch();
        exit(0);
    default:
        system("cls");
        cout<<"                  **********INVALID KEYWORD*********                "<<endl;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                  ************ TRY AGAIN ***********"<<endl;
        break;
    }
}

void logadmin()
{
    int i=0,j=0,c;
    char uname[10];
    char pword[10];
    do
    {
        system("cls");
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"                               ADMINISTRATOR LOGIN                                        "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"\n\t\tENTER USERNAME     : "<<"\t";
        cin>>uname;
        cout<<"\n\t\tENTER PASSWORD     :  "<<"\t";
        while(i<5)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else cout<<"*";
            i++;
        }
        pword[i]='\0';
        i=0;
        system("cls");
        if(strcmp(uname,"rakib")==0 && strcmp(pword,"4321")==0)
        {
            administratormenu();
            break;
        }
        else
        {
            cout<<"     ****************Login Failed****************"<<endl;
            j++;
            getch();
            system("cls");
        }
    }
    while(j<=2);
    if(j>2)
    {
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"           SORRY YOU HAVE ENTERED THE WRONG USER NAME OR PASSWORD "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        getch();
        exit(0);
    }
    system("cls");

}

void logemployee()
{
    int i=0,j=0,c;
    char uname[10];
    char pword[10];
    do
    {
        system("cls");
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"                                  EMPLOYEE LOGIN                                 "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"\n\t\tENTER USERNAME     : "<<"\t";
        cin>>uname;
        cout<<"\n\t\tENTER PASSWORD     :  "<<"\t";
        while(i<5)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else cout<<"*";
            i++;
        }
        pword[i]='\0';
        i=0;
        system("cls");
        if(strcmp(uname,"shoibe")==0 && strcmp(pword,"1234")==0)
        {
            employeemenu();
            break;
        }
        else
        {
            cout<<"     ****************Login Failed****************"<<endl;
            j++;
            getch();
            system("cls");
        }
    }
    while(j<=2);
    if(j>2)
    {
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        cout<<"           SORRY YOU HAVE ENTERED THE WRONG USER NAME OR PASSWORD "<<endl;
        cout<<"     ----------------------------------------------------------------------               "<<endl;
        getch();
        exit(0);
    }
    system("cls");
}

int main()
{
    system("color 3E");
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"                                    WELCOME                                     "<<endl;
    cout<<"                                      TO                                        "<<endl;
    cout<<"                           EMPLOYEE MANAGEMENT SYSTEM                           "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<"          ----------------------------------------------------------------------               "<<endl;
    cout<<endl;
    cout<<endl;
    int n;
    cout<<"          PRESS 1 :- LOGIN MENU   ";
    cin>>n;
    switch(n)
    {
    case 1:
        mainmenu();
        break;
    default:
        exit(0);
        break;
    }
}

void administratormenu()
{
    cout<<"     ----------------------------------------------------------------------               "<<endl;
    cout<<"                               ADMINISTRATOR MENU                                         "<<endl;
    cout<<"     ----------------------------------------------------------------------               "<<endl;
    cout<<"     [1]- ADD NEW EMPLOYEE"<<endl;
    cout<<"     [2]- SEARCH EMPLOYEE PROFILE"<<endl;
    cout<<"     [3]- VIEW ALL EMPLOYEE PROFILE"<<endl;
    cout<<"     [4]- UPDATE EMPLOYEE PROFILE"<<endl;
    cout<<"     [5]- DELETE EMPLOYEE PROFILE"<<endl;
    cout<<"     [6]- CALCULATE SALARY PACKAGE"<<endl;
    cout<<"     [7]- LOGOUT"<<endl;
    cout<<"\n\n\n\n\n";
    int n;
    cout<<"     ENTER YOUR CHOICE:  ";
    cin>>n;
    switch(n)
    {
    case 1:
        system("cls");
        add_profile();
        break;
    case 2:
        system("cls");
        search_em_profile();
        break;
    case 3:
        system("cls");
        view_emp_profile();
        break;
    case 4:
        system("cls");
        update_emp_profile();
        break;
    case 5:
        system("cls");
        dlt_emp_profile();
        break;
    case 6:
        system("cls");
        cal_sal_pack();
        break;
    case 7:
        system("cls");
        logout_ad();
        break;
    default:
        cout<<"     **********INVALID NUMBER************   ";
        break;
    }
}

void add_profile()
{
    system("cls");
    cout<<"                 UNDER CONSTRUCTION. PLEASE WAIT......... "<<endl;
    cout<<"                 GO BACK TO THE MAIN MENU.... ";
    system("pause");
    system("cls");
    mainmenu();
}

void search_em_profile()
{
    system("cls");
    cout<<"                 UNDER CONSTRUCTION. PLEASE WAIT......... "<<endl;
    cout<<"                 GO BACK TO THE MAIN MENU.... ";
    system("pause");
    system("cls");
    mainmenu();
}

void view_emp_profile()
{
    system("cls");
    cout<<"                 UNDER CONSTRUCTION. PLEASE WAIT......... "<<endl;
    cout<<"                 GO BACK TO THE MAIN MENU.... ";
    system("pause");
    system("cls");
    mainmenu();
}

void update_emp_profile()
{
    system("cls");
    cout<<"                 UNDER CONSTRUCTION. PLEASE WAIT......... "<<endl;
    cout<<"                 GO BACK TO THE MAIN MENU.... ";
    system("pause");
    system("cls");
    mainmenu();
}

void dlt_emp_profile()
{
    system("cls");
    cout<<"                 UNDER CONSTRUCTION. PLEASE WAIT......... "<<endl;
    cout<<"                 GO BACK TO THE MAIN MENU.... ";
    system("pause");
    system("cls");
    mainmenu();
}

void cal_sal_pack()
{

}

void logout_ad()
{
    mainmenu();
}

void employeemenu()
{
    cout<<"     ----------------------------------------------------------------------               "<<endl;
    cout<<"                                  EMPLOYEE MENU                                         "<<endl;
    cout<<"     ----------------------------------------------------------------------               "<<endl;
    cout<<"     [1]- VIEW PROFILE"<<endl;
    cout<<"     [2]- VIEW SALARY PACKAGE"<<endl;
    cout<<"     [3]- LOGOUT"<<endl;
    cout<<"\n\n\n\n";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        system("cls");
        view_profile();
        break;
    case 2:
        system("cls");
        view_salary();
        break;
    case 3:
        system("cls");
        logout_emp();
        break;
    default:
        cout<<"    *****INVALID KEYWORD*****   "<<endl;
        break;
    }
}

void view_profile()
{

    system("cls");
    cout<<"\n\n\t\tUNDER CONSTRUCTION. PLEASE WAIT...."<<endl;
    cout<<"\n\tGo BACK TO THE MAIN MENU \t";
    system("pause");
    system("cls");
    mainmenu();

}

void view_salary()
{

    system("cls");
    cout<<"\n\n\t\tUNDER CONSTRUCTION. PLEASE WAIT...."<<endl;
    cout<<"\n\tGo BACK TO THE MAIN MENU \t";
    system("pause");
    system("cls");
    mainmenu();
}

void logout_emp()
{
    mainmenu();
}
