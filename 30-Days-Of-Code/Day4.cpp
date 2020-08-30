#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };


    Person::Person(int initialAge){

        if(initialAge>0)
            age = initialAge;
        else{
            cout <<"Age is not valid, setting age to 0.\n";
            age = 0;
        }
    }

    void Person::amIOld(){

        string message;
        if(age<13)
            message = "You are young.";
        else if(age>=13 && age<18)
                message = "You are a teenager.";
            else
                message = "You are old.";
        cout << message << endl;

    }

    void Person::yearPasses(){

        age = age + 1;

    }
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
