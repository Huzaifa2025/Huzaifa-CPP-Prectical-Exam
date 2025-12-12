#include<iostream>

using namespace std;

class Shape{
    private:
        string color;

    public:
        void setData()
        {
            cout << endl;
            cout << "Enter Shape Color : ";
            cin >> color;
        }

        void getData()
        {
            // cout << endl;
            // cout << "--- User Inputed Data - - -" << endl;

            cout << "Shape Color : " << color << endl;
        }
};

class Circle : public Shape{
    private:
        int area;
        int r;

    public:

        void setCircle()
        {
            cout << endl;
            cout << "- - - Set Data For Circle - - -" << endl;

            cout << "Enter Redius : ";
            cin >> r;
        }

        void getCircle()
        {
            area = 3.14 * r * r;

            cout << endl;
            cout << "--- User Inputed Data - - -" << endl;

            cout << "Redius : " << r << endl;
            cout << "Area of Circle : " << area << endl;
        }
};

class Rectangle : public Shape{
    private:
        int area;
        int length;
        int width;

    public:
        void setRectangle()
        {
            cout << endl;
            cout << "- - - Set Data For Rectangle - - -" << endl;

            cout << "Enter Shape Length : ";
            cin >> length;

            cout << "Enter Shape Width : ";
            cin >> width;
        }

        void getRectangle()
        {
            area = length * width;

            cout << endl;
            cout << "--- User Inputed Data - - -" << endl;

            cout << "Length : " << length << endl;
            cout << "Width : " << width << endl;
            cout << "Area of Rectangle : " << area << endl;
        }
};

int main()
{
    Shape s;
    Circle c;
    Rectangle r;
    int choice;

    do
    {

        cout << endl;
        cout << "1). Press 1 for Circle." << endl;
        cout << "2). Press 1 for Rectangle." << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s.setData();
                c.setCircle();
                s.getData();
                c.getCircle();
                break;

            case 2:
                s.setData();
                r.setRectangle();
                s.getData();
                r.getRectangle();
                break;
            
            default:
                cout << "Invalid Choice...";
                break;
        }
    } while (choice != 0);
    

    return 0;
}