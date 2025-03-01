// Lesson_1.2 ������� ������� � ��������
//

/*1. ������ 2. ��������� �������� ����� class, �������� ����� � ������ Variable,
���������� ��� ��������� ���� (����������):
short var_sh;
double var_d;
P.S. � ��������� ��������� ������ �������� �����, ������ ����� ������ �� �����. */
/*
// ����� ���������� ����� Variable
class Variable {
public:
    short var_sh;
    double var_d;
};
*/

/*2.�������. ����� � �������� ��� ������ ������� ��������� � ������� ��������� ����� class, ���� �� ����� ���� ������� ������.
������ 6. �������� ����� � ������ CartData, ���������� ��������� ��������:
- ��������� ����������:
unsigned long id;
char name[100];
unsigned price;
double weight;
- ��������� ������:
void get_data(unsigned long &id, unsigned &price, double &weight); // ���������� ����� ������ ������������� ����
char* get_name(); // ���������� ������������ ������ (���� name)
void set_data(unsigned long id, const char* name, unsigned price, double weight); // ������� � ������������� ���� ���������� ��������
������ � ���� � ����������� �������� ������ ���� � ���������������� ������������.
� ������� main �������� ������ ������ CartData � ���� ���������� � ������ item (�� ���������). �������� � ��� ���� (����������) ��������� ������:
id: 10
name: "Toy"
price: 2000
weight: 5.45
P.S. �� ����� ������ �������� �� �����.*/
/*
#include <iostream>
#include <string.h>
using namespace std;
// ����� ���������� �����
class CartData {
    unsigned long id;
    char name[100];
    unsigned price;
    double weight;
public:
    void get_data(unsigned long& id, unsigned& price, double& weight) {
        id = this->id;
        price = this->price;
        weight = this->weight;
    }
    char* get_name() {
        return name;
    }
    void set_data(unsigned long id, const char* name, unsigned price, double weight) {
        this->id = id;
        strcpy_s(this->name, 100, name);
        //for (int i = 0; i < 100; i++) {
            //this->name[i] = name[i];
        //}
        this->price = price;
        this->weight = weight;
    }
};

int main(void)
{
    // ����� ����������� ������� main
    CartData item, item1;
    item.set_data(10, "Toy", 2000, 5.45);
    item1.set_data(12, "Milk", 100, 1.5);
    
    //����� ��� �������� ��� ������� �� �����
    //unsigned long x;
    //unsigned y;
    //double w;
    //item.get_data(x, y, w);
    //cout << "id = " << x << " name = " << item.get_name() << " price = " << y << " weight = " << w << endl;
    //item1.get_data(x, y, w);
    //cout << "id = " << x << " name = " << item1.get_name() << " price = " << y << " weight = " << w << endl;

    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)
    return 0;
}
*/

/*3.������ 7. �������� ����� � ������ Vector3D, ���������� ��������� ��������:
- ��������� ����������:
int x, y, z; // ���������� � ���������� ������������
- ��������� ������:
void set_coords(int a, int b, int c); // ������� � ���� x, y, z �������� a, b, c
void get_coords(int& x, int& y, int& z); // ���������� (����� ������) �������� ���������
��� ���������� ������ set_coords ���������� ��������� ��������, ��� ������������ ���������� a, b, c 
��������� � ��������� [-100; 100]. ���� ���� �� ���� ���������� ������� �� ����� ���������, 
�� ���� x, y, z �������� �� ������ (����������� ������ �� �����).
� ������� main �������� ����� ����� new ��� ������� ������ Vector3D, 
�� ������� ������ ����� ��������� ptr_v1, ptr_v2. �������� � ��� ������� ����������:
ptr_v1: 10, -5, 7
ptr_v2: 0, 12, -56
� ����� ������� main �� �������� ���������� ����� ���������� ������.
P.S. �� ����� ������ �������� �� �����.
*/
/*
#include <iostream>
using namespace std;
// ����� ���������� �����
class Vector3D {
    int x, y, z;
public:
    void set_coords(int a, int b, int c) {
        if ((a < -100 || a>100) && (b < -100 || b>100) && (c < -100 || c>100)) return;
        x = a;
        y = b;
        z = c;
    }
    void get_coords(int& x, int& y, int& z) {
        x = this->x;
        y = this->y;
        z = this->z;
    }
};
int main(void)
{
    // ����� ����������� ������� main
    Vector3D* ptr_v1 = new Vector3D;
    Vector3D* ptr_v2 = new Vector3D;

    ptr_v1->set_coords(10, -5, 7);
    ptr_v2->set_coords(0, 12, -56);

    //����� ��� �������� ��� ������� �� �����
    //int n, m, l;
    //ptr_v1->get_coords(n, m, l);
    //cout << n << " " << m << " " << l << endl;
    //ptr_v2->get_coords(n, m, l);
    //cout << n << " " << m << " " << l << endl;

    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)
    // ����� ������������ ������
    delete ptr_v1;
    delete ptr_v2;
    return 0;
}*/

