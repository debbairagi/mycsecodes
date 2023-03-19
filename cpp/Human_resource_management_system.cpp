 #include<iostream>
#include<istream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class search
{
        public: 
//employee details 
string emp_name,emp_id,Salary,phn_num,adrs;
 /// payroll
 string name ;
int day,rate,sss,phil;
double gross;
 string T_name,T_start,T_end,T_time;
int j,p,h;
 void srch(void)
 {
        int n;
        cin.get();
        system("cls");
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
        cout<<"---------------------------------------"<<endl;
      
         cout<<"1.Employees Details .(for update -1) "<<endl;
        cout<<"2. Payroll (-2 for update"<<endl;
        cout<<"3.Training ."<<endl;
        cout<<"4.Performance .(for update -4)"<<endl;
        cout<<"5.Regination  .(for update -5)"<<endl;
        cout<<"6.Resume Tracking  .(for update -6)"<<endl;
        cout<<"Enter 1-6  for display:  / For update enter -1 to -6 : ";
        cin>>n;
    
         system("cls");
         cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
        cout<<"---------------------------------------"<<endl;
 if(n==-1)
    {
        update_E();
    }
    else if(n==1)
    {
        dis_E();
    }
    else if(n==-2)
    {
        Update_p();

    }
    else if(n==2)
    {
        dis_p();
    }
    else if(n==3)
    {
        E_training();
    }

    else if (n==4)
    {
        E_perform();
    }
    else if(n==5)
    {
        Regination();
    }
    else if(n==6)
    {
         Resume_tracking();
    }
 }
         //for -1  function ///
void update_E(void)
         {
            cin.get();
            system("cls");
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
              cout<<endl<<endl<<endl;
 cout<<"Employee Name : ";
 cin>>emp_name;
 cout<<"Employee ID :";
 cin>>emp_id;
 cout<<"Salary : ";
 cin>>Salary;
 cout<<"Phone Number: ";
 cin>>phn_num;
 cout<<"Address: ";
 cin>>adrs;
 ofstream emp("employee_details.txt",ios::app);
 emp<<emp_name<<' '<<emp_id<<' '<<Salary<<' '<<phn_num<<' '<<adrs<<endl;


int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    update_E();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
 
 }
 ///display  employee details 
 void dis_E(void)
 {
        int  key ; 
        int s;

        int c=0;
        string src_id,e_n,e_id,e_s,e_p,e_a;
        cin.get();
            system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
        cout<<"Enter 1 for all employee details  "<<endl<<"And Enter 2 for search an employee by Employee ID "<<endl;
        cin>>s;
        system("cls");
        if(s==1)
        {
            ifstream Src_emp("employee_details.txt");
          
            int i;
            cin.get();
            system("cls");
              cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
              cout<<endl<<endl<<endl;
              cout<<"----------------------------------------------------------------------------------------------"<<endl;

                cout<<"SL|         Name      |    ID      |    Salary    |      Phone Number    |           Address  |"<<endl<<"----------------------------------------------------------------------------------------------"<<endl;
            
      i=1;
            while( Src_emp>>e_n>>e_id>>e_s>>e_p>>e_a)
            {

                
               
                cout<<i<<"  ";
                cout<<"  "<<e_n;
                cout<<"       "<<e_id<<"       ";
                cout<<"    "<<e_s<<"      ";
                cout<<"     "<<e_p<<"       ";
                cout<<"  "<<e_a<<"       "<<endl;

           i++;
            }
            cout<<endl<<endl;

           cout<<endl<<endl<<"Press 1 for continue Search"<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    dis_E();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
        }
        else if(s==2)
        {
            cin.get();
            system("cls");
             cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
              cout<<endl<<endl<<endl;
        cout<<"Enter the user  ID : " ;
        cin>>src_id;
        system("cls");
        ifstream Src_emp("employee_details.txt");
        while( Src_emp>>e_n>>e_id>>e_s>>e_p>>e_a)
        {
                if(src_id==e_id)
                {
                   cin.get();
            system("cls");
                 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
              cout<<endl<<endl<<endl;
                cout<<"----------------------------------------------------------------------------------------------"<<endl;

                cout<<"        Name      |    ID      |    Salary    |      Phone Number    |           Address  |"<<endl<<"----------------------------------------------------------------------------------------------"<<endl;

                cout<<"  "<<e_n;
                cout<<"       "<<e_id<<"       ";
                cout<<"    "<<e_s<<"      ";
                cout<<"     "<<e_p<<"       ";
                cout<<"  "<<e_a<<"       ";
   
        }
        else 
        {
            cin.get();
            system("cls");
             cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
              cout<<endl<<endl<<endl;
         cout<<"Data NOt found ! ";
       
                }
                  cout<<endl<<endl<<"Press 1 for continue Search"<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    dis_E();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
         


        }
        Src_emp.close();
       
 }
 }

/// --2 function payroll update
void Update_p(void)
{
    int r;
cin.get();
            system("cls");
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl;

       

cout<<"Enter the employee name  : ";
cin>>name;
cout<<"Enter employee rate/Day :";
cin>>rate;
cout<<"Enter number of days worked: ";
cin>>day;
cout<<"sss contribution :";
cin>>sss;
cout<<"philhelth contribution :";  
cin>>phil;
int income ;
income=(rate*day)-(sss+phil);
int inc;
inc=rate*day;
string incm=to_string(inc);
string d=to_string(day);

string net_income=to_string(income);

ofstream pay("payroll.text",ios::app);
pay<<name<<' '<<net_income<<' '<<day<<' '<<sss<<' '<<phil<<' '<<incm<<endl;
cout<<endl<<endl<<"Press 1 for continue update "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    Update_p();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}

void dis_p(void)
{
    cin.get();
            system("cls");
  cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        int key,c=0;
        string p_name, p_n,p_d,p_s,p_l,p_incm;
string p_inc;
cout<<" Enter the name : ";
cin>>p_name;

  system("cls");

ifstream pay_roll("payroll.text");
while(pay_roll>>p_n>>p_inc>>p_d>>p_s>>p_l>>p_incm)
{
        if(p_name==p_n)
        {
            c=1;
             cin.get();
            system("cls");
                cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
                cout<<"\t\t\t\\tPayroll of an Employee :"<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"|      Name     |Number of day Work|Social servise contribution|Physical health contribution| Income |Net Income| "<<endl<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"|"<<p_n;
                cout<<"  |        "<<p_d;
                                cout<<"        |"<<"          "<<p_s<<"Taka           |";
                                cout<<"           "<<p_l<<"taka"<<"           |"<<p_incm<<"taka| "<<p_inc<<"taka |"<<endl;   
              
              cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;

             cout<<endl<<endl<<endl<<endl; 
        }
}
pay_roll.close();
   if(c==1)
        {
            
          cout<<endl<<endl<<"----------------"<<endl;
        
        }

else
{
     cin.get();
            system("cls");
                cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

 cout<<"Data Not Found"<<endl;
}
        cout<<endl<<endl<<"Press 1 for continue Search"<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    dis_p();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}

void E_training(void)
{
   cin.get();
   system("cls");
   cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Select your Job catagory : "<<endl<<endl<<endl;
    cout<<"1.Full Time  !"<<endl;
    cout<<"2.New Joined  !"<<endl;
    cout<<"3.Work from home  !"<<endl;
    cin>>j;
    cin.get();
    system("cls");

  if(j==1)
  {
    full_time();
  }
  else if(j==2)
  {
    New_join();
  }
  else if(j==-3)
  {
    wr_fm_h();
  }
  else if(j==3)
  {
    dis_wr();
  }
  int x;
  cout<<"Press 1 for home page : ";
  cin>>x;
  if(x==1)
  {
srch();
  }
}

void full_time(void)
{
    cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
cout<<"Enter training Information : "<<endl<<endl;
cout<<"1.Coordinator !"<<endl;
cout<<"2.Manager "<<endl;
cout<<"3.Assistant of Manager !"<<endl;
cin>>p;
cin.get();
system("cls");
if(p==-1)
{
    coordinator();
}
else if(p==1)
{
    dis_coor();
}
else if(p==-2)
{
    Manager();
}
else if(p==2)
{
    dis_man();
}
else if(p==-3)
{
    Ass_manager();
}
else if(p==3)
{
  dis_ass();
}
cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

}
void coordinator(void)
{
    cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("coordinator.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void dis_coor(void)
{
    string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("coordinator.text");
    co>>T_n>>T_s>>T_e>>T_ti;

     cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl;
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void Manager(void)
{
     cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("Manager.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
   cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void dis_man(void)
{
    string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("Manager.text");
    co>>T_n>>T_s>>T_e>>T_ti;

 cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl;
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void Ass_manager(void)
{ cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("ass_manager.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
     cin.get();
    cin.get();
    system("cls");
E_training();
}
void dis_ass(void)
{
    string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("ass_manager.text");
    co>>T_n>>T_s>>T_e>>T_ti;

   cin.get();
    system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl; 
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void New_join(void)
{
     
    cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
cout<<"Enter training Information : "<<endl<<endl;
cout<<"1.Labor !"<<endl;
cout<<"2.Labor relation specialist :  !"<<endl;
cin>>h;
cin.get();
system("cls");
if(h==-1)
{
    labor();
}
else if(h==1)
{
    dis_lab();
}
else if(h==-2)
{
    labor_spc();
}
else if(h==2)
{
    dis_labs();
}
cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void labor(void)
{
     
    cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("labor.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
     cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

}
void dis_lab(void)
{
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

     string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("labor.text");
    co>>T_n>>T_s>>T_e>>T_ti;

    cout<<"**Human Resource Management System **"<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl; 
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

}
void labor_spc(void)
{
     cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;


    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("Labor_specialist.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
       
}
void dis_labs(void)
{
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

    
    string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("Labor_specialist.text");
    co>>T_n>>T_s>>T_e>>T_ti;

    cout<<"**Human Resource Management System **"<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl;  
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void wr_fm_h(void)
{
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;

    cout<<"Enter training Information : "<<endl<<endl;
    cout<<"Trainner Name :";
    cin>>T_name;
    cout<<"Training Start date: ";
    cin>>T_start;
    cout<<"Trainging end :";
    cin>>T_end;
    cout<<"Training time: ";
    cin>>T_time;

   
    ofstream coor("work_from_home.text",ios::app);
    coor<<T_name<<' '<<T_start<<' '<<T_end<<' '<<T_time<<endl;
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}
void dis_wr(void)
{
    cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    string T_n,T_s,T_e,T_ti;
    int t;
    ifstream co("work_from_home.text");
    co>>T_n>>T_s>>T_e>>T_ti;

    cout<<"**Human Resource Management System **"<<endl<<endl<<endl<<endl;

    cout<<"Traning shedule: "<<endl<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Trainner Name: "<<T_n<<endl;
    cout<<"Training Start Date: "<<T_s<<endl;
    cout<<"Training end Date: "<<T_e<<endl;
    cout<<"Training Time :"<<T_ti<<endl;
    cout<<"------------------------"<<endl;  
    cout<<endl<<endl<<"Press 1 for training shedule  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_training();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}
}

void E_perform(void)
{
    cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        int key,c=0;
        string p_name, p_n,p_d,p_incm,p_s,p_l;
string p_inc;
cout<<" Enter the name : ";
cin>>p_name;

  cin.get();
  system("cls");
 

ifstream pay_roll("payroll.text");
while(pay_roll>>p_n>>p_inc>>p_d>>p_s>>p_l>>p_incm)
{
     string per;
        if(p_name==p_n)
        {
             int day=stoi(p_d);
             if(day>=25)
             {
                per="Good";

             }
             else
             {
                per="Bad";
             }
                c=1;
                
                
                cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
                cout<<"**Performance of An Emplpoyee**"<<endl<<endl;
                cout<<endl<<endl<<endl;
               cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"|      Name     |Number of day Work| Income |Net Income|performance| "<<endl<<"--------------------------------------------------------------------"<<endl;
                cout<<"|"<<p_n;
                cout<<"  |        "<<p_d;
                               
                                cout<<"        |"<<p_incm<<"taka|"<<p_inc<<"taka  |    "<<per<<"   |"<<endl;
              
 cout<<"--------------------------------------------------------------------"<<endl;
        }

}
pay_roll.close();
   if(c==1)
        {
           cout<<".";
        }
       else 
            {

                cout<<endl<<endl<<"Data not found"<<endl;
             }
        
         cout<<endl<<endl<<"Press 1 for search performance an employee   "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
    E_perform();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

}
void Regination(void)
{
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    int R1,R2;
    string name;
    string id;
    string reason;
    cout<<"1.Apply for Regination"<<endl<<"2.Application condition "<<endl<<"3.Admin ->Enter Admin code :"<<endl;
    cin>>R1;
    if(R1==1)
    {
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"----------------------------------------------"<<endl;
      cout<<"**Apply for Regination: "<<endl;

cout<<"----------------------------------------------"<<endl<<endl;
cout<<"Name: ";
cin>>name;
cout<<"ID: ";
cin>>id;
cout<<endl<<" Write   The reason : "<<endl;
cin>>reason;
ofstream aply("Regination.txt",ios::app);
aply<<id<<' '<<name<<' '<<reason<<endl;

cout<<endl;
cin.get();
system("cls");
cout<<endl<<endl<<endl<<endl<<"********successfully appliyed******"<<endl<<endl;
}
else if(R1==2)
{
        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
  cout<<"Apllication condition"<<endl<<endl<<endl;
  cout<<"Regination Accepted -> IF your Name & ID is in  Leave employeee details "<<endl;
  leave_emp();

    
}
else if(R1==1122)
{ 
    admin:
         cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
cout<<"Admin sector : "<<endl;

    int z;
    cout<<"1.Check submitted Regination"<<endl;
    cout<<"2.Accpted Regination "<<endl;
    cin>>z;
    system("cls");
    if(z==1)
    {        cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        string n,i,r;
        ifstream chek("Regination.txt");
        cout<<"All Regination"<<endl;
        cout<<" ------------------------------------------------------------------------------------------------------"<<endl;
        while(chek>>n>>i>>r)
        {
            cout<<"Name : "<<n<<"    "<<"ID: "<<i<<endl;
            cout<<"***Reason****"<<endl;
            cout<<r<<endl;
             cout<<" ------------------------------------------------------------------------------------------------------"<<endl;

        }
    }
    if(z==2)
    {
            cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        string ide,nam;
        cout<<"Enter Name:";
        cin>>nam;
        cout<<"Enter ID : ";
        cin>>ide;
        cout<<endl;
        int count=0;
        string n,i,s,p,a;
        ifstream tmp("employee_details.txt");
        ofstream dele("Leave_employee.txt",ios::app);
        while(tmp>>n>>i>>s>>p>>a)
        {
            if(i==ide)
            {
                count=1;
                dele<<n<<' '<<i<<' '<<s<<' '<<p<<' '<<a<<endl;
            }
        }
        
    

        cin.get();
        system("cls");
       if(count==1)
       {
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
        cout<<"\xB2Regination accepted \xB2"<<endl;
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
       }
        else
        {
            cout<<"Wrong User ID or Name  !"<<endl<<"Please try again"<<endl;
            goto admin;

        }
        }
       

    



cout<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
cout<<"\xB2 1. Home page \xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
cin>>R2;
if(R2==1)
{
    cin.get();
    system("cls");
    srch();
}


}
else
{ cin.get();
system("cls");
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
cout<<endl<<"---------------------------------------"<<endl;
    cout<<"Wrong Choice ! "<<endl;



}

cin.get();
system("cls");
 cout<<endl<<endl<<"Press 1 for Regination   "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
   Regination();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

}
void leave_emp(void)
{
string e_n,e_id,e_s,e_p,e_a;
ifstream Src_emp("Leave_employee.txt");
cin.get();
system("cls");
cout<<endl<<"\xB2 Leave emplpoyee Details \xB2"<<endl;
         cout<<"----------------------------------------------------------------------------------------------"<<endl;

                cout<<"SL|         Name      |    ID      |    Salary    |      Phone Number    |           Address  |"<<endl<<"----------------------------------------------------------------------------------------------"<<endl;
            
           
     int i=1;
            while( Src_emp>>e_n>>e_id>>e_s>>e_p>>e_a)
            {

                
               
                cout<<i<<"  ";
                cout<<"  "<<e_n;
                cout<<"       "<<e_id<<"       ";
                cout<<"    "<<e_s<<"      ";
                cout<<"     "<<e_p<<"       ";
                cout<<"  "<<e_a<<"       "<<endl;

           i++;

        }

}
  void Resume_tracking(void)
  {
    int T1,t2;
      cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
 cout<<"1.  Apllicants "<<endl;
 cout<<"2.Admin ->enter secret code: "<<endl<<endl;
 cin>>T1;

 string a_n,a_p,a_w,a_in,a_s;
 if(T1==1)
 {
     cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"Name : "; cin>>a_n;
    cout<<"Phone Number :";cin>>a_p;
    cout<<"Area of specilization : ";cin>>a_s;
    cout<<"work Experience :";cin>>a_w;
    cout<<"Interseted on: ";cin>>a_in;
    ofstream emp("Application.txt",ios::app);
    emp<<a_n<<' '<<a_p<<' '<<a_s<<' '<<a_w<<' '<<a_in<<endl;

    cout<<"*****Application submitted ****"<<endl;
    
 }
 else if(T1=1122)
 {
     cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
 ifstream amp("Application.txt");
                                     cout<<"\t\t\t********All Application ******"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<"|    Name     |Phone_number|Specilization|Work exp.|Intersted|"<<endl;   
cout<<"----------------------------------------------------------------"<<endl;     
string p_n,p_p,p_w,p_in,p_s;                    
 while(amp>>p_n>>p_p>>p_s>>p_w>>p_in)
 {

    cout<<"|"<<p_n<<"|"<<p_p<<" |"<<"  "<<p_s<<"   |"<<" "<<p_w<<" |"<<p_in<<"|"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;    
 }
                                     

 }

 cout<<endl<<endl<<"Press 1 for Resume Tracking  "<<endl<<"Press 2 for home page "<<endl;
int g;
cin>>g;
if(g==1)
{
    cin.get();
  system("cls");
   Resume_tracking();
}
else if(g==2)
{
  cin.get();
  system("cls");
srch();
}

  }

};

class home_page:public search
{
    public:
    int ch;
    string reg_pass,reg_username,username,password,search_user,search_password; 

     void login(void);
    void singup(void);
    void forgot(void);

    void choice(void)
    {
        cin.get();
        system("cls");
        cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        cout<<"1.LOG IN"<<endl<<"2.Sing Up "<<endl<<"3.Forget Password ";
        cin>>ch;

    system("cls");
      switch(ch)
      {
        case 1:
        login();
        break;
        case 2:
        singup();
        break;
        case 3:
        forgot();
        break;
        case 4:
        cout<<"sucessfull ! "<<endl;
        default:
        cout<<"Wrong choice ! please try again .  Enter (1,2 or3) "<<endl;
choice();
      }
        
    }
  
};

void home_page::singup(void)
{
    cin.get();
    system("cls");
cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
 cout<<"User Name : ";
 cin>>reg_username;
 cout<<"Password:";
 cin>>reg_pass;
 ofstream reg("database.txt",ios::app);
 reg<<reg_username<<' '<<reg_pass<<endl;
 
  cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
 cout<<"Registration is sucessfull !"<<endl<<endl<<endl;
 choice();

}
void home_page::login(void)
{
    cin.get();
    system("cls");
     cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
        cout<<"---------------------------------------"<<endl<<endl;
    string p,u;
    int c,k=0;

    cout<<"User name: ";
    cin>>username;
    cout<<"Password:";
    cin>>password;
 system("cls");
    ifstream input("database.txt");
    while(input>>u>>p)
    {
        if(u==username&&p==password)
        {
c=1;
        }

    }
   input.close();
   if(c==1)
   {
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<"\xB2**Human resource Mangement system : **\xB2"<<endl;
 cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
 cout<<endl<<endl<<endl<<endl;
    cout<<"*Welcome*"<<endl<<endl<<endl;
    srch();
   
   }
   else{
    cout<<"Wrong password ! Try again"<<endl<<endl;
cin.get();
cin.get();
    
    system("cls");
   int z;
   cout<<"for Main page enter 1 !  "<<endl;
    cout<<"for LOGIN page enter 2 !  "<<endl;
    cin>>z;
    if(z==1)
    {
        choice();
    }
    else if(z==2)
    {
        login();
    }
    k++;

    if(k==3)
    {
        cout<<"Your account is blocked!"<<endl;
        
    }

   }

}


void home_page::forgot(void)
{
        int ch;
        system("cls");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;
                        
                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                choice();
                        }
                        else
                        {
                                cout<<"the account not found: "<<endl;
                                cin.get();
                                cin.get();
                               choice();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nAccount found \n";
                                cout<<"\nYour username : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                choice();
                        }
                        else
                        {
                                cout<<"the account not found: "<<endl;
                                cin.get();
                                cin.get();
                               choice();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        choice();
                }
                default:
                    cout<<"the account not found: "<<endl;
                        forgot();
        }
};


int main()
{

    home_page h;
   
    h.choice();

}