//Author : Leng Thannit
//Date : 20/7/2021
//Project : BANK ATM SYSTEM

#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<fstream>
#include<stdlib.h>
#include<string>
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

class tmpUserInfo{
	public:
		string Id, name, sex, dob,ph,gmail,password,pin,bal;
};
class bank{
	private:
		string fname; //Firstname
		string lname; //Lastname
		string e ; //Email
		string pass; //password
		string id; 
		string phone; //phone number
		string pin;
		double balance;
	    int day,month,year;
	    char s[20];
	public:
		void welcome();
		void help();
		void proceed();
		void create();
		void transaction();
		void check_balance(); 
		void deposite();
		void withdraw(); 
		void transfer();
		void account();
		void changepin();
		void select();
		void opt();
	
};
void bank::welcome(){
	char c = 219,n=178,j=220,d=221;
	system("color 1f");
	cout<<endl<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\n\t\t\t   WELCOME TO ATM\n\n";
	cout<<".....................................................................\n\n";
	cout<<"\t\t\t CREATE NEW ACCOUNT\n\n\t\t IF YOU HAVE ALREADY PRESS(P) TO PROCEED\n\n";
	cout<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\n  Press (c): Create new account, h : Help, p : proceed to account\n\t\t\t  e : exit\n\t\t\t.............\n";
	
}
void bank::help(){
	
	char c = 219,n=178,j=220,d=221;
	system("color 1f");
	cout<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<c<<n<<n<<c<<d<<d<<c<<n<<n<<n<<endl;
	cout<<"\n\t\t       =====>>> HELP <<<=====\n";
	cout<<".....................................................................\n";
	cout<<"\n       You might have already opened an account prviosly.\n    ";
	cout<<"\n You must have the correct ID Email and Password to access this acount.\n\n";
	cout<<"          If you don't have account you need to create account.\n\n";
	cout<<"\t     For more information you can contact : 010xxxxxxx\n\n";
	cout<<"\t     Thanks for, your choice today!! \n\n"; 
	cout<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<c<<n<<n<<c<<d<<d<<c<<n<<n<<n<<endl;
	system("PAUSE");
	system("cls");
}
void bank::create(){
	
	p:
	system("cls");//clear screen
	fstream file;
	
	string fn,ln,em,pass,s;
	string tmpId, tmpp,tmpe,tmps ,arr[5]; 
	double b,ph;
	int da,m,y;
	char c = 219,n=178,j=220,d=221;//ASCII CODE
	system("color 1f");
	cout<<endl<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\t\t\tAPPLICATION FORM\n";
	cout<<".....................................................................\n\n";
	cout<<"   Enter your first name : "; 
	cin >> fname;
	cout<<"\n   Enter your last name  : "; 
	cin >>lname;
	cout<<"\n   Sex  : "; 
	cin >> s;
	cout<<"\n   Date of Birth(dd/mm/yy) : "; 
	cin >> day >> month >> year;
	cout<<"\n   Enter Phone number : ";
	cin >> phone;
	cout<<"\n   Email : "; 
	cin >> e;
	cout<<"\n   Password  : "; 
	cin >> pass;
	cout<<"\n   Pin  : "; 
	cin >> pin;
	cout<<"\n   ID Account  : "; 
	cin >> id;
	cout<<"\n   Enter initial amount  : $"; 
	cin >> balance;
	cout<<"\n\t\t\t\t\tcreate\n\n";
	cout<<"   Loading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);	
	cout<<"\n\t\tPleas waite system check ";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);	
	
	file.open("useraccna.txt",ios::in);
	if(!file)
	{
		file.open("useraccna.txt",ios::app|ios::out);
		file<<" "<<id<<" "<<e<<" "<<pass<<" "<<pin<<" "<<fname<<lname<<" "<<s<<" "<<day<<"/"<<month<<"/"<<year
		<<" "<<phone<<" "<<balance<<endl;
		file.close();
	}
	else
	{
		file>>tmpId>>tmpe>>tmps>>tmpp>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];//read from file
		while(!file.eof())
		{	//check ID EMAIL PIN AND PASSWORD
			if(id == tmpId && pin == tmpp && pass==tmps && e==tmpe){
				system("cls");
				cout<<"\n\n \n\t\t\t\tUser ID , PIN ,PASSWORD , EMAIL Already Exist..";
				cout<<"\n\t\t\tPress Enter to create again...";
				getch();
				goto p;
				
			}
			else if(id == tmpId)
			{
				system("cls");
				cout<<"\n\n \n\t\t\t\tUser ID  Already Exist..";
				cout<<"\n\t\t\tPress Enter to create again...";
				getch();
				goto p;
			}
			else if(pin == tmpp)
			{
				system("cls");
				cout<<"\n\n \n\t\t\t\tUser  PIN  Already Exist..";
				cout<<"\n\t\t\tPress Enter to create again...";
				getch();
				goto p;
			}
			else if(pass==tmps)
			{
				system("cls");
				cout<<"\n\n \n\t\t\t\tUser Password  Already Exist..";
				cout<<"\n\t\t\tPress Enter to create again...";
				getch();
				goto p;
			}
			else if(e==tmpe)
			{
				system("cls");
				cout<<"\n\n \n\t\t\t\tUser  email Already Exist..";
				cout<<"\n\t\t\tPress Enter to create again...";
				getch();
				goto p;
			}
			file>>tmpId>>tmpe>>tmps>>tmpp>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
		}
		file.close();
		file.open("useraccna.txt",ios::app|ios::out);
		file<<" "<<id<<" "<<e<<" "<<pass<<" "<<pin<<" "<<fname<<lname<<" "<<s<<" "<<day<<"/"<<month<<"/"<<year
		<<" "<<phone<<" "<<balance<<endl;
		file.close();
	}
	system("cls");
	cout<<"\n\n\t\tYOUR ACCOUNT HAS CREATED SUCCESSFULY \n";
	cout<<"\n...................................................................\n";
	cout<<"\n\t\t   Account ID : "<<id;
	cout<<"\n\n\t\t   Your Pin : "<<pin<<" \n";
	system("PAUSE");
	system("cls");
} 

