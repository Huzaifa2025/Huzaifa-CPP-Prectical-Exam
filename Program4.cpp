#include<iostream>

using namespace std;

class Shape {
    public:
        virtual float calculateArea() = 0;  
        virtual void draw() = 0;            
};

class Circle : public Shape {
    public:
        float r;

        float calculateArea() 
        {
            return 3.14 * r * r;
        }

        void draw() 
        {
            cout << "Drawing Circle\n";
        }
};

class Rectangle : public Shape {
    public:
        float length, width;

        float calculateArea() 
        {
            return length * width;
        }

        void draw() 
        {
            cout << "Drawing Rectangle\n";
        }
};

int main() 
{
    Circle c;
    Rectangle r;

    cout<<"Enter Redius: ";
    cin>>c.r;

    cout<<"Enter Length: ";
    cin>>r.length;

    cout<<"Enter Width: ";
    cin>>r.width;

    
    Shape* arr[2] = { &c, &r };

    cout<<endl<<"--- Output ---"<<endl;
    for (int i = 0; i < 2; i++) 
    {
        arr[i] -> draw();

        cout<<"Area = "<<arr[i]->calculateArea()<<endl;
        cout<<"-----------------"<<endl;
    }

    return 0;
}