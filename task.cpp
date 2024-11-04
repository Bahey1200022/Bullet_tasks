#include <iostream>
#include <string>
#include <vector>


class person{
    public:
    std::string name;
    int age;
    static int ID;
    person(std::string name, int age):name(name),age(age){
        ID++;
    }


};
int person::ID = 0;

enum class process{
    add=1,
    fetch,
    quit
};
std::istream& operator>>(std::istream& input, process& value){
    int option;
    input >> option;
    value = static_cast<process>(option);
    return input;
}
process getProcess(){
    process input;
    std::cout<<"Please select an option:\n";
    std::cout<<"1. Add User\n";
    std::cout<<"2. Fetch User\n";
    std::cout<<"3. Quit\n";
    std::cin>>input;
    return input;
    }

void addPerson(std::vector<person>& people){
    std::cout<<"Add User,enter name & age\n";
int age;
std::string name;
std::cout<<"Enter Name \n";
std::cin>>name;
std::cout<<"Enter Age\n";
std::cin>>age;
person p(name,age);
people.push_back(p);
std::cout<<"User Added\n";
}
void fetchPerson(std::vector<person>& people){
    std::cout<<"Fetch, Enter User ID\n";
    int id;
    std::cin>>id;
    if(id<people.size()){
        std::cout<<"id: "<<id<<"\n";
        std::cout<<"Name: "<<people[id].name<<"\n";
        std::cout<<"Age: "<<people[id].age<<"\n";
    }else{
        std::cout<<"Invalid ID\n";
    }

}

int main() {
    std::vector<person> people;

    std::cout<<"User Sign Up Application\n";
    bool isRunning = true;
    while(isRunning){
        process option= getProcess();
        switch(option){
            case process::add:
                addPerson(people);
                break;
            case process::fetch:
                fetchPerson(people);
                break;
            case process::quit:
                std::cout<<"Quit\n";
                isRunning = false;
                break;
            default:
                std::cout<<"Invalid Option\n";
                break;
        }

    }

    return 0;
}