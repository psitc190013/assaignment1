#include <iostream>

using namespace std;
int main()
{
    double cash;
    double total1;
    double total2;
    double total3;
    double overall_total ;
    double balance = (cash-overall_total);
    {
       int printerprice = 150;
        int phoneprice = 120;
        int tableprice = 90;
        string buy2;
        string buy3;
        int qty1;
        int qty2;
        int qty3;

    const int Vat = 12/100;
        cout<< "WELCOME TO ASARE'S MALL\n"<<endl;

        string customer_name;
        cout << "Please what's your name?" <<endl;
        cin >> customer_name;

        double unique_ID;
        cout << "Please what's your unique ID?" <<endl;
        cin >> unique_ID;

        int cash;
        cout << "How much money do you have to spend?" <<endl;
        cin >> cash;

        int Printer1 = '1';
        int Phone1 = '2';
        int Table1 = '3';

        cout<< "Items sold in the shop are;" <<endl;
        cout<< "1. Printer at a price of 150" <<endl;
        cout<< "2. Phone at a price of 120" <<endl;
        cout<< "3. Table at a price of 90" <<endl;

        string buy1;
        cout << "Please what do you want to buy? Please type the name of the item you want to buy" <<endl;
        cin >> buy1;

        if(buy1=="Printer" || buy1=="printer"){

            cout<<"How many printers do you want to buy?"<<endl;
            cin>>qty1;

            cout<<"The amount to be paid is "<<endl;


            total1=(printerprice*qty1+Vat);
            cout<<total1<<endl;
        }
        else if(buy1=="Phone" || buy1=="phone"){

            cout<<"How many phones do you want to buy?"<<endl;
            cin>>qty2;

            cout<<"The amount to be paid is "<<endl;

            total2=(phoneprice*qty2+Vat);
            cout<<total2<<endl;
        }
        else if(buy1=="Table" || buy1=="table"){

            cout<<"How many tables do you want to buy?"<<endl;
            cin>>qty3;

            cout<<"The amount to be paid is "<<endl;

            total3=(tableprice*qty3+Vat);
            cout<<total3<<endl;
        }
        string option;
        {cout<<"Please would you want to buy anything else."<<endl;
        cout<<"Yes or No"<<endl;
        cin>>option;

        if(option=="Yes" || option=="yes"){
            cout<<"Please what else would you want to buy?"<<endl;
            cin>> buy2;

        if(buy2=="Printer" || buy2=="printer"){

            cout<<"How many printers do you want to buy?"<<endl;
            cin>>qty1;

            cout<<"The amount to be paid is "<<endl;


            total1=(printerprice*qty1+Vat);
            cout<<total1<<endl;
        }
        else if(buy2=="Phone" || buy2=="phone"){

            cout<<"How many phones do you want to buy?"<<endl;
            cin>>qty2;

            cout<<"The amount to be paid is "<<endl;

            total2=(phoneprice*qty2+Vat);
            cout<<total2<<endl;
        }
        else if(buy2=="Table" || buy2=="table"){

            cout<<"How many tables do you want to buy?"<<endl;
            cin>>qty3;

            cout<<"The amount to be paid is "<<endl;

            total3=(tableprice*qty3+Vat);
            cout<<total3<<endl;
        }
        }
        else if(option=="No" || option=="no"){
            cout<<"You're done with your purchases"<<endl;
        }
        string option;
        {cout<<"Please would you want to buy anything else"<<endl;
        cout<<"Yes or NO"<<endl;
        cin>>option;

        if(option=="Yes" || option=="yes"){
            cout<<"Please what else would you want to buy?"<<endl;
            cin >> buy3;

        if(buy3=="Printer" || buy3=="printer"){

            cout<<"How many printers do you want to buy?"<<endl;
            cin>>qty1;

            cout<<"The amount to be paid is "<<endl;


            total1=(printerprice*qty1+Vat);
            cout<<total1<<endl;
        }
        else if(buy3=="Phone" || buy3=="phone"){

            cout<<"How many phones do you want to buy?"<<endl;
            cin>>qty2;

            cout<<"The amount to be paid is "<<endl;

            total2=(phoneprice*qty2+Vat);
            cout<<total2<<endl;
        }
        else if(buy3=="Table" || buy3=="table"){

            cout<<"How many tables do you want to buy?"<<endl;
            cin>>qty3;

            cout<<"The amount to be paid is "<<endl;

            total3=(tableprice*qty3+Vat);
            cout<<total3<<endl;
        }
        }
        else if(option=="No" || option=="no"){
            cout<<"You're done with your purchases"<<endl;
        }


    }
}
        {
            cout<<"The total amount you have to pay is "<<endl;
            overall_total=(total1+total2+total3);
            cout<<overall_total<<endl;
        }
        {
        if(cash > overall_total){
            cout<<"Your balance is "<<endl;

            balance=(cash-overall_total);
            cout<<balance<<endl;
            }
        else if(cash < overall_total){
            cout<<"Your don't have enough money to purchase these items\n"<<endl;
        }
        else if(cash == overall_total){
            cout<<"You have no balance left\n"<<endl;
        }
        }
        cout<< "Please here is your receipt" <<endl;
        cout<< "Name of Customer:" <<endl;
        cout<< customer_name<<endl;
        cout<< "Unique ID" <<endl;
        cout<< unique_ID <<endl;
        cout<< "The items you bought are:"<<endl;
        cout<< buy1<<endl;
        cout<< buy2<<endl;
        cout<< buy3<<endl;
        cout<< "Vat is 12%" <<endl;
        cout<< "Your total cost is: "<<endl;
        cout<< overall_total <<endl;
        cout<< "Cash deposited: "<<endl;
        cout<< cash <<endl;
        cout<< "You have a balance of: "<<endl;
        cout<< balance <<endl;
}
}
