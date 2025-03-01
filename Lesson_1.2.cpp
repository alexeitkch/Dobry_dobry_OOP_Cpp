// Lesson_1.2 Понятие классов и объектов
//

/*1. Подвиг 2. Используя ключевое слово class, объявите класс с именем Variable,
содержащий два публичных поля (переменные):
short var_sh;
double var_d;
P.S. В программе требуется только объявить класс, ничего более делать не нужно. */
/*
// здесь объявляйте класс Variable
class Variable {
public:
    short var_sh;
    double var_d;
};
*/

/*2.Заметка. Далее в подвигах все классы следует объявлять с помощью ключевого слова class, если не будет явно указано другое.
Подвиг 6. Объявите класс с именем CartData, содержащий следующие элементы:
- приватные переменные:
unsigned long id;
char name[100];
unsigned price;
double weight;
- публичные методы:
void get_data(unsigned long &id, unsigned &price, double &weight); // возвращает через ссылки перечисленные поля
char* get_name(); // возвращает наименование товара (поле name)
void set_data(unsigned long id, const char* name, unsigned price, double weight); // заносит в перечисленные поля переданные значения
Методы в этом и последующих подвигах должны быть с соответствующими реализациями.
В функции main создайте объект класса CartData в виде переменной с именем item (не указатель). Занесите в его поля (переменные) следующие данные:
id: 10
name: "Toy"
price: 2000
weight: 5.45
P.S. На экран ничего выводить не нужно.*/
/*
#include <iostream>
#include <string.h>
using namespace std;
// здесь объявляйте класс
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
    // здесь продолжайте функцию main
    CartData item, item1;
    item.set_data(10, "Toy", 2000, 5.45);
    item1.set_data(12, "Milk", 100, 1.5);
    
    //вывод для проверки для задания не нужен
    //unsigned long x;
    //unsigned y;
    //double w;
    //item.get_data(x, y, w);
    //cout << "id = " << x << " name = " << item.get_name() << " price = " << y << " weight = " << w << endl;
    //item1.get_data(x, y, w);
    //cout << "id = " << x << " name = " << item1.get_name() << " price = " << y << " weight = " << w << endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}
*/

/*3.Подвиг 7. Объявите класс с именем Vector3D, содержащий следующие элементы:
- приватные переменные:
int x, y, z; // координаты в трехмерном пространстве
- публичные методы:
void set_coords(int a, int b, int c); // заносит в поля x, y, z значения a, b, c
void get_coords(int& x, int& y, int& z); // возвращает (через ссылки) значения координат
При реализации метода set_coords необходимо выполнить проверку, что передаваемые координаты a, b, c 
находятся в диапазоне [-100; 100]. Если хотя бы одна координата выходит из этого диапазона, 
то поля x, y, z меняться не должны (присваивать ничего не нужно).
В функции main создайте через метод new два объекта класса Vector3D, 
на которые должны вести указатели ptr_v1, ptr_v2. Занесите в эти объекты координаты:
ptr_v1: 10, -5, 7
ptr_v2: 0, 12, -56
В конце функции main не забудьте освободить ранее выделенную память.
P.S. На экран ничего выводить не нужно.
*/
/*
#include <iostream>
using namespace std;
// здесь объявляйте класс
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
    // здесь продолжайте функцию main
    Vector3D* ptr_v1 = new Vector3D;
    Vector3D* ptr_v2 = new Vector3D;

    ptr_v1->set_coords(10, -5, 7);
    ptr_v2->set_coords(0, 12, -56);

    //вывод для проверки для задания не нужен
    //int n, m, l;
    //ptr_v1->get_coords(n, m, l);
    //cout << n << " " << m << " " << l << endl;
    //ptr_v2->get_coords(n, m, l);
    //cout << n << " " << m << " " << l << endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    // здесь освобождайте память
    delete ptr_v1;
    delete ptr_v2;
    return 0;
}*/

/*4. Подвиг 8. Объявите класс с именем Table, содержащий следующие элементы:
- приватные переменные:
unsigned width, height, depth;
- публичные методы:
void set_dims(unsigned width, unsigned height, unsigned depth); // заносит в поля width, height, depth переданные значения
unsigned get_width(); // возвращает значение поля width
unsigned get_height(); // возвращает значение поля height
unsigned get_depth(); // возвращает значение поля depth
В функции main создайте три объекта класса Table в виде обычных переменных с именами t1, t2, t3. Занесите в поля width, height, depth этих объектов значения:
t1: 10, 10, 5
t2: 7, 20, 7
t3: 12, 40, 6
P.S. На экран ничего выводить не нужно.*/
/*
#include <iostream>
using namespace std;
// здесь объявляйте класс
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
    // здесь продолжайте функцию main
    Table t1, t2, t3;
    t1.set_dims(10, 10, 5);
    t2.set_dims(7, 20, 7);
    t3.set_dims(12, 40, 6);

    //вывод для проверки
    //cout << t1.get_width() << " " << t1.get_height() << " " << t1.get_depth() << endl;
    //cout << t2.get_width() << " " << t2.get_height() << " " << t2.get_depth() << endl;
    //cout << t3.get_width() << " " << t3.get_height() << " " << t3.get_depth() << endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
        return 0;
}*/


/*5. Подвиг 9. Объявите класс с именем Clock, содержащий следующие элементы:
- приватные переменные:
unsigned time_current; // текущее время в секундах
- публичные методы:
void set_time(unsigned tm); // заносит в поле time_current значение tm
unsigned get_hours(); // возвращает количество часов в time_current
unsigned get_minutes(); // возвращает количество минут в time_current (за вычетом часов)
unsigned get_seconds(); // возвращает количество секунд в time_current (за вычетом часов и минут)
Например, для time_current = 12301, имеем:
hours = 3, minutes = 25, seconds = 1
В функции main создайте объект класса Clock с помощью оператора new с указателем ptr_cl на созданный объект. Прочитайте из входного потока текущее значение в секундах с помощью команды:
unsigned tm;
cin >> tm;
Занесите это время в объект ptr_cl, прочитайте количество часов, минут и секунд и выведите в консоль время в формате:
hh:mm:ss
где hh - часы; mm - минуты; ss - секунды. Например, при tm = 54367, вывод должен быть таким:
15:06:07
В конце функции main не забудьте освободить ранее выделенную память.*/

#include <iostream>
#include <iomanip>
using namespace std;
// здесь объявляйте класс
class Clock {
    // текущее время в секундах
    unsigned time_current;
public:
    // заносит в поле time_current значение tm
    void set_time(unsigned tm) {
        time_current = tm;
    }
    // возвращает количество часов в time_current
    unsigned get_hours() {
        return time_current / 3600;
    }
    // возвращает количество минут в time_current (за вычетом часов)
    unsigned get_minutes() {
        return time_current / 60 - this->get_hours() * 60;
    }
    // возвращает количество секунд в time_current (за вычетом часов и минут)
    unsigned get_seconds() {
        return time_current - this->get_hours() * 3600 - this->get_minutes() * 60;
    }
};
int main(void)
{
    // здесь продолжайте функцию main
    Clock* ptr_cl = new Clock;
    unsigned tm;
    cin >> tm;
    ptr_cl->set_time(tm);
    cout << setw(2) << setfill('0') << ptr_cl->get_hours() << ":" << setw(2) << setfill('0') << ptr_cl->get_minutes() << ":" << setw(2) << setfill('0') << ptr_cl->get_seconds() << endl;


    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память
    delete ptr_cl;
    return 0;
}