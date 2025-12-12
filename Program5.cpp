#include<iostream>

using namespace std;

class Animal{
    public:
        virtual void sound() = 0;

        virtual void move() = 0;

        virtual ~Animal() 
        {

        }
};

class Dog : public Animal{
    public:
        void sound() override
        {
            cout << endl;
            cout << "Dog is roaring in the Street.";
        }

        void move() override
        {
            cout << endl;
            cout << "Dog is moving in the Street." << endl;
        }
};

class Bird : public Animal{
    public:
        void sound() override
        {
            cout << endl;
            cout << "Bird is Making Sound.";
        }

        void move() override
        {
            cout << endl;
            cout << "Bird is Moving." << endl;
        }
};

int main()
{
    Dog d;
    Bird b;

    Animal *animal[2];
    animal[0] = &d;
    animal[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        animal[i] -> sound();
        animal[i] -> move();
        cout << "- - - - - - - - - - - - - - - - -" << endl;
    }

    return 0;
}