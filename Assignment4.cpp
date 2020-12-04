/*My Name : Maab Ahmed Omer   //بيانات عن المبرمج 
Claas : Second 
Department : Computer 
*/
#include <iostream> //بداية البرنامج
#include <string>
using namespace std;
class Shape //تعريف كلاس اسمه shape
{
protected:
    int width, height, radius; //تعريف القيم
    float p = 3.14;            //PI قيمة الثابت
public:                        //هنا يبدأ تكوين الكلاس
    virtual int area() = 0;    //فقط للتعريف و اسناد صفر للمساحة virtual هنا استخدمنا كلمة

    void printArea(void) //(تعدد الاوجة)دالة تتعوض فيها دوال ايجاد المساحة للكلاسات الوارثة ومن ثم تقوم بطباعتها
    {
        cout << this->area() << endl;
    }

    virtual double circumference() = 0; //فقط للتعريف و اسناد صفر للمساحة virtual هنا استخدمنا كلمة

    void printCircumference(void) //(تعدد الاوجة)دالة تتعوض فيها دوال ايجاد المحيط للكلاسات الوارثة من ثم تقوم بطباعتها
    {
        cout << this->circumference() << endl;
    }

    void set_values()
    {
        cout << "width = ";
        cin >> width;
        cout << "height = ";
        cin >> height;
    }
    void set_Radius() //دالة ادخال قيمة القطر
    {
        cout << "Radius = ";
        cin >> radius;
    }
};

class Polygon : public Shape //عملية وراثة
{
public:
    int area()
    {
        return (radius * height * width); // ارجاع قيمة مساحة
    }
    double circumference()
    {
        return (width * height); //ارجاع قيمة محيط
    }
};
class Ellipse : public Shape //وراثة كلاس
{
public:
    int area()
    {
        return (p * width * height); // ارجاع قيمة مساحة
    }
    double circumference()
    {
        return (p * (radius * radius)); //ارجاع قيمة محيط
    }
};
class Rectangle : public Polygon //عملية وراثة
{
public:
    int area()
    {
        return (2 * width * 2 * height); // ارجاع قيمة مساحة
    }
    double circumference()
    {
        return ((width * height) / 2); //ارجاع قيمة محيط
    }
};
class Triangl : public Polygon //وراثة
{
public:
    int area()
    {
        return ((width * height) * 1 / 2);
    }
    double circumference()
    {
        return (width + height); //ارجاع قمة المحيط
    }
};
class Square : public Polygon //وراثة
{
public:
    int area()
    {
        return (width * height); //ارجاع قيمة المساحة
    }
    double circumference()
    {
        return (4 * height); //ارجاع قيمة المحيط
    }
};
class Circle : public Ellipse //وراثة
{
public:
    int area()
    {
        return (p / 4 * (radius * radius));
    }
    double circumference()
    {
        return (p * radius); //ارجاع قيمة المحيط
    }
};
int main()
{ //هنا يبدأ تفيذ كل المطلوب تنفيذه

    Polygon poly;   // Polygon تعريف كائن من كلاس
    Ellipse elli;   // Ellipse تعريف كائن من كلاس
    Rectangle rect; // Rectangle تعريف كائن من كلاس
    Triangl trgl;   // Triangl تعريف كائن من كلاس
    Square suqe;    // Square تعريف كائن من كلاس
    Circle cic;     // Circle  كائن من كلاس

    Shape *P1, *P2; //انشاء pointers
    Polygon *p1, *p2, *p3;
    Ellipse *p4;
    P1 = &poly; // poly للكائن pointerتم عملية اسناد
    P2 = &elli; // elli للكائن pointerتم عملية اسناد
    p1 = &rect; // rect للكائن pointerتم عملية اسناد
    p2 = &trgl; // trgl  للكائن pointerتم عملية اسناد
    p3 = &suqe; // suqe  للكائن pointerتم عملية اسناد
    p4 = &cic;  // cic للكائن pointerتم عملية اسناد

    cout << "Polygon values ";P1->set_values();P1->set_Radius(); //اعطاء القيم
    cout << "Ellipse values ";P2->set_values();P2->set_Radius();
    cout << "Rectangle values ";p1->set_values();
    cout << "Triangl values ";p2->set_values();
    cout << "Square values ";p3->set_values();
    cout << "Circle values ";p4->set_Radius();
    // تعويض في قيمة المساحة
    cout<<"\n====================Result=====================\n\n";
    cout<<"AREA:\n";
    cout << "area of Polygon = ";
    P1->printArea();
    cout << "area of Ellipse = ";
    P2->printArea();
    cout << "area of Rectancle = ";
    p1->printArea();
    cout << "area of Triangl = ";
    p2->printArea();
    cout << "area of Squar = ";
    p3->printArea();
    cout << "area of Circle = ";
    p4->printArea();
    //تعويض في قيمة المحيط
    cout << "\nCIRCUMFERENCE:\n";
    cout << "circumference of Polygon = ";
    P1->printCircumference();
    cout << "circumference of Rectangle =  ";
    p1->printCircumference();
    cout << "circumference of Triangl = ";
    p2->printCircumference();
    cout << "circumference of Squar = ";
    p3->printCircumference();
    cout << "circumference of Circle = ";
    p4->printCircumference();

    return 0; //نهاية البرنامج
}