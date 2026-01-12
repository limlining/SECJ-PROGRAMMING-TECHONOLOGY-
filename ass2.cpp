#include <iostream> //to allow use of count,cin and endl
#include<cmath>//to allow library function like round(),int()
#include<iomanip>
using namespace std;
int main(){
    //declare variable which is age,gender,height,weight,BMR,data
    int age;
    char gender;
    int height;
    int weight;
    double BMR;
    char data;
    // Loop continues as long as the user enters 'Y' or 'y'
    do{
    cout<<"Basal Metabolic Rate (BMR) Calculator"<<endl<<endl;
    //do-while loop to ensure the user enters the correct age between 15-80
    do{
        cout<<"Age [15-80]: ";
        cin>>age;
    }while(age<15||age>80);
    //do-while loop to ensure the user enters the correct gender which is f/F/M/m
    do{
        cout<<"Gender [F @ M]: ";
        cin>>gender;
    }while(gender!='F'&&gender!='f'&&gender!='m'&&gender!='M');
    //display height
    cout<<"Height (cm):";
    cin>>height;//user input height
    //display weight
    cout<<"Weight (kg):";
    cin>>weight;//user input weight
    cout<<endl;
    //check if the user is Female/Male and calculate BMR
    if(gender=='f'||gender=='F')
     BMR=10*weight+6.25*height-5*age-161;
    else 
      BMR=0*weight+6.25*height-5*age+5;
    cout<<"BMR = " <<BMR<<"Calories/ day (using Mifflin-St Jeor Equation) "<<endl;
    cout<<"\nDaily calorie needs based on activity level"<<endl<<"Activity Level Calorie"<<setw(50)<<"Calorie"<<endl;
    cout<<"\nSedentary: little or no exercise "<<setw(36)<<round(BMR*1.2);
    cout<<"\nExercise 1-3 times/week " <<setw(45)<<round(BMR*1.375);
    cout<<"\nExercise 4-5 times/week "<<setw(45)<<int(BMR*1.465);

    cout<<"\nDaily exercise or intense exercise 3-4 times/week "<<setw(19)<<int(BMR*1.55);
    cout<<"\nIntense exercise 6-7 times/week "<<setw(37)<<int(BMR*1.725);
    cout<<"\nVery intense exercise daily, or physical job "<<setw(24)<<int(BMR*1.9)<<endl;
    cout<<"\nExercise: 15-30 minutes of elevated heart rate activity.\nIntense exercise: 45-120 minutes of elevated heart rate activity.\nVery intense exercise: 2+ hours of elevated heart rate activity.  "<<endl;
    cout<<endl;
    do{
    cout<<"Do you want to enter other data? [Y @ N]:";
    cin>>data;}while(data!='Y'&& data!='y' && data!='N' && data!='n');//loop again when enter other than 'N'/'n'/'Y'/'y'
    }while(data=='Y'||data=='y');
    cout<<"\nThank you :)";
}