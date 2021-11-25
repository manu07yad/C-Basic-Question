#include<iostream>
using namespace std;
//abstraction
class AbstractEmployee
{
    virtual void Promotion()=0;
    
};
//classes are private by default
class Employee: AbstractEmployee
{
  protected:
  //Encapsulated
  //class attribute
  string Name;
  private:
  string Company;
  int Age;
  public:
  //setter
  void setName(string name)
  {
     Name=name;
  }
  //getter
  string getName()
  {
     return Name;
  }
  //setter
  void setCompany(string company)
  {
     Company=company;
  }
  //getter
  string getCompany()
  {
     return Company;
  }
  //setter
  void setAge(int age)
  {
     if(age>=18)
     {
     Age=age;
     }
  }
  //getter
  int getAge()
  {
     return Age;
  }
  //class method
   void Intro()
   {
      cout<<"I am "<<Name<<endl;
      cout<<"Age is: "<<Age<<endl;
      cout<< "Working in "<<Company<<endl;  
   }
  //abstract class
   void Promotion()
   {
      if(Age>40)
      {
         cout<<Name<<" got promoted."<<endl;
      }
      else{
         cout<<Name<<" Sorry not promoted!"<<endl;
      }
   }
   //contructor
   Employee(string name, string company, int age)// parametrized 
   {
        Name=name;
        Company=company;
        Age=age;
      
   }
   virtual void work()
   {
      cout<< Name<<" loves dancing"<<endl;
   }

};

class Developer: public  Employee
{
   public:
   string language;
   Developer( string name, string company, int age, string lang):Employee(name,company,age)
   {
       language=lang;
   }
   void setlang(string lang)
   {
      language=lang;
   }
   string getlang()
   {
      return language;
   }
   void program()
   {
      cout<<getName()<<" code in "<<getlang() <<" in company: "<<getCompany()<<endl;
   }
   void work()
   {
      cout<< Name<<" loves writing"<<endl;
   }
  
};
class Teacher: public  Employee
{
   public:
   string subject;
   Teacher( string name , string company , int age, string sub):Employee(name,company,age)
   {
       subject=sub;
   }
   void setsub(string sub)
   {
      subject=sub;
   }
   string getsub()
   {
      return subject;
   }
   void programmer()
   {
      cout<<getName()<<" code in "<<getsub() <<" in company: "<<getCompany()<<endl;
   }
   void work()
   {
      cout<< Name<<" loves reading"<<endl;
   }
  
};
int main()
{
    //Employee emp = Employee("ABC", "XYZ",30); //constructor
     //emp.Intro();
     //Employee emp1 = Employee("Manasvi", "Amozon",45);
     Developer dev = Developer("Tanu", "Infosys", 25, "C++");
     dev.program();
     Teacher t = Teacher("Manu", "Microsoft", 30, "JAVA");
     t.programmer();
     t.Promotion();
     dev.Promotion();
     t.work();
     dev.work();
     Employee *e1 = &dev;
      Employee *e2 = &t;
      e1->work();
      e2->work();

     //emp.Promotion();
     //emp1.Promotion();
     //emp1.Intro();
     //emp.setAge(16);
     //emp.setName("Ayush");
     //emp.setCompany("Google");
     //cout<<"Name is "<<emp.getName()<<" Age is " <<emp.getAge()<<" Company is: "<<emp.getCompany();

   
   
}
//access modifier:private, public,protected

//if we assign access modifier as protected then members can be accesed by the derived class