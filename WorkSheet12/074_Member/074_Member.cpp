#include <iostream>
#include <string.h>
using namespace std;

class Member {
private:
    char* name;
    int age;

public:
    Member(const char* name, int age) {
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy_s(this->name, len + 1, name);
        this->age = age;
    }

    ~Member() {
        if (name) {
            delete[] name;
        }
    }

    Member(const Member& rhs) {
        int len = strlen(rhs.name);
        this->name = new char[len + 1];
        strcpy_s(this->name, len + 1, rhs.name);
        this->age = rhs.age;
    }


    void changeName(const char* name) {
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy_s(this->name, len + 1, name);
    }

    void Print() {
        cout << "이름 : " << name << " 나이 : " << age << endl;
    }
};

int main() {
    Member m1("sorong", 20);
    Member m2("bongsu", 19);
    Member m3(m1);

    m3.changeName("yongkil");
    m1.Print();
    m2.Print();
    m3.Print();
    m2.changeName("yongkil");
    m2.Print();
}