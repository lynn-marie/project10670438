#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


struct student {
    string fname;
    string lname;
    string studId;
    string course;
    string newfname;
    string newlname;
    string newstudId;
    string newcourse;
    string grade;
}studentData;

struct teacher {
    string fst_name;
    string lst_name;
    string staId;
    string subj;
    string addrs;
    string cel_no;
    string newfst_name;
    string newlst_name;
    string newstaId;
    string newsubj;
    string newaddrs;
    string newcel_no;
}tech[50];



int main() {
    char choice;
    char option;


    while (1) {
        system("cls");

        cout << "school management system" << endl;
        cout << "Welcome!!" << endl;
        cout << "1. Student" << endl;
        cout << "2. Staff" << endl;
        cout << "3. Courses" << endl;
        cout << "4. Exit program" << endl << endl;
        cin >> choice;

        system("cls");

        switch(choice) {
            case '1':
                while(1) {
                    system("cls");
                    cout << "STUDENT INFORMATION" << endl;
                    cout << "Enter your choice" << endl;
                    cout << "1. Add student" << endl;
                    cout << "2. Edit student" << endl;
                    cout << "3. Delete student" << endl;
                    cout << "4. Record student grade" << endl;
                    cout << "5. Print student academic record" << endl;
                    cout << "6. Jump to main menu" << endl;
                    cin >> choice;

                    switch (choice) {
                        case '1':
                            cout << "Enter student first name" << endl;
                            cin >> fname;
                            cout << "Enter student last name" << endl;
                            cin >> lname;
                            cout << "Enter student ID number" << endl;
                            cin >> studId;
                            cout << "Student added successfully!" << endl;


                        case '2':
                            cout << "Enter new first name" << endl;
                            cin >> newfname;
                            cout << "Enter new last name" << endl;
                            cin >> newlname;
                            cout << "Enter new student ID" << endl;
                            cin >> newstudId;
                            cout << "Student successfully edited!" << endl;


                        case '3':
                            cout << "Enter ID of student to delete" << endl << endl;
                            cin >> studId;
                            cout << fname;
                            cout << lname;
                            cout << studId;
                            cout << "Press Y to delete student or N to cancel" << endl;
                            cin >> option;
                            if(option == 'Y') {
                                cout << "Student successfully deleted" << endl;
                            }else if(option == 'N') {
                                cout << "Delete cancelled" << endl << endl;
                            }


                        case '4':
                            cout << "Enter your grade" << endl;
                            cin >> grade;
                            cout << "Grade successfully added, your grade is " << grade << endl;

                        case '5':
                            ofstream studentFile;
                            studentFile.open("academic record.txt");
                            studentFile << "STUDENT ACADEMIC RECORD" << endl;
                            studentFile << "First name : " << fname << endl;
                            studentFile << "Last name : " << lname << endl;
                            studentFile << "ID number : " << studId << endl;
                            studentFile << "Grade : " << grade << endl;
                            studentFile.close();

                            cout << "Student academic record successfully printed!" << endl;


                        case '6':
                            break;
                    };
                };

            case '2':
                while(1) {
                    system("cls");
                    cout << "TEACHERS" << endl;
                    cout << "Enter your choice" << endl;
                    cout << "1. Add teacher" << endl;
                    cout << "2. Edit teacher" << endl;
                    cout << "3. Delete teacher" << endl;
                    cout << "4. Jump to main" << endl;
                    cin >> choice;
                }

                switch(choice) {
                    case '1':
                        cout << "Enter staff first name" << endl;
                        cin >> fst_name;
                        cout << "Enter staff last name" << endl;
                        cin >> lst_name;
                        cout << "Enter staff ID number" << endl;
                        cin >> staId;
                        cout << "Enter staff subject" << endl;
                        cin >> subj;
                        cout << "Enter staff address" << endl;
                        cin >> addrs;
                        cout << "Enter staff cell number" << endl;
                        cin >> cel_no;
                        cout << "Staff added successfully!" << endl;


                    case '2':
                        cout << "Enter new first name" << endl;
                        cin >> newfst_name;
                        cout << "Enter new last name" << endl;
                        cin >> newlst_name;
                        cout << "Enter new staff ID" << endl;
                        cin >> newstaId;
                        cout << "Enter new staff subject" << endl;
                        cin >> newsubj;
                        cout << "Enter new staff address" << endl;
                        cin >> newaddrs;
                        cout << "Enter new staff cell number" << endl;
                        cin >> newcel_no;
                        cout << "Staff successfully edited!" << endl;


                    case '3':
                        cout << "Enter staff ID to delete" << endl << endl;
                        cin >> staId;
                        cout << fst_name;
                        cout << lst_name;
                        cout << staId;
                        cout << "Press Y to delete student or N to cancel" << endl;
                        cin >> option;
                        if(option == 'Y') {
                            cout << "Student successfully deleted" << endl;
                        }else if(option == 'N') {
                            cout << "Delete cancelled" << endl << endl;
                        }

                    case '4':
                        break;
                }
                continue;


            case '3':
                while(1) {
                    system("cls");
                    cout << "COURSES" << endl;
                    cout << "Enter your choice" << endl;
                    cout << "1. Add course" << endl;
                    cout << "2. Edit course" << endl;
                    cout << "3. Delete course" << endl;
                    cout << "4. Jump to main" << endl;
                    cin >> choice;
                }

                switch(choice) {
                    case '1':
                        cout << "Enter course name and code" << endl;
                        cin >> course;
                        cout << "Course added successfully!" << endl;

                    case '2':
                        cout << "Enter new course code and name" << endl;
                        cin >> newcourse;
                        cout << "Course successfully edited!" << endl;

                    case '3':
                        cout << "Enter name and code of course to delete" << endl;
                        cin >> course;
                        cout << "Press Y to delete course or N to cancel" << endl;
                        cin >> option;
                        if(option == 'Y') {
                            cout << "Course successfully deleted" << endl;
                        }else if(option == 'N') {
                            cout << "Delete cancelled" << endl << endl;
                        }
                }

            case '4':
                break;
        }
    }



    return 0;
}
