#include <stdio.h>
#include <string>

using namespace std;

class Person{
    
    protected:int age;
    protected:string name;
    protected:string lastName;
    
    public:Person(){}
    
    public:Person(int age, string name, string lastName){
        this->age = age;
        this->name = name;
        this->lastName = lastName;
    }
    
    bool isAdult(){
        if(age >= 18)   return true;
        else    return false;
    }

    //getters and setters
    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getLastName() const {
        return lastName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

};

//Programmer Inherited of Person
class Programmer : public Person{
    
    private:string language;

    public:Programmer(){}
    
    public:Programmer(int age, string name, string lastName, string language){
        this->age = age;
        this->name = name;
        this->lastName = lastName;
        this->language = language;
    }

    string getLanguage() const {
        return language;
    }

    void setLanguage(string language) {
        this->language = language;
    }
       
    void writeCode(){
        printf("The programmer is writing code in c++...\n");
    }
};
