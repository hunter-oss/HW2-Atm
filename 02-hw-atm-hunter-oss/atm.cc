/**
 *   @file: atm.cc
 * @author: Hunter Douglas
 *   @date: Febuary 10th 2021
 *  @brief: Make an atm machine that, with the right pin, allows money to be withdrawn
 */

 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
 using namespace std;


int main(int argc, char const *argv[]) {
    int pin;
    double ammount;
    double finlbal;
    double balance = 1000.00;
    int count = 0;
    do{
        cout << "**Welcome to Bobcats Bank Atm machine**" << endl;
        cout << "Please enter your PIN number: ";
        cin >> pin;

        if(pin == 1234){
            cout << "Please enter amount you'd like to withdraw: ";
            cin >> ammount;
             if(ammount > balance){
                cout << "You do not have enough funds, please try again!" << endl;
                
            }
            else{
                finlbal = (balance - ammount);
                    cout << "Your current balance is " << fixed << setprecision(2) << finlbal << endl;
                return(0);
            }

        }
        else{
            count++;
            if(count == 1){
                cout << "Incorrect PIN please re-enter PIN" << endl;
                cout << "You have two tries remaining" << endl;
            }
             if(count == 2){
                 cout << "Incorrect PIN please re-enter PIN" << endl;
                 cout << "You have one tries remaining" << endl;
            
            } 
             if(count == 3){
                 cout << "Too many tries, your account has been locked.";
             }        
        }


    }while(count < 3);
   
    return 0;
} /// main