void bank::proceed(){
	n:
	system("cls");
	ifstream file;
	string i_d, tmpId,tmpe, tmppass, arr[6];
	int found = 0;
	string passw,eml;
	//char c = 219,n=178,j=220,d=221;//ASCII CODE
	//cout<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	//<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\n\t\t\tPROCEED TO ACCOUNT\n\n";
		cout<<"...................................................................\n";
		file.open("useraccna.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nOpening Error....";
	}
	else
	{
		file>>tmpId>>tmpe>>tmppass>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
		cout<<"\n\n\tPlease Enter Your Email: "; fflush(stdin);
		getline(cin,eml);
		cout<<"\n\n\tPlease Enter Your Password : "; fflush(stdin);
		getline(cin,passw);
		cout<<"\n\n\tPlease Enter Your ID: "; fflush(stdin);
		getline(cin,i_d);
		while(!file.eof())
		{
			if(i_d==tmpId&&eml==tmpe&&passw==tmppass )
			{
				
				system("cls");
				cout<<"\n\n\t\t\tProceed successfully ";
				cout<<"\n...................................................................\n";
				cout<<"\n\n\tName        : "<<arr[1]<<endl;
				cout<<"\n\tID Account  : "<<tmpId<<endl;
				cout<<"\n\tPIN         : "<<arr[0]<<endl;
				cout<<"\n\t\t\tPress Enter go to transaction...";
				found++;
				getch();
				system("cls");
				goto a;
				a:
				select();
					
			}
			file>>tmpId>>tmpe>>tmppass>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
		}
		file.close();
		if(found==0)
		cout<<"You Input are wrong \n\n.";
		cout<<"Press enter to try again...";	
		getch();
		goto n;
	}
	
	
}

