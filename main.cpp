/*
Ahmed Arafat
Business Information System
ahmedmoyousry.bis@gmail.com
6-2020
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<std::string, std::string> pss;
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<pii> vii;
typedef std::vector<ll> vl;
typedef std::vector<vl> vvl;
typedef std::map<ll,ll> mpll;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define HANDLE_WRONG_INPUT          while(std::cin.fail()){std::cin.clear();std::cin.ignore();}
#define debug                       printf("I am here\n");
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
/******************************Code Starts Here*********************************************/
class Car{
private:
string brand;
string color;
string model;
int year_of_production;
string manual_or_auto;
double rent_per_day;
int no_of_seats;
bool is_car_rented;
static string Names_of_renter[10];
public:
void Setter(string br,string col,string mod,int year,string man_aut,double rent,int no){
brand=br;
color=col;
model=mod;
year_of_production=year;
manual_or_auto=man_aut;
rent_per_day=rent;
no_of_seats=no;
is_car_rented=false;
}
public:
void report(){
cout<<"Car's Brand is : "<<brand<<endl;
cout<<"Car's Color is : "<<color<<endl;
cout<<"Car's Model is : "<<model<<endl;
cout<<"Car's Year of Production is : "<<year_of_production<<endl;
cout<<"Car's Number of seats are : "<<no_of_seats<<endl;
cout<<"Car is : "<<manual_or_auto<<endl;
cout<<"Car's Rent per Day is : "<<rent_per_day<<" L.E."<<endl;
}
void report_rent(int i){
if(is_car_rented)
cout<<"Car is rented by "<<Names_of_renter[i]<<endl;
else
cout<<"Car is not rented"<<endl;
}
void become_rented(){
is_car_rented=true;
}
void car_is_returned(){
is_car_rented=false;
}
bool is_choosen_car_rented(){
if(is_car_rented)
return 1;
else
return 0;
}
double rent_per_day_getter(){
return rent_per_day;
}
void save_name(string n,int num){
Names_of_renter[num]=n;

}
};
string Car::Names_of_renter[10]={};
class Customer {
private:
string name;
string password;
int age;
string phone;
string address;
int no_of_cars_rented;
vector<int> no_of_each_car;
static int No_of_customers;
public :
//       order(){
//        order_number=0;
//    order_date="";
//    order_value=0.0;
//    no_of_product=0;
//    client_name="";
//}

    void Setter(string n,string pass,int ag,string ph,string add){
 name=n;
 password=pass;
 age=ag;
 phone=ph;
 address=add;
 no_of_cars_rented=0;
 No_of_customers++;
    }
    void add_car_to_rent(int no){
    no_of_each_car.push_back(no);
no_of_cars_rented++;
    }
    void remove_car_from_rent(int no){
no_of_each_car.erase(no_of_each_car.begin()+no);
    no_of_cars_rented--;

    }
    int cars_rented(){
    return no_of_cars_rented;
    }
bool is_customer_exist(string n,string pass){
if(name==n&&password==pass)
    return 1;
else
    return 0;
}
string customer_name_getter(){
return name;
}
void no_of_each_car__getter(){
for(int w=0;w<no_of_each_car.size();w++){
    cout<<"Car #"<<no_of_each_car[w]+1<<endl;
}

}
bool is_no_of_each_car__exist(int no){
for(int i=0;i<no_of_each_car.size();i++){

    if(no_of_each_car[i]+1==no){
        return 1;
        break;
    }
    else
        return 0;
}
}
};
int Customer::No_of_customers=0;
void Print(int n){
cout<<"Car #"<<n+1<<" :"<<endl<<endl;
}
 bool is_exist;
    string br,col,mod,man_auto;
    int year,no_seats,user_or_client,i,j;
    double price_day;
    bool is_rented;
  string n,passwd,ph,add;
           int ag,nooo;
    Car C[10];//Array of Object of Type Car
      vector <Customer> Customer_list;
    Customer obj;
