#include <iostream>

/*2.1 task1*/
/*
// здесь объявляйте класс
class Wallet {
    long volume;
public:
    Wallet(long a = 0) : volume(a) 
        {}
    // заносит в поле volume переданное значение volume
    void set_volume(long volume) {
        this->volume = volume;
    }
    // возвращает значение volume
    long get_volume() {
        return volume;
    }
};
int main(void)
{
    // здесь продолжайте функцию main
    Wallet wt1(1000), wt2;
    
    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}*/

/*2.1 task2*/
/*
#include <iostream>

// здесь объявляйте класс
class TriangleChecker {
    int a, b, c;
public:
    TriangleChecker(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z)
        {}
    int is_triangle() {
        if(a <= 0 || b <= 0 || c <= 0) 
            return 1;
        if (a + b <= c || a + c <= b || c + b <= a) 
            return 2;
        else
            return 3;
    }
};
int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    // здесь продолжайте функцию main
    TriangleChecker* ptr_tr = new TriangleChecker(a, b, c);
    std::cout << ptr_tr->is_triangle() << std::endl;
    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память
    delete ptr_tr;
    return 0;
}*/

/*2.1 task3 */
/**
#include <iostream>

struct Point
{
    short x, y;
};

// здесь объявляйте класс Line
class Line {
    short x0, y0, x1, y1;
public:
    Line(): x0(0), y0(0), x1(0), y1(0)
    {}
    Line(short a = 0, short b = 0, short c = 0, short d = 0): x0(a), y0(b), x1(c), y1(d)
    {}
    Line(Point a, Point b): x0(a.x), y0(a.y), x1(b.x), y1(b.y)
    {}
    // заносит в поля x0, y0, x1, y1 переданные значения
    void set_coords(short a, short b, short c, short d) {
        x0 = a;
        y0 = b;
        x1 = c;
        y1 = d;
    }
    // заносит в поля x0, y0, x1, y1 переданные значения типа Point
    void set_coords(Point sp, Point ep) {
        x0 = sp.x;
        y0 = sp.y;
        x1 = ep.x;
        y1 = ep.y;
    }
    // возвращает координаты (x0, y0) в виде структуры Point
    Point get_start() {
        Point a;
        a.x = x0;
        a.y = y0;
        return a;
    }
    // возвращает координаты (x1, y1) в виде структуры Point
    Point get_end() {
        Point a;
        a.x = x1;
        a.y = y1;
        return a;
    }
};

int main(void)
{
    Point sp, ep;
    short a, b, c, d;

    std::cin >> a >> b >> c >> d;
    std::cin >> sp.x >> sp.y >> ep.x >> ep.y;

    // здесь создавайте объекты класса Line
    Line* ptr_ln1 = new Line(a, b, c, d);
    Line* ptr_ln2 = new Line(sp, ep);
    std::cout << ptr_ln1->get_start().x << " " << ptr_ln1->get_start().y << " " << ptr_ln1->get_end().x << " " << ptr_ln1->get_end().y 
    << " " << ptr_ln2->get_start().x << " " << ptr_ln2->get_start().y << " " << ptr_ln2->get_end().x << " " << ptr_ln2->get_end().y << std::endl;
    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память
    delete ptr_ln1;
    delete ptr_ln2;
    return 0;
}*/

/*2.1 task4*/
#include <iostream>

struct Point
{
    short x, y;
};

// здесь объявляйте класс PolyLine
class PolyLine {
    enum{max_coords = 10};
    // координаты точек полилинии
    Point coords[max_coords];
    // количество точек полилинии
    int total{0};
public:
    PolyLine() {}
    PolyLine(Point* arr, int size_ar)
    { 
        set_coords(arr, size_ar);
    }

    // передача массива координат размером size элементов
    void set_coords(const Point* ar, int size) {
        size < max_coords ? total = size : total = max_coords;   
        for(int i = 0; i < total; i++, ar++) {
            coords[i] = *ar;
        }
    } 
    // добавление в конец массива coords переданной координаты pt
    void append_coord(Point pt) {
        coords[total++] = pt;
    }
    // получение списка координат
    const Point* get_coords() {
        return coords;
    }
    // получение значения поля total
    int get_total() {
        return total;
    }
};
int main(void)
{
    Point coords[20];
    for(int i = 0;i < 20; ++i) {
        coords[i].x = i+1;
        coords[i].y = i+2;
    }

    // здесь создавайте объекты класса PolyLine
    PolyLine poly(coords, 20), pl;
    pl.append_coord(coords[19]);
    
    int n = pl.get_total();
    for(int i = 0; i < n; i++) {
        Point a = *(pl.get_coords() + i);
        std::cout << a.x << " " << a.y << std::endl;
    }
    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    return 0;
}