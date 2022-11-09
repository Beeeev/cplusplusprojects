//Levi Bevins, Cable Company Lab, CIT 150

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Named constants - residential customers
    const double RES_BILL_PROC_FEES = 4.50;
    const double RES_BASIC_SERV_COST = 20.50;
    const double RES_COST_PREM_CHANNEL = 7.50;
    //Named constants - business customers
    const double BUS_BILL_PROC_FEES = 15.00;
    const double BUS_BASIC_SERV_COST = 75.00;
    const double BUS_BASIC_CONN_COST = 5.00;
    const double BUS_COST_PREM_CHANNEL = 50.00;
    //Variable declaration
    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;
    
    //set decimal places
        cout << fixed << showpoint;
        cout << setprecision(2);

        cout << "This program computes a cable "
            << "bill." << endl;

        //account number input
        cout << "Enter account number (an integer): ";
        cin >> accountNumber; 
        cout << endl;
        
        //customer type input
        cout << "Enter customer type: "
            << "R or r (Residential), "
            << "B or b (Business): ";
        cin >> customerType;
        cout << endl;

        //depending on customer type, a buisness or residential varibles are used
        switch (customerType)
        {
        case 'r':
        case 'R':
            
            //get number of channels
            cout << "Enter the number"
                << " of premium channels: ";
            cin >> numOfPremChannels;
            cout << endl;
            amountDue = RES_BILL_PROC_FEES 
                + RES_BASIC_SERV_COST
                + numOfPremChannels *
                RES_COST_PREM_CHANNEL;
            //display number and amount due
            cout << "Account number: "
                << accountNumber
                << endl;
            cout << "Amount due: $"
                << amountDue
                << endl;
            break;
        case 'b':
        case 'B':
            //user input for number of services
            cout << "Enter the number of basic "
                << "service connections: "; 
            cin >> numOfBasicServConn; 
            cout << endl;
            cout << "Enter the number"
                << " of premium channels: ";
            cin >> numOfPremChannels; 
            cout << endl;
            if (numOfBasicServConn <= 10)
                amountDue = BUS_BILL_PROC_FEES
                + BUS_BASIC_SERV_COST
                + numOfPremChannels *
                BUS_COST_PREM_CHANNEL;
            else
                amountDue = BUS_BILL_PROC_FEES
                + BUS_BASIC_SERV_COST
                + (numOfBasicServConn - 10) *
                BUS_BASIC_CONN_COST
                + numOfPremChannels *
                BUS_COST_PREM_CHANNEL;
            cout << "Account number: "
                << accountNumber << endl;
            cout << "Amount due: $" << amountDue
                << endl;
            break;
        default:
            cout << "Invalid customer type." << endl;
        }//end switch
}

