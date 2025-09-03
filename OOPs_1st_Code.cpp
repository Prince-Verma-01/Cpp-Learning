#include <iostream>
#include <string>
using namespace std;

class person {
    public:
    string name;
    int age;
    
    
     person(){
        cout << "Base Constructor ;)\n";
     }; 
    
    void printInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    };
    // destructor
    ~person(){
        cout << "Base Destructor ;)\n";
    };
};

class student : public person{
    public:
    int roll;
    
    
    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << roll << endl;
    }
    student(){
        cout << "child constructor :)\n";
    }
    
    ~student(){
        cout << "child Destructor :)\n";
    }
};

int main()
{
    // person p1("ROHAN MODI",  20);
    // p1.printInfo();
    
    student s1;
    s1.name = "Aman";
    s1.age = 19;
    s1.roll = 35;
    s1.getInfo();
    
    
    return 0;
}