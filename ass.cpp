#include <iostream>
using namespace std;
int main(){
    int a,n;
    double k;
    cout<<"Enter a distance in meters: ";
    cin>>a;
    cout<<"1.Conver to kilometres\n";
    cout<<"2.Convert to inches\n";
    cout<<"3.Covert to feet\n";
    cout<<"4.Quit the program.\n";
    cout<<"Enter your choice : ";
    cin>>n;
    while(n!=4){
        if(n==1){
            k=a*0.001;
            cout<<a<<" meters is "<<k<<" kilogram\n";
        }
        else if(n==2){
            k=a*39.37;
            cout<<a<<" meters is "<<k<<" inches\n";
        }
        else if(n==3){
            k=a*3.281;
            cout<<a<<" meters is "<<k<<" feet\n";
        }
        else {
            cout<<"ERROR! Invalid Input.\n";
        }
        cout<<"1.Conver to kilometres\n";
        cout<<"2.Convert to inches\n";
        cout<<"3.Covert to feet\n";
        cout<<"4.Quit the program.\n";
        cout<<"Enter your choice : ";
        cin>>n;
    }
    cout<<"BYE!";
    return 0;
}