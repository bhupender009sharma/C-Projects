#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class user{
    private:
        double rate100,rate200,rate500,rate1;
    public:
        void getrate();
        void viewrate();
        void getuserID();
        void bill();
};

void user::getrate(){
    cout<<"ENTER THE RATE FOR USING 0-100 UNITS"<<endl;
    cin>>rate100;
    cout<<"ENTER THE RATE FOR USING 100-200 UNITS"<<endl;
    cin>>rate200;
    cout<<"ENTER THE RATE FOR USING 200-500 UNITS"<<endl;
    cin>>rate500;
    cout<<"ENTER THE RATE FOR USING MORE THAN 500 UNITS"<<endl;
    cin>>rate1;
}
void user::viewrate(){
    cout<<"RATE FOR USING 0-100 UNITS"<<endl;
    cout<<rate100<<endl;
    cout<<"RATE FOR USING 100-200 UNITS"<<endl;
    cout<<rate200<<endl;
    cout<<"RATE FOR USING 200-500 UNITS"<<endl;
    cout<<rate500<<endl;
    cout<<"RATE FOR USING MORE THAN 500 UNITS"<<endl;
    cout<<rate1<<endl;
}
void user::bill(){
    double units,amt;
    cout<<"ENTER THE UNITS USED"<<endl;
    cin>>units;
    if(units<0){
        cout<<"looks like you are giving us electricity ;-)"<<endl;
    }
    else if(units<=100){
        amt= units*rate100;
        cout<<"amount to be paid is Rs."<<amt<<endl;
        cout<<"for god sake watch some T.V. ;-0"<<endl;
        cout<<"Thank you for using our services :->"<<endl;
    }
    else if(units<=200 && units>100){
        amt=units*rate200;
        cout<<"amount to be paid is Rs."<<amt<<endl;
        cout<<"looks like you are using electricity carefully ;-0"<<endl;
        cout<<"Thank you for using our services :->"<<endl;
    }
    else if(units<=500 && units>200){
        amt=units*rate500;
        cout<<"amount to be paid is Rs."<<amt<<endl;
        cout<<"get outside, don't play videogames all night long ;-0"<<endl;
        cout<<"Thank you for using our services :->"<<endl;
    }
    else{
        amt=units*rate1;
        cout<<"amount to be paid is Rs."<<amt<<endl;
        cout<<"it seems that you have a lot of money, use less electricity sucker!!! ;-0"<<endl;
        cout<<"Thank you for using our services :->"<<endl;
    }
}
int main() {
	cout<<"\t\t\tWELCOME TO ELECTRIC BILL GENERATOR"<<endl;
    class user u;
while(1){
    int choice;
    cout<<"\n1.SET UNIT RATES \n2.VIEW UNIT RATES \n3.GENERATE BILL \n4.QUIT"<<endl;
    cin>>choice;

    switch(choice){
        case 1: u.getrate();
                break;

        case 2: u.viewrate();
                break;

        case 3: u.bill();
                break;

        case 4: return 0;

        default: cout<<"i think you don't understand english"<<endl;
                break;
    }
}
	return 0;
}

















