#include<iostream>
#include<fstream>

using namespace std;

class Account {
    int Id;
    string Name;
    float Balance;
    
 public:
     Account(int id, string name, float balance)
     {
         Id = id;
         Name = name;
         Balance = balance;
     }
     
     void deposit(double depositAmount)
     {
         if (depositAmount > 0)
         {
             Balance += depositAmount;
         }
    }
    void withdraw(double withdrawAmount){
        if (withdrawAmount < Balance - 10){
            Balance -= withdrawAmount;
        }
    }
    void display()
    {
        ofstream Myfile("myAcount.txt");
        Myfile<<"ID : "<<Id<<endl;
        Myfile<<"Name : "<<Name<<endl;
        Myfile<<"Balance : "<< Balance<<endl;
        Myfile.close();
    }
    void SetId(int id){
        Id = id;
    }
    int getId(){
        return Id;
    }
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setBalance(float balance){
        Balance  = balance;
    }
    float getBalance (){
        return Balance;
    }
};
int main (){

    Account account1 = Account(10042021, "charity", 2020.04);
    account1.deposit(100);
    account1.withdraw(200);
    account1.display();
    Account account2 = Account(10042022, "sports",0.0);
    account2.display();
    account2.deposit(10000);
    account2.display();

    account2.display();

    ofstream history("history.txt", ios::app);


    return 0 ;
}