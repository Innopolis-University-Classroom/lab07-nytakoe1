#include <iostream>
#include <cmath>
using namespace std;
#include <string>
template < typename T>
T newTip(T bill)
{
    T tip;
    T tiptotal;
    T total;
    cout<< "Enter Tip: "<<"%";
    cin>> tip;
    if (tip<20)
    {
        cout<< "\n Oh you can give a better tip than that!\n";
        char ans;
        do
        {
            cout<< "Do you want to continue (Y/N)?\n";
            cout<< "You must type a 'Y' or an 'N'.\n";
            cin >> ans;
        }
        while((ans !='Y')&&(ans !='N')&&(ans !='y')&&(ans !='n'));
        return tip;
    }
    else
    {
        tiptotal = bill * (tip/100.);
        total = (tiptotal + bill);
        cout << "The total Bill with Tip is: "<<"$"<< total << "\n\n";
        cout << "You are helping me through College!! Thankyou!!\n";
    }
    return total;

}
int main() {

    string bill;
    cout<<"\n\nWelcome to tip Calculator\n";
    cout <<"------------------------------\n";
    cout << "Enter bill amount: "<<"$";
    cin>> bill;
    bool find = false;
    for (int i = 0; i < bill.length(); i++)
    {
        if (!isdigit(bill[i]))
        {
            find = true;
        }
    }
    if(find==true){
        newTip(stoi(bill));
    }
    else{
        newTip(atof(bill.c_str()));
    }

    return 0;
}
