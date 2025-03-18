#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
string name[100];
string phoneNo[100];
string mobileNo[100];
string faxNo[100];
string email[100];
string adress[100];
int counter =-1;
bool Continue = true;
int checkContact(string tempName){
    for(int i=0;i<counter;i++){
        if(tempName==name[i]){
            return 0;
        }
    }
    return 1;
}
void addContact(){
    string tempName;
    cout<<"Enter Name: ";
    cin>>tempName;
    if(checkContact(tempName)==1){
        counter++;
        name[counter]=tempName;
    }
    else{
        cout<<"This name is already exist."<<endl;
        return;
    }
    cout<<"Enter phoneNo: ";
    cin>>phoneNo[counter];
    cout<<"Enter mobileNo: ";
    cin>>mobileNo[counter];
    cout<<"Enter faxNo: ";
    cin>>faxNo[counter];
    cout<<"Enter  email: ";
    cin>>email[counter];
    cout<<"Enter adress: ";
    cin>>adress[counter];
    cout<<"Name : "<< name[counter]<<endl;
    cout<<"MobileNo : "<< mobileNo[counter]<<endl;
    cout<<"FaxNo : "<< faxNo[counter]<<endl;          
    cout<<"Email : "<< email[counter]<<endl;
    cout<<"Adress : "<< adress[counter]<<endl;
}
void listContact(){
    for(int i=0;i<counter;i++){
    cout<<i+1<<". Contact: "<<endl;
    cout<<"Name : "<< name[i]<<endl;
    cout<<"MobileNo : "<< mobileNo[i]<<endl;
    cout<<"FaxNo : "<< faxNo[i]<<endl;          
    cout<<"Email : "<< email[i]<<endl;
    cout<<"Adress : "<< adress[i]<<endl<<endl;
    }
}
void searchContact(){
    string nameS;
    cout <<"Which name you want to search: ";
    cin>>nameS;
    for(int i =0;i<counter;i++){
        if(nameS==name[i]){
        cout<<"Name : "<< name[i]<<endl;
        cout<<"MobileNo : "<< mobileNo[i]<<endl;
        cout<<"FaxNo : "<< faxNo[i]<<endl;          
        cout<<"Email : "<< email[i]<<endl;
        cout<<"Adress : "<< adress[i]<<endl;
        break;
        }
    }
}
void updateContact(){
    string nameS;
    cout<<"Which contact you wanna update, please enter the name: ";
    cin>>nameS; 
    for(int i =0;i<counter;i++){
        if(nameS==name[i]){
        cout<<"Enter new Name : ";
        cin>>name[i];
        cout<<"Enter new MobileNo : ";
        cin>>mobileNo[i];
        cout<<"Enter new FaxNo : ";
        cin>>faxNo[i];          
        cout<<"Enter new Email : ";
        cin>>email[i];
        cout<<"Enter new Adress : ";
        cin>>adress[i];
        break;
        }
    }
}
void deleteContact(){    
    string nameS;
    cout<<"Which contact you wanna delete, please enter the name: ";
    cin>>nameS; 
    for(int i =0;i<counter;i++){
        if(nameS==name[i]){
        name->erase(i);
        mobileNo->erase(i);
        faxNo->erase(i);
        email->erase(i);
        adress->erase(i);
        break;
        }
    }
}

void logic(){
    int a;
    cout <<"1. add contact"<<endl<<"2. list contacts"<<endl<<"3. search contact"<<endl<<"4. update contact"<<endl<<"5. delete contact"<<endl<<"6. exit"<<endl<<endl;
    cout<<"Enter option(1-6): ";
    cin>>a;
    cout<<endl;
    switch (a)
    {
    case 1:
        addContact();
        cout<<"Contact added succesfully..."<<endl;
        cout<<"Press any key to continue";
        getch();
        break;
    case 2:
        listContact();
        cout<<"All contacts are listed"<<endl;
        cout<<"Press any key to continue";
        getch();
        break;
    case 3:
        searchContact();
        cout<<"Press any key to continue";
        getch();
        break;
    case 4:
        updateContact();
        cout<<"Contact Updated succesfully...";
        cout<<"Press any key to continue";
        getch();
        break;
    case 5:
        deleteContact();
        cout<<"Contact deleted succesfully..."<<endl;
        cout<<"Press any key to continue";
        getch();
        break;
    case 6:
        Continue=false;
      
        break;
        default:
        break;
    }

}
int main(){

    while(Continue){
        logic();
    }



    return 0;
}
