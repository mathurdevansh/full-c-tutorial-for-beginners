#include <iostream>
#include<string>
using namespace std;
// f(x) = x^2+2
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
class Employee{
    public:
    string name;
    int salary;
    Employee(string name, int salary, int secretpassword){
        this->name= name;
        this->salary =salary;
        this->secretpassword = secretpassword;
    }

    void printDetail()
    {
        cout<<"The name of the Employee is"<<this->name<<endl<< "The salary of employee is"<<this->salary<<endl;
    }
    void getsecreetpassword()
    {
        cout<<this->secretpassword<<endl;
    }

    private:
    int secretpassword;


  };


int main()
{
    /* cout<<"next line"<<endl;
     cout<<"devansh mathur";*/
    /*int a,b,c;
    a=56;
    cout<<a<<endl;
    short sa=45;
    cout<<sa;
    return 0;*/
    // camel case notation
    /*int marksinmaths;
   marksinmaths=87;
   cout<<marksinmaths;*/
    /*short a;
    int c;
    long d;
    long long e;
    float b;
    double b;
    long double b;
    a=55;b=67;c=5;d=34;e=43;
    cout<<"The value of a,b,c,d,eis"<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<end
    l;   */
    /*int a,b, add;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"add of two number is"<<a+b<<endl;
    cout<<"sub of two number is"<<a-b<<endl;
    cout<<"mult of two number is"<<a*b<<endl;
    cout<<"div of two number is"<<(float) a/b<<endl;*/
    /*int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    if (age>150)
    {
     cout<<"invalid age"<<endl;
    }

    else (age>=18)
    {
        cout<<"you can vote"<<"adult"<<endl;
    }


    else
    {
       cout<<"you can not vote"<<endl;
    }*/

    /*int age;
    cout << "enter the age" << endl;
    cin >> age;
    switch (age)
    {
    case 11:
        cout << "age11";
        break;
    case 12:
        cout << "age12";
        break;

    default:
        cout << "you are neither 11 nor 12 years old" << endl;
        break;
    }*/
   /*int index=0;
   do
   {
    cout<<"we have index number"<<index<<endl;
    index++;
   }while (index<30);*/
   /*int i;
   for (int i = 0; i < 10; i++)
   {
    cout<<"The value of i is"<<i<<endl;;
   }
   */
  /*int a,b, sum;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
cout<<"The function returned" <<add(a,b)<<endl;*/
  // int arr[3]= {1,3,5};
//array index   0,1,2
  // cout<<arr[5];
  /*int marks[6];
  for (int i = 0; i < 6; i++)
  {
    cout<<"Enter the marks of "<<i<<"th student"<<endl;
    cin>>marks[i];
  }
  for (int i = 0; i < 6; i++)
  {
    cout<<"marks of"<<i<<"th student is"<<marks[i]<<endl;
  }*/
 /*int arr2d[2][3]={
    {1,2,3},
    {4,5,6}
 };
 for (int i = 0; i < 2; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        cout<<"The value at"<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;

    }
    
 }*/
// Type Casting
 /*int a=34.33;
 cout<<(float) a/4;*/
  
   /*string name= "devansh";
   cout<<"the name is"<<name<<endl;
   cout<<"the length name is"<<name. length()<<endl;
   cout<<"the subscript name is"<<name.substr(0,3)<<endl;
   */
  /*int a=34;
  int* ptra;
  ptra =&a;
  cout<<*ptra ;
  cout<<"The value of a is" <<a<<endl;
  cout<<"The value of a is" <<*ptra<<endl;
  cout<<"The  address of a is" <<&a<<endl;
  cout<<"The  address of a is" <<ptra<<endl;*/
Employee dev("devansh constructor",100 , 3939);
//dev.name= "devansh";
//dev.salary=100;
dev.printDetail();
dev.getsecreetpassword();
//cout<<dev.secretpassword;
//cout<<"The name of the Employee is"<<dev.name<<endl<< "The salary of employee is"<<dev.salary<<endl;

    return 0;
} 