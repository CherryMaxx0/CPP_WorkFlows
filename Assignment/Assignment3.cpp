#include<iostream>
#include<string>
using namespace std;

//Task 1: A Class named Employee
class Employee{
    static const int n=5;
    string name;
    int id;
    string hobby[n];
public:
    //Task 3: Method name setEmployee to set the values of each employee
    void setEmployee(string name, int id, string hobby[]){
        this->name=name;
        this->id=id;
        for(int i=0;i<n;i++) {
            this->hobby[i]=hobby[i];
        }
    }
    
    //Task 1: Methods to print out info of each employee
    void printInfo(){
        cout<<name<<endl;
        cout<<id<<endl;
    }
    void printHobby(){
        for(int i=0;i<n;i++) {
            cout<<this->hobby[i]<<" ";
        }
        cout<<"\n";
    }

    //Task 4: Methods to set and get info of each employee
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }
    void setHobby(string hobby[]){
        for(int i=0;i<n;i++) {
            this->hobby[i]=hobby[i];
        }
    }
    void getHobby(){
        for(int i=0;i<n;i++) {
            cout<<hobby[i]<<" ";
        }
        cout<<"\n";        
    }
};

//Task 2: 2 objects for two separate employee
int main(void){
    Employee employee1, employee2;
    
    string hobEmp1[]={"Sketching","Musicianship","Gaming","Photography","Animating"};
    employee1.setEmployee("Cherry",18,hobEmp1);
    employee1.printInfo();
    employee1.printHobby();

    string hobEmp2[]={"Singing","Reading","Traveling","Foodie","Dressmaking"};
    employee2.setName("Tanako");
    employee2.setId(22);
    employee2.setHobby(hobEmp2);
    cout<<employee2.getName()<<endl;
    cout<<employee2.getId()<<endl;
    employee2.getHobby();
    
}