void bank::deposite(){
	
	tmpUserInfo tmp_userInfo[100];
	ofstream updateFile;
	fstream file1;
	ifstream file;
	string pinn, arr[8];
	int found=0, count=1;
	double amount;
	system("cls");
	
	system("color 1f");
	
	cout<<" \n\t\t\t\tDeposit \n";
	cout<<"...................................................................\n";
	file.open("useraccna.txt",ios::in);
	
	if(!file){
		cout<<"File Opening error...";
	}
	else
	{	
		//Copy all info into tmpUserInfo class---------
		int i=0;
		while(!file.eof()){
			file>>tmp_userInfo[i].Id>>tmp_userInfo[i].gmail>>tmp_userInfo[i].password>>tmp_userInfo[i].pin>>
			tmp_userInfo[i].name>>tmp_userInfo[i].sex>>tmp_userInfo[i].dob>>tmp_userInfo[i].ph>>tmp_userInfo[i].bal;
			
			i++;
			count++;		
		}
		file.close();
		//------------------------------------		
		
		updateFile.open("useraccna.txt",ios::out);	
		//file>>tmpId>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
		//check id is ture or not
		cout<<"\n\n\tInput pin : "; fflush(stdin);
		getline(cin,pinn);
		file1.open("transactions.txt",ios::out);
		
		int j=0;
		for(j=0; j<i; j++){
			if(pinn == tmp_userInfo[j].pin){
				system("cls");
				//stringstream b(tmp_userInfo[i].bal);
				//b>>balance;
				balance =(double) atof(tmp_userInfo[j].bal.c_str());
				
				cout<<" \n\n\n\n\t\tPleas enter amount : $";cin >>amount;
				balance+=amount;
				tmp_userInfo[j].bal = to_string(balance);
				
				found++;
				cout<<" \tLoading ....";
				Sleep(4000);
				cout<<" \n\t\tYour amount successfully deposite ";
			}
		}
		if(!updateFile)
			cout<<"File Opening error...";
		else{
			for(int i=0; i<count; i++){
				updateFile<<tmp_userInfo[i].Id<<" "<<tmp_userInfo[i].gmail<<" "<<tmp_userInfo[i].password<<" "<<tmp_userInfo[i].pin<<" "
				<<tmp_userInfo[i].name<<" "<<tmp_userInfo[i].sex<<" "<<tmp_userInfo[i].dob<<" "<<
				tmp_userInfo[i].ph<<" "<<tmp_userInfo[i].bal<<endl;
					
			}
			cout<<" \n\t\t\tTransaction Successfully!\n";
		}
		
		}				
		updateFile.close();
		
		file.close();
		file1.close();
		if(found==0)
		cout<<"\n\n\t\t\tID not found";
		remove("useraccna.txt");
		rename("transaction.txt","useraccna.txt");
	system("PAUSE");
	system("cls");
}



void bank::check_balance(){
	ifstream file;
	string i_d, tmpId,tmpe,tmppass,tmpP, arr[8];
	int found = 0;
	string passw,eml,pinP;
	//char c = 219,n=178,j=220,d=221;//ASCII CODE
	//cout<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	//<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\n\t\t\tCHECK BALANCE\n\n";
		cout<<"...................................................................\n";
		file.open("useraccna.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nOpening Error....";
	}
	else
	{
		file>>tmpId>>arr[0]>>arr[1]>>tmpP>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
	
		cout<<"\n\n\tPlease Enter Your PIN Account  : "; fflush(stdin);
		getline(cin,pinP);
		while(!file.eof())
		{
			if( pinP == tmpP )
			{
				system("cls");
				cout<<"\n\t";
				cout<<"\t\t   CHECK BALNCE\n";
				cout<<"....................................................................\n\n";
				cout<<"\n\n\n\t\tYour Current balance : $"<<arr[7];
				cout<<"\n\n\n\n\n....................................................................\n\n";
				cout<<endl;
				found++;
				
				system("PAUSE");
				system("cls");
		
			}
			file>>tmpId>>arr[0]>>arr[1]>>tmpP>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
		}
		file.close();
		if(found==0){
			cout<<"ID wrong \n\n.";
			system("PAUSE");
			system("cls");
		}
			
		
		
			
	}
} 

