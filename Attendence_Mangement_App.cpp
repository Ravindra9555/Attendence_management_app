#include <bits/stdc++.h>
using namespace std;
int admin_view();
int student_view();
int student_login();
int check_credentials(string username, string password);
int get_student_by_rollno();
int delete_all_students();
int delete_student_by_rollno();
int check_list_of_all_student_registred();
int check_presence_count_by_rollno();
int get_list_of_students_with_their_presence_count();
int register_student();
int admin_login();
int mark_my_attendence(string username);
int count_my_attendence(string username);
int delay();

int delay()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20000; j++)
        {
            for (int k = 0; k < 20000; k++)
            {
            }
        }
    }
    cout << "Exiting Now ................";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20000; j++)
        {
            for (int k = 0; k < 20000; k++)
            {
            }
        }
    }
    return 0;
};

int admin_view()
{
    int goBack = 0;
    while (1)
    {
        system("cls");
        cout << "\n 1 Register  a student";
        cout << "\n 2 Delete all students name registered ";
        cout << "\n 3 Delete student by roll no ";
        cout << "\n 4 Check list of students registered by username";
        cout << "\n 5 Check presence count of student by roll no ";
        cout << "\n 6 Get list of student with their count";
        cout << "\n 0 Go back <-\n ";
        int choice;
        cout << "\n Enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            register_student();
            break;
        case 2:
            delete_all_students();
            break;
        case 3:
            delete_student_by_rollno();

            break;
        case 4:
            check_list_of_all_student_registred();
            break;
        case 5:
            check_presence_count_by_rollno();
            break;
        case 6:
            get_list_of_students_with_their_presence_count();
            break;

        case 0:
            goBack = 1;
            break;
        default:
            cout << "\n Invalid choice Enter again......";
            break;
        }
    }
    return 0;
}

int student_login()
{
    system("cls");
    cout << "\n ---------------- Student Login-----------";
    student_view();
    delay();
    return 0;
}
 int admin_login(){
    system("cls");
    cout<<"\n-------------- Admin Login ---------------";
    string username, password;
    cout<<"\n Enter username : ";
    cin>>username;
    cout<<"\n Enter password : ";
    cin>>password;
    if(username=="admin"&& password=="admin@1"){
        admin_view();
        getchar();
        delay();

    }
    else {
        cout<<"\n Error ! Invalid username or password. ";
        cout<<"\n press any key for main menu .";
        getchar();
        getchar();

    }
    return 0;
 }

 
int main()
{
    cout << "hello world";
}