///MAIN()
int main()
{
    cout << "\t\t\t\t\t\t\t\t ********************************\n" << endl;
    cout << "\t\t\t\t\t\t\t\t Welcome To Car Rent Project\n" << endl;
    cout << "\t\t\t\t\t\t\t\t ********************************\n" << endl;
    while(true){
    cout <<"Please if you're a User enter (1) OR (2) if you're a Customer enter OR (3) To END PROGRAM"<<endl<<endl;
cin>>user_or_client;
cout<<endl;
if(user_or_client==1){
        int user_options;
 cout <<"Please enter : \n (1) if you want to input car(s) details \n (2) if you want to modify car(s) details \n (3) to display full report"<<endl<<endl;
cin>>user_options;
cout<<endl;
if(user_options==1){
        cout <<"Please enter :\n1)Brand\n2)Color\n3)Model\n4)Year of Production\n5)Number of Seats\n6)Is the car manual or automatic\n7)Rent per day for car (in L.E.)\nRespectively"<<endl<<endl;
for( i=0,j=9;i<10;i++,j--){

        cin>>br>>col>>mod>>year>>no_seats>>man_auto>>price_day;
cout<<endl;
    C[i].Setter(br,col,mod,year,man_auto,price_day,no_seats);
   // obj[i].report();
   cout<<"Cars has been successfully recorded"<<endl<<endl;
   if(j!=0)
   cout<<"You have to enter "<<j<<" more car(s)"<<endl<<endl;
 else
    cout<<"Done :)"<<endl<<endl;
}
continue;
}
if(user_options==2){
    int car_number;
    cout<<"Please enter No. Of car You want to modify "<<endl<<endl;
    cin>>car_number;
    if(car_number<0||car_number>10){
        cout<<"Please enter a right number range between 1 to 10"<<endl<<endl;
    }
    else{
     cout <<"Please enter again:\n1)Brand\n2)Color\n3)Model\n4)Year of Production\n5)Number of Seats\n6)Is the car manual or automatic\n7)Rent per day for car (in L.E.)\n8)Is car rented or not (enter 1 if it is or 0 if it is not)\nRespectively"<<endl<<endl;
        cin>>br>>col>>mod>>year>>no_seats>>man_auto>>price_day;
//cout<<endl;
     C[car_number-1].Setter(br,col,mod,year,man_auto,price_day,no_seats);
     //obj[product_number-1].report();

     cout<<"\n\nCar No. "<<car_number<<" has been successfully modified"<<endl<<endl;
    }
}
if(user_options==3){

      for(i=0;i<10;i++){
           Print(i);
    C[i].report();
    C[i].report_rent(i);
    cout<<endl<<endl;
}
cout<<endl<<endl;

}
}
    else if(user_or_client==2){
        cout<<"Please enter (1) to Sign up or (2) to Sign in\n"<<endl;
    int sign_in_or_up;
        cin>>sign_in_or_up;
        if(sign_in_or_up==1){
               cout<<"Please enter :\n1)Your Name\n2)Your Password\n3)Your Age\n4)Your Phone\n5)Your Address "<<endl;
             getline(cin,n);
             getline(cin,n);
            getline(cin,passwd);
            cin>>ag>>ph>>add;
            obj.Setter(n,passwd,ag,ph,add);
            Customer_list.push_back(obj);
               cout<<endl;
               cout<<"Your Account has been created successfully"<<endl<<endl;
        }
        else if(sign_in_or_up==2){
 cout<<"Please enter your name : "<<endl;
    getline(cin,n);
    getline(cin,n);
     cout<<endl;
  cout<<"Please enter your password : "<<endl;
   getline(cin,passwd);
   cout<<endl;
            for(int i=0;i<Customer_list.size();i++){
    if(Customer_list[i].is_customer_exist(n,passwd)){
            nooo=i;
        is_exist=true;
break;
    }
    else
        is_exist=false;
}
if(is_exist){

    cout<<"Welcome Back : "<<Customer_list[nooo].customer_name_getter()<<endl<<endl;
    cout<<"Please enter:\n1)To show all available cars then choose one to rent\n2)To return the rented car"<<endl<<endl;
    int customer_choise;
    cin>>customer_choise;
    if(customer_choise==1){
           for(i=0;i<10;i++){
           Print(i);
    C[i].report();
}
cout<<endl<<endl;
  cout<<"Please enter No. of car you want to rent"<<endl<<endl;
  int wanted_car;
  cin>>wanted_car;
      if(Customer_list[nooo].cars_rented()>=2){
        cout<<"Sorry "<<Customer_list[nooo].customer_name_getter()<<" you can't rent any other car as you already rented 2 cars at the same time"<<endl<<endl;

    }
    else if(C[wanted_car-1].is_choosen_car_rented()){

            cout<<"Sorry you can't rent this car as it's already rented to someone else"<<endl<<endl;
        }
   else if(wanted_car>=1&&wanted_car<=10){
               cout<<"please enter number of days you want to rent the car"<<endl;
        int days;
        cin>>days;
        while(true){
            if(days>30){
                cout<<"Sorry "<<days<<" days is to much, we can't agree upon this number of days"<<endl;
                 cout<<"please enter another number of days"<<endl;
                 cin>>days;
            }
            else{
                    cout<<"Total money you will pay to rent the car for "<<days<<" days is : "<<days * C[wanted_car-1].rent_per_day_getter()<<" L.E."<<endl;
                    cout<<"Are you sure that you want to complete the transaction ?"<<endl;
                    cout<<"[Y/N]"<<endl;
                    char c;
                    cin>>c;
                    if(c=='Y'){
                    cout<<"Congratulations .. The rent transaction is completed successfully"<<endl<<endl;
                 C[wanted_car-1].become_rented();
            Customer_list[nooo].add_car_to_rent(wanted_car-1);
                 C[wanted_car-1].save_name(Customer_list[nooo].customer_name_getter(),wanted_car-1);
            break;
                    }
                    if(c=='N'){
                        cout<<"The rent transaction is not completed"<<endl<<endl;
                        break;
                    }
                 else{
                    cout<<"Please make sure to enter either (Y) or (N)"<<endl<<endl;
                    break;
                 }
            }

        }

    }

        else{

cout<<"Please enter a right number range between 1 to 10"<<endl<<endl;
        }

    }
   else if(customer_choise==2){
        Customer_list[nooo].no_of_each_car__getter();
        cout<<"please enter number of car you want to return"<<endl<<endl;
   int car_no;
   cin>>car_no;
   if(Customer_list[nooo].is_no_of_each_car__exist(car_no)&&car_no!=0){
        Customer_list[nooo].remove_car_from_rent(car_no-1);
        C[car_no-1].car_is_returned();
         cout<<"Congratulations .. you have returned the car"<<endl<<endl;
   }
   else
    cout<<"Please make sure that you have entered the right car number"<<endl<<endl;
    }

   else {
            cout<<"Please make sure to enter either (1) or (2)"<<endl<<endl;
        }
}
        else{
             cout<<"Sorry .. The User Name or Password is incorrect .. please try again"<<endl<<endl;
        }
    }
    }

     else if(user_or_client==3){

             cout<<"Are you really want to Exit Program "<<endl;
     cout<<"[Y/N]"<<endl<<endl;
     char c;
     cin>>c;
     cout<<endl;
     if(c=='Y'){
        cout<<"Thanks For Using Our Program (^_^) "<<endl;
         break;
     }
         else if(c=='N')
            continue;
     }
    else{
        cout<<"Error .. please make sure that you have entered 1 , 2 or 3 :)";
        break;
    }
}

}
/*
        INPUTS:
        bmw red benz 2015 4 manual 2000
        mercedes blue benz 2000 6 automatic 5000
        bmw red benz 2001 4 manual 3000
        matsibeshi green benz 2002 4 automatic 4000
        bmw red benz 2019 6 manual 1500
        bmw yellow benz 2020 4 automatic 6000
        bmw red benz 2014 2 manual 3000
        vw brown benz 2016 4 automatic 3500
        tata red benz 2010 8 manual 8000
        bmw white benz 2012 4 automatic 2000

        Ahmed Arafat
        pass
        20 0211 cairo


*/