void bank::transaction(){
	char c = 219,n=178,j=220,d=221;
	system("color 1f");
	cout<<endl<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<" \n\t\t\tSelect Your Transaction\n\n";
	cout<<"....................................................................\n\n";
	cout<<"   \t1.BALANCE ENQUIRY\t";
	cout<<"   4.CASH TRANSFER\n\n";
	cout<<"   \t2.CASH DEPOSITE\t\t";
	cout<<"   5.ACCOUNT DETAIL\n\n";
	cout<<"   \t3.CASH WITHDRAW\t\t";
	cout<<"   6.CHANGE PIN\n";
	cout<<"   \t\t        7.EXIT.";
	cout<<endl<<endl; 
	cout<<endl<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n
	<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<c<<c<<c<<c<<n<<n<<c<<d<<d<<c<<n<<n<<endl;
	cout<<"\t\t\t Pleas Select\n\t\t\t.............\n";
}
void bank::changepin(){
	tmpUserInfo tmp_userInfo[100];
	ofstream updateFile;
	fstream file1;
	ifstream file;
	string i_d, tmpId, arr[8];
	int found=0, count=1;
	double amount;
	system("cls");
	
	system("color 1f");
	
	cout<<" \n\t\t\t\tDeposit \n";
	cout<<"...................................................................\n";
	file.open("useraccna.txt",ios::in);
	
	if(!file){
		cout<<"File Opening error...";
	}
	else
	{	
		//Copy all info into tmpUserInfo class---------
		int i=0;
		while(!file.eof()){
			file>>tmp_userInfo[i].Id>>tmp_userInfo[i].gmail>>tmp_userInfo[i].password>>tmp_userInfo[i].pin>>
			tmp_userInfo[i].name>>tmp_userInfo[i].sex>>tmp_userInfo[i].dob>>tmp_userInfo[i].ph>>tmp_userInfo[i].bal;
			
			i++;
			count++;		
		}
		file.close();
		//------------------------------------		
		
		updateFile.open("useraccna.txt",ios::out);	
		//file>>tmpId>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
		//check id is ture or not
		cout<<"\n\n\tAccout ID : "; fflush(stdin);
		getline(cin,i_d);
		file1.open("transactions.txt",ios::out);
		
		int j=0;
		for(j=0; j<i; j++){
			if(i_d == tmp_userInfo[j].Id){
				system("cls");
				string new_pin,pinn;
				cout<<" \n\n\n\t\tPleas Enter New pin  : ";cin >>new_pin;
				cout<<" \n\n\n\t\tConfirm pin : "; cin >>pinn;
				tmp_userInfo[j].pin=pinn;
				found++;
				cout<<" \tLoading ....";
				Sleep(4000);
				cout<<" \n\t\tYour amount successfully deposite \n";
			}
		}
		if(!updateFile)
			cout<<"File Opening error...";
		else{
			for(int i=0; i<count; i++){
				updateFile<<tmp_userInfo[i].Id<<" "<<tmp_userInfo[i].gmail<<" "<<tmp_userInfo[i].password<<" "<<tmp_userInfo[i].pin<<" "
				<<tmp_userInfo[i].name<<" "<<tmp_userInfo[i].sex<<" "<<tmp_userInfo[i].dob<<" "<<
				tmp_userInfo[i].ph<<" "<<tmp_userInfo[i].bal<<endl;
					
			}
			cout<<" \n\t\tTransaction Successfully!\n";
		}
		
		}				
		updateFile.close();
		
		file.close();
		file1.close();
		if(found==0)
		cout<<"\n\n\t\t\tID not found";
		remove("useraccna.txt");
		rename("transaction.txt","useraccna.txt");
	system("PAUSE");
	system("cls");
}
void bank::withdraw(){

	tmpUserInfo tmp_userInfo[100];
	ofstream updateFile;
	fstream file1;
	ifstream file;
	string pinn, tmpId, arr[8];
	int found=0, count=1;
	double amount;
	system("cls");
	
	system("color 1f");
	
	cout<<" \n\t\t\t\tWITHDRAW \n";
	cout<<"...................................................................\n";
	file.open("useraccna.txt",ios::in);
	
	if(!file){
		cout<<"File Opening error...";
	}
	else
	{	
		//Copy all info into tmpUserInfo class---------
		int i=0;
		while(!file.eof()){
			file>>tmp_userInfo[i].Id>>tmp_userInfo[i].gmail>>tmp_userInfo[i].password>>tmp_userInfo[i].pin>>
			tmp_userInfo[i].name>>tmp_userInfo[i].sex>>tmp_userInfo[i].dob>>tmp_userInfo[i].ph>>tmp_userInfo[i].bal;
			i++;
			count++;		
		}
		file.close();
		//------------------------------------		
		
		updateFile.open("useraccna.txt",ios::out);	
		//file>>tmpId>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
		//check id is ture or not
		cout<<"\n\nInput pin : "; fflush(stdin);
		getline(cin,pinn);
		file1.open("transactions.txt",ios::out);
		
		int j=0;
		for(j=0; j<i; j++){
			if(pinn == tmp_userInfo[j].pin){
				system("cls");
				//stringstream b(tmp_userInfo[i].bal);
				//b>>balance;
				balance =(double) atof(tmp_userInfo[j].bal.c_str());
				cout<<" \n\n\n\n\t\tPleas enter amount : $";cin >>amount;
				if(amount<=balance){
					balance-=amount;
					tmp_userInfo[j].bal = to_string(balance);
					found++;
					cout<<" \tLoading ....";
					Sleep(4000);
					cout<<" \n\t\tYour amount successfully deposite ";
				}
				else cout<<"\n\tYour balance not enought";
				
				
				
			}
		}
		if(!updateFile)
			cout<<"File Opening error...";
		else{
			for(int i=0; i<count; i++){
				updateFile<<tmp_userInfo[i].Id<<" "<<tmp_userInfo[i].gmail<<" "<<tmp_userInfo[i].password<<" "<<tmp_userInfo[i].pin<<" "
				<<tmp_userInfo[i].name<<" "<<tmp_userInfo[i].sex<<" "<<tmp_userInfo[i].dob<<" "<<
				tmp_userInfo[i].ph<<" "<<tmp_userInfo[i].bal<<endl;
			}
			
			cout<<" \n\t\tTransaction Successfully!\n";
		}
		
		}				
		updateFile.close();
		
		file.close();
		file1.close();
		if(found==0)
		cout<<"\n\n\t\t\tID not found";
		remove("useraccna.txt");
		rename("transaction.txt","useraccna.txt");
	system("PAUSE");
	system("cls");
}
void bank::transfer(){
	
	tmpUserInfo tmp_userInfo[100];
	ofstream updateFile;
	fstream file1;
	ifstream file;
	string i_d,is_d,pinn, tmpId, arr[8];
	int found=0, count=1;
	double amount;
	system("cls");
	
	system("color 1f");
	
	cout<<" \n\t\t\t\tDeposit \n";
	cout<<"...................................................................\n";
	file.open("useraccna.txt",ios::in);
	
	if(!file){
		cout<<"File Opening error...";
	}
	else
	{	
		//Copy all info into tmpUserInfo class---------
		int i=0;
		while(!file.eof()){
			file>>tmp_userInfo[i].Id>>tmp_userInfo[i].gmail>>tmp_userInfo[i].password>>tmp_userInfo[i].pin>>
			tmp_userInfo[i].name>>tmp_userInfo[i].sex>>tmp_userInfo[i].dob>>tmp_userInfo[i].ph>>tmp_userInfo[i].bal;
			i++;
			count++;		
		}
		file.close();
		//------------------------------------		
		
		updateFile.open("useraccna.txt",ios::out);	
		//file>>tmpId>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7];
		//check id is ture or not
		cout<<"\n\n\tSender User ID  : "; fflush(stdin);
		getline(cin,i_d);
		cout<<"\n\n\tReciver User ID  : "; fflush(stdin);
		getline(cin,is_d);
		cout<<" \n\n\n\t\tPleas enter amount : $";cin >>amount;
		cout<<" \n\n\n\t\tInput pin : ";cin >>pinn;
		file1.open("transactions.txt",ios::out);
		
		
		int j=0;
		for(j=0; j<i; j++){
			if(i_d == tmp_userInfo[j].Id&& pinn==tmp_userInfo[j].pin){
				system("cls");
				//stringstream b(tmp_userInfo[i].bal);
				//b>>balance;
				balance =(double) atof(tmp_userInfo[j].bal.c_str());
				balance-=amount;
				tmp_userInfo[j].bal = to_string(balance);
				found++;
				cout<<" \n\t\t\tYour amount successfully deposite \n";
			}
			else if(is_d == tmp_userInfo[j].Id){
					system("cls");
					//stringstream b(tmp_userInfo[i].bal);
					//b>>balance;
					balance =(double) atof(tmp_userInfo[j].bal.c_str());
					balance+=amount;
					tmp_userInfo[j].bal = to_string(balance);
					found++;
					cout<<" \tLoading ....";
					cout<<" \n\t\tYour amount successfully deposite \n";
			}
		}
		if(!updateFile)
			cout<<"File Opening error...";
		else{
			for(int i=0; i<count; i++){
				updateFile<<tmp_userInfo[i].Id<<" "<<tmp_userInfo[i].gmail<<" "<<tmp_userInfo[i].password<<" "<<tmp_userInfo[i].pin<<" "
				<<tmp_userInfo[i].name<<" "<<tmp_userInfo[i].sex<<" "<<tmp_userInfo[i].dob<<" "<<
				tmp_userInfo[i].ph<<" "<<tmp_userInfo[i].bal<<endl;
			}
			cout<<" \n\t\tUpdate Account Successfully!";
		}
		
		}				
		updateFile.close();
		
		file.close();
		file1.close();
		if(found==0)
		cout<<"\n\n\t\t\tID not found";
		remove("useraccna.txt");
		rename("transaction.txt","useraccna.txt");
	system("PAUSE");
	system("cls");
}
	

