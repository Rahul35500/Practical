//Q 2.Write a C++ program to Deposit amount and withdraw options in bank transactions for
// saving and current account and display the total balance using friend functions.
#include<iostream>
using namespace std;
class SavingAccount;
class CurrentAccount
{
    private:
    float balanance;
    public:
    void deposit()
    {
        float DepositeCurrentAccount;
        cout<<"CURRENT ACCOUNT TRANSACTION:"<<endl;
        cout<<"Enter the amount for deposite:"<<endl;
        cin>>DepositeCurrentAccount;
        balanance =balanance+DepositeCurrentAccount;;
    }
    void Withdraw()
    {
        float WithdrawCurrentAccount;
         cout<<"Enter the amount for Withdraw"<<endl;
         cin>>WithdrawCurrentAccount;
         balanance =balanance-WithdrawCurrentAccount;
    }
    friend void Display(SavingAccount s,CurrentAccount c);
};
class SavingAccount
{
    private:
    float balanance;
    public:
    void deposit()
    {
        cout<<"SAVING ACCOUNT TRANSACTION:"<<endl;
        float DepositeSavingAccount;
        cout<<"Enter the amount for deposite:"<<endl;
        cin>>DepositeSavingAccount;
        balanance =balanance+DepositeSavingAccount;;
    }
    void Withdraw()
    {
        float WithdrawSavingAccount;
         cout<<"Enter the amount for Withdraw"<<endl;
         cin>>WithdrawSavingAccount;
         balanance =balanance-WithdrawSavingAccount;
    }
    friend void Display(SavingAccount s,CurrentAccount c);

};
void Display(SavingAccount s,CurrentAccount c)
{
    cout<<"The total balance in saving and current: "<<s.balanance+c.balanance<<endl;
}
int main()
{
    CurrentAccount c;
    SavingAccount s;
    c.deposit();
    c.Withdraw();
    s.deposit();
    s.Withdraw();
    Display(s,c);

}