// Lesson_1.3 Режимы доступа public и private
//

/*Подвиг 6. Объявите класс с именем Goods, содержащий следующие элементы:
- публичные переменные:
std::string name;  // название
double weight;  // вес
int price;   // цена
- публичные методы:
const std::string& get_name(); // возвращает ссылку на поле name
double get_weight(); // возвращает значение поля weight
int get_price(); // возвращает значение поля price
В функции main создайте два объекта класса Goods в виде обычных переменных с именами book и toy. 
В поля этих объектов занесите следующие данные:
book: name="Основы ООП"; weight=234.5; price=2000
toy: name="Oculus Quest 3"; weight=204.6; price=80000
P.S. На экран ничего выводить не нужно.*/
/*
#include <iostream>
#include <string>

// здесь объявляйте класс
class Goods {
public:
    std::string name;
    double weight;
    int price;

    const std::string& get_name() {
        return name;
    }
    double get_weight() {
        return weight;
    }
    int get_price() {
        return price;
    }
};
int main(void)
{
    // здесь продолжайте функцию main
    Goods book, toy;
    book.name = "Основы ООП";
    book.weight = 234.5;
    book.price = 2000;

    toy.name = "Oculus Quest 3";
    toy.weight = 204.6;
    toy.price = 80000;

    std::cout << toy.get_name();

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}*/

/*2.Подвиг 7. Объявите класс с именем Notes, содержащий следующие элементы:
- приватные переменные:
std::string title;  // название
std::string author;  // автор
int pages;   // число страниц
- публичные методы:
void set_data(const std::string& title, const std::string& author, int pages); // заносит в соответствующие поля переданные значения
void set_data(const Notes& note); // заносит в соответствующие поля значения из переданного объекта note
const std::string& get_title(); // возвращает ссылку на поле title
const std::string& get_author(); // возвращает ссылку на поле author
int get_pages(); // возвращает значение поля pages
В функции main создайте два объекта класса Notes с помощью оператора new с указателями ptr_note1, ptr_note2 на созданные объекты. 
Занесите в первый объект (через указатель ptr_note1) данные:
"Фантазия экспромт", "Ф. Шопен", 5
Занесите во второй объект (ptr_note2) данные из первого объекта, используя метод void set_data(const Notes& note).
В конце функции main не забудьте освободить ранее выделенную память.
P.S. На экран ничего выводить не нужно.*/

#include <iostream>
#include <string>

// здесь объявляйте класс

int main(void)
{
    // здесь продолжайте функцию main

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память

    return 0;
}