void bank::account(){
	
	system("cls");
	ifstream file;
	string i_d, tmpId,tmpe, arr[7];
	int found = 0;
	string passw,eml;
	char c = 219,n=178,j=220,d=221;//ASCII CODE
		file.open("useraccna.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nOpening Error....";
	}
	else
	{
		file>>tmpId>>tmpe>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6];
		cout<<"\n\n\n\tPlease Ener Your Email : "; fflush(stdin);
		getline(cin,eml);
		cout<<"\n\n\tPlease Enter Your ID Account  : "; fflush(stdin);
		getline(cin,i_d);
		
		
		while(!file.eof())
		{
			if(eml == tmpe||i_d == tmpId )
			{		system("cls");
					cout<<"...................................................................";
					cout<<".\n\n\t\t\t   ACCOUNT DETAIL                                        .\n\n";
					cout<<"...................................................................";
					cout<<"\n\n\tName : "<< arr[2];
					cout<<"\n\n\tSex  : "<<arr[3];
					cout<<"\n\n\tDate of Birth(dd/mm/yy) : "<<arr[4]; 
					cout<<"\n\n\tEnter Phone number : "<<arr[5];
					cout<<"\n\n\tEmail : "<<tmpe; 
					cout<<"\n\n\tPassword  : "<<arr[0]; 
					cout<<"\n\n\tPin  : "<<arr[1]; 
					cout<<"\n\n\tID Account : "<<tmpId; 
					cout<<"\n\n\tCurrent Balance  : $"<<arr[6];
					cout<<"\n\n...................................................................\n";
				
					system("PAUSE"); 
					system("cls");
				
			}
			file>>tmpId>>tmpe>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6];
		}
		file.close();
			
	}
	

}