/*4. ������ 8. �������� ����� � ������ Table, ���������� ��������� ��������:
- ��������� ����������:
unsigned width, height, depth;
- ��������� ������:
void set_dims(unsigned width, unsigned height, unsigned depth); // ������� � ���� width, height, depth ���������� ��������
unsigned get_width(); // ���������� �������� ���� width
unsigned get_height(); // ���������� �������� ���� height
unsigned get_depth(); // ���������� �������� ���� depth
� ������� main �������� ��� ������� ������ Table � ���� ������� ���������� � ������� t1, t2, t3. �������� � ���� width, height, depth ���� �������� ��������:
t1: 10, 10, 5
t2: 7, 20, 7
t3: 12, 40, 6
P.S. �� ����� ������ �������� �� �����.*/
/*
#include <iostream>
using namespace std;
// ����� ���������� �����
class Table {
    unsigned width, height, depth;
public:
    void set_dims(unsigned width, unsigned height, unsigned depth) {
        this->width = width;
        this->height = height;
        this->depth = depth;
    }
    unsigned get_width() {
        return this->width;
    }
    unsigned get_height() {
        return this->height;
    }
    unsigned get_depth() {
        return this->depth;
    }
};
int main(void)
{
    // ����� ����������� ������� main
    Table t1, t2, t3;
    t1.set_dims(10, 10, 5);
    t2.set_dims(7, 20, 7);
    t3.set_dims(12, 40, 6);

    //����� ��� ��������
    //cout << t1.get_width() << " " << t1.get_height() << " " << t1.get_depth() << endl;
    //cout << t2.get_width() << " " << t2.get_height() << " " << t2.get_depth() << endl;
    //cout << t3.get_width() << " " << t3.get_height() << " " << t3.get_depth() << endl;

    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)
        return 0;
}*/


/*5. ������ 9. �������� ����� � ������ Clock, ���������� ��������� ��������:
- ��������� ����������:
unsigned time_current; // ������� ����� � ��������
- ��������� ������:
void set_time(unsigned tm); // ������� � ���� time_current �������� tm
unsigned get_hours(); // ���������� ���������� ����� � time_current
unsigned get_minutes(); // ���������� ���������� ����� � time_current (�� ������� �����)
unsigned get_seconds(); // ���������� ���������� ������ � time_current (�� ������� ����� � �����)
��������, ��� time_current = 12301, �����:
hours = 3, minutes = 25, seconds = 1
� ������� main �������� ������ ������ Clock � ������� ��������� new � ���������� ptr_cl �� ��������� ������. ���������� �� �������� ������ ������� �������� � �������� � ������� �������:
unsigned tm;
cin >> tm;
�������� ��� ����� � ������ ptr_cl, ���������� ���������� �����, ����� � ������ � �������� � ������� ����� � �������:
hh:mm:ss
��� hh - ����; mm - ������; ss - �������. ��������, ��� tm = 54367, ����� ������ ���� �����:
15:06:07
� ����� ������� main �� �������� ���������� ����� ���������� ������.*/

#include <iostream>
#include <iomanip>
using namespace std;
// ����� ���������� �����
class Clock {
    // ������� ����� � ��������
    unsigned time_current;
public:
    // ������� � ���� time_current �������� tm
    void set_time(unsigned tm) {
        time_current = tm;
    }
    // ���������� ���������� ����� � time_current
    unsigned get_hours() {
        return time_current / 3600;
    }
    // ���������� ���������� ����� � time_current (�� ������� �����)
    unsigned get_minutes() {
        return time_current / 60 - this->get_hours() * 60;
    }
    // ���������� ���������� ������ � time_current (�� ������� ����� � �����)
    unsigned get_seconds() {
        return time_current - this->get_hours() * 3600 - this->get_minutes() * 60;
    }
};
int main(void)
{
    // ����� ����������� ������� main
    Clock* ptr_cl = new Clock;
    unsigned tm;
    cin >> tm;
    ptr_cl->set_time(tm);
    cout << setw(2) << setfill('0') << ptr_cl->get_hours() << ":" << setw(2) << setfill('0') << ptr_cl->get_minutes() << ":" << setw(2) << setfill('0') << ptr_cl->get_seconds() << endl;


    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)

    // ����� ������������ ������
    delete ptr_cl;
    return 0;
}