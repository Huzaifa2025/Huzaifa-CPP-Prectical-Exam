#include<iostream>

using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:
        void setInfo()
        {
            cout  <<endl;
            
            cout << "Enter Length : ";
            cin >> length;

            cout << "Enter Width : ";
            cin >> width;
        }

        void getInfo()
        {
            cout << endl;
            cout << "Information" << endl;
            cout << "Length : " << length << endl;
            cout << "Width : " << width << endl;
        }

        void getRectangle()
        {
            int area_of_rectangle;
            
            area_of_rectangle = length * width;

            cout << endl;

            cout << "Area of Rectangle : " << area_of_rectangle;
        }
};

int main()
{
    Rectangle r;

    r.setInfo();
    r.getInfo();
    r.getRectangle();

    return 0;
}