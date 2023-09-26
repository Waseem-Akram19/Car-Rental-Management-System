#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<fstream>
using namespace std;
class car
{
private:
    int no;
    string name;
    string color;
    int distance;
    int price;
public:
    void returning(car);
}ob1;
class info
{
    string name;
    int age, carno;
    string address;
    double number;
    int days;
public:
    void input(int n)
    {
        cout << "\nENTER THE NAME: ";
        cin.ignore();
        getline(cin, name);
        cout << "\nENTER THE AGE: ";
        cin >> age;
        if (age < 18)
        {
            cout << "\n\nYOU ARE UNDERAGE THEREBY NOT ALLOWED TO DRIVE";
            exit(0);
        }
        cout << "\nENTER THE ADRESS: ";
        cin.ignore();
        getline(cin, address);
        cout << "\nENTER THE PHONE NUMBER: ";
        cin >> number;
        carno = n;
        cout << "\nINPUT THE NO OF DAYS: ";
        cin >> days;
    }
    void display3()
    {
        cout << carno
            << setw(14) << name
            << setw(7) << age
            << setw(17) << address
            << setw(15) << number
            << setw(10) << days;
    }
}ob2;
void displaySportsCar() {
    int arr1[4] = { 1234,1235,1236,1237 };
    string arr2[4] = { "Mazda MX - 5","Porsche 911","Alpine A110","McLaren 570S" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "\n\t\t\t | SPORTS CARS |" << endl << endl;
    cout << "CAR NO" << setw(20) << "NAME OF CARS " << setw(20) << "COLORS" << setw(15)
        << "DISTANCES" << setw(15) << "PRICES" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << setw(20);
        cout << arr2[i] << setw(20);
        cout << arr3[i] << setw(15);
        cout << arr4[i] << setw(15);
        cout << arr5[i] << endl;
    }
}
void displaySportsCar(int no) {
    int arr1[4] = { 1234,1235,1236,1237 };
    string arr2[4] = { "Mazda MX - 5","Porsche 911","Alpine A110","McLaren 570S" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "CAR NO" << setw(20) << "NAME OF CAR " << setw(20) << "COLOR" << setw(15)
        << "DISTANCE" << setw(15) << "PRICE PER DAY" << endl;
    for (int i = 0; i < 4; i++) {
        if (no == arr1[i])
        {
            cout << arr1[i] << setw(20);
            cout << arr2[i] << setw(20);
            cout << arr3[i] << setw(15);
            cout << arr4[i] << setw(15);
            cout << arr5[i] << endl;
        }
    }
}
void displayLeisureCars(int no)
{
    int arr1[4] = { 2345,2346,2347,2348 };
    string arr2[4] = { "Ferrari", "Aston", "Alfa", "Audi" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "CAR NO" << setw(20) << "NAME OF CAR " << setw(20) << "COLOR" << setw(15)
        << "DISTANCE" << setw(15) << "PRICE PER DAY" << endl;
    for (int i = 0; i < 4; i++) {
        if (no == arr1[i])
        {
            cout << arr1[i] << setw(20);
            cout << arr2[i] << setw(20);
            cout << arr3[i] << setw(15);
            cout << arr4[i] << setw(15);
            cout << arr5[i] << endl;
        }
    }
}
void displayLeisureCar() {
    int arr1[4] = { 2345,2346,2347,2348 };
    string arr2[4] = { "Ferrari", "Aston", "Alfa", "Audi" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "\n\t\t\t | LEISURE CARS |" << endl << endl;
    cout << "CAR NO" << setw(20) << "NAME OF CARS " << setw(20) << "COLORS" << setw(15)
        << "DISTANCES" << setw(15) << "PRICES" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << setw(20);
        cout << arr2[i] << setw(20);
        cout << arr3[i] << setw(15);
        cout << arr4[i] << setw(15);
        cout << arr5[i] << endl;
    }
}
void displaySuvCar() {
    int arr1[4] = { 6784,6785,6786,6789 };
    string arr2[4] = { "lamborghini diablo","ford f-150 raptor","porsche 911 carrera","jensen interceptor" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "\n\t\t\t | SUV CARS |" << endl << endl;
    cout << "CAR NO" << setw(20) << "NAME OF CARS " << setw(20) << "COLORS" << setw(15)
        << "DISTANCES" << setw(15) << "PRICES" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << setw(20);
        cout << arr2[i] << setw(20);
        cout << arr3[i] << setw(15);
        cout << arr4[i] << setw(15);
        cout << arr5[i] << endl;
    }
}
void displaySuvCars(int no)
{
    int arr1[4] = { 6784,6785,6786,6789 };
    string arr2[4] = { "lamborghini diablo","ford f-150 raptor","porsche 911 carrera","jensen interceptor" };
    string arr3[4] = { "BLACK","BLUE","RED","YELLOW" };
    int arr4[4] = { 1000,2000,3000,4000 };
    int arr5[4] = { 2000,3000,4000,5000 };
    cout << "SL NO" << setw(20) << "NAME OF CAR " << setw(20) << "COLOR" << setw(15)
        << "DISTANCE" << setw(15) << "PRICE PER DAY" << endl;
    for (int i = 0; i < 4; i++) {
        if (no == arr1[i])
        {
            cout << arr1[i] << setw(20);
            cout << arr2[i] << setw(20);
            cout << arr3[i] << setw(15);
            cout << arr4[i] << setw(15);
            cout << arr5[i] << endl;
        }
    }
}
void car::returning(car ob1)
{
    system("cls");
    cout << "WHAT TYPE OF CAR DID YOU RENT";
    cout << "\n  1.SPORTS CAR";
    cout << "\n  2.LEISURE CAR";
    cout << "\n  3.SUV";
    int op2;
    cout << "\n  ENTER YOUR OPTION : ";
    cin >> op2;
    if (op2 == 1) {
        cout << "\nENTER THE REFERENCE NO:";
        cin >> ob1.no;
        cin.ignore();
        cout << "\nENTER THE NAME OF THE CAR  : ";
        getline(cin, name);
        cout << "ENTER THE COLOR OF THE CAR : ";
        getline(cin, color);
        cout << "\nENTER THE DISTANCE TRAVELLED : ";
        cin >> distance;
        displaySportsCar(ob1.no);
        cout << "\n\t----------THANK YOU FOR USING OUR CAR-------------" << endl;
    }
    else if (op2 == 2) {
        cout << "\nENTER THE REFERENCE NO:";
        cin >> ob1.no;
        cin.ignore();
        cout << "\nENTER THE NAME OF THE CAR  : ";
        getline(cin, name);
        cout << "ENTER THE COLOR OF THE CAR : ";
        getline(cin, color);
        cout << "\nENTER THE DISTANCE TRAVELLED : ";
        cin >> distance;
        displayLeisureCars(ob1.no);
        cout << "\n\t----------THANK YOU FOR USING OUR CAR-------------" << endl;
    }
    else if (op2 == 3) {
        cout << "\nENTER THE REFERENCE NO:";
        cin >> ob1.no;
        cin.ignore();
        cout << "\nENTER THE NAME OF THE CAR  : ";
        getline(cin, name);
        cout << "ENTER THE COLOR OF THE CAR : ";
        getline(cin, color);
        cout << "\nENTER THE DISTANCE TRAVELLED : ";
        cin >> distance;
        displaySuvCars(ob1.no);
        cout << "\n\t----------THANK YOU FOR USING OUR CAR-------------" << endl;
    }
    cout << "\n\nPress 0 For Back" << endl;
    system("pause>1");
}
void rent(int opt)
{
    system("cls");
    if (opt == 1) {
        displaySportsCar();
    }
    else if (opt == 2) {
        displayLeisureCar();
    }
    else if (opt == 3) {
        displaySuvCar();
    }
    int no;
    cout << "\nPlease Enter The Car No. For Selecting : ";
    cin >> no;
    cout << "\n\t*********Car You Selected*********" << endl << endl;
    if (opt == 1) {
        displaySportsCar(no);
    }
    else if (opt == 2) {
        displayLeisureCars(no);
    }
    else if (opt == 3) {
        displaySuvCars(no);
    }
    cout << "\n\n=======Enter Your Information========" << endl << endl;
    ob2.input(no);
    cout << "\nCar No" << setw(10) << "Name" << setw(10) << "Age" << setw(12) 
    << "Address" << setw(18) << "Number" << setw(13) << "Days" << endl;
    ob2.display3();
    cout << "\n\n\t----------Thank You For Service-----------" << endl << endl;
    cout << "\nPress 0 For Back " << endl;
    system("pause>1");
    system("cls");
}
int main() {
    int op;
    car obj1;
    while (1) {
        cout << "\n\t\t | Welcome To Car Rental Management System |" << endl << endl;
        cout << "WHAT DO YOU WANT TO DO:";
        cout << "\n1.RENT A CAR";
        cout << "\n2.RETURN A CAR";
        cout << "\n3.EXIT";
        cout << "\nENTER THE OPTION : ";
        cin >> op;
        switch (op)
        {
        case 1:
            system("cls");
            cout << "\n\t\t\t| SELECTING THE TYPE OF CAR |" << endl << endl;
            cout << "\n DO YOU WANT TO RENT A:";
            cout << "\n 1.SPORTS CAR";
            cout << "\n 2.LEISURE CAR";
            cout << "\n 3.SUV";
            int op2;
            cout << "\nENTER YOUR OPTION:";
            cin >> op2;
            switch (op2) {
                {
            case 1:
                rent(op2);
                break;
            case 2:
                rent(op2);
                break;
            case 3:
                rent(op2);
                break;
                }
            default:
                break;
            }
            break;
        case 2: {
            obj1.returning(obj1);
            system("cls");
            break;
        }
        case 3:
            exit(0);
            break;
        }
    }
   
}
