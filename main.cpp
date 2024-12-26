#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

void registration()
{
    char email[50];
    char username[20];
    char password[15];
    cout<<"\nWelcome to registration\n";
    cout<<"Enter email: \n";
    cin>>email;
    cout<<"Create username: \n";
    cin>>username;
    cout<<"Create password: \n";
    cin>>password;
    getchar();
    
    ofstream outFile("register.txt", ios::app);
    if (outFile.is_open()) 
    {
        outFile<<email<<" "<<username<<" "<<password<<endl;
        outFile.close();
    } 
    else 
    {
        cout << "Error creating the file!" << endl;
    }
}
void login()
{
    char username[20];
    char password[15];
    char fileUsername[20];
    char filePassword[15];
    char fileEmail[50];       // to skip the email field while reading the file
    bool loginSuccessful=false;

    cout<<"\nWelcome to login\n";
    cout<<"Username: \n";
    fgets(username,20,stdin);
    username[strcspn(username, "\n")] = 0;
    cout<<"Password: \n";
    fgets(password,15,stdin);
    password[strcspn(password, "\n")] = 0;
    // getchar();

    ifstream inFile("register.txt");
    if(inFile.is_open())
    {
        while(inFile>>fileEmail>>fileUsername>>filePassword)
        {
            if(strcmp(username,fileUsername)==0 && strcmp(password,filePassword)==0)
            {
                loginSuccessful=true;
                break;
            }
        }
        inFile.close();

        if(loginSuccessful)
            cout<<"Login successful welcome, "<<username<<"!\n";
        else
            cout<<"Error: Invalid username or password.\n";
    }
    else
        cout << "Error: Unable to open the file for reading.\n";

}
int main()
{
    int choice=0;
    while(choice!=3)
    {
        cout<<"\nYour Welcome\n";
        cout<<"1. Register\n";
        cout<<"2. Login\n";
        cout<<"3. Exit\n";
        cout<<"Ener your choice: ";
        cin>>choice;
        getchar();

        switch(choice)
        {
            case 1:
                registration();
                break;
            case 2:
                login();
                break;
            case 3:
                break;
            default:
                cout<<"invalid choice\n";
        }
    }
}