void bank::select(){
	bank n;
	int options;
	do{
		n.transaction();
		cout<<"\t\t\t";
		cin>>options;
		system("cls");
		switch(options){
			case 1 : n.check_balance(); break;
			case 2 : n.deposite(); break;
			case 3 : n.withdraw(); break;
			case 4 : n.transfer(); break;
			case 5 : n.account(); break;
			case 6 : n.changepin(); break;
			case 7 : n.opt(); break;
			default:cout<<"Please Enter the Correct Number Choice"<<endl;
		}
	}while(options!=0);
}
	
void bank::opt(){
	bank m;
	cout<<"\n  Current time : ";
	time_t now;
	time(&now);
	
	char options;
	do{
		cout<<ctime(&now);
		m.welcome();
		cout<<"\t\t\t";
		cin>>options;
		system("cls");
		switch(options){
			case 'c':
				cout<<ctime(&now)<<endl;
				m.create(); 
				break;
			case 'h': 
				cout<<ctime(&now)<<endl;
				m.help();  
				break;
			case 'p': 
				cout<<ctime(&now)<<endl;
				m.proceed(); 
				break;
			case 'e' : exit(0) ;break;
			default:cout<<"Your optins invalid"<<endl;
		}
	}while(options!=0);

}     

int main(){
	bank u;
	u.opt();
}

