// Lesson_1.3 ������ ������� public � private
//

/*������ 6. �������� ����� � ������ Goods, ���������� ��������� ��������:
- ��������� ����������:
std::string name;  // ��������
double weight;  // ���
int price;   // ����
- ��������� ������:
const std::string& get_name(); // ���������� ������ �� ���� name
double get_weight(); // ���������� �������� ���� weight
int get_price(); // ���������� �������� ���� price
� ������� main �������� ��� ������� ������ Goods � ���� ������� ���������� � ������� book � toy. 
� ���� ���� �������� �������� ��������� ������:
book: name="������ ���"; weight=234.5; price=2000
toy: name="Oculus Quest 3"; weight=204.6; price=80000
P.S. �� ����� ������ �������� �� �����.*/
/*
#include <iostream>
#include <string>

// ����� ���������� �����
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
    // ����� ����������� ������� main
    Goods book, toy;
    book.name = "������ ���";
    book.weight = 234.5;
    book.price = 2000;

    toy.name = "Oculus Quest 3";
    toy.weight = 204.6;
    toy.price = 80000;

    std::cout << toy.get_name();

    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)
    return 0;
}*/

/*2.������ 7. �������� ����� � ������ Notes, ���������� ��������� ��������:
- ��������� ����������:
std::string title;  // ��������
std::string author;  // �����
int pages;   // ����� �������
- ��������� ������:
void set_data(const std::string& title, const std::string& author, int pages); // ������� � ��������������� ���� ���������� ��������
void set_data(const Notes& note); // ������� � ��������������� ���� �������� �� ����������� ������� note
const std::string& get_title(); // ���������� ������ �� ���� title
const std::string& get_author(); // ���������� ������ �� ���� author
int get_pages(); // ���������� �������� ���� pages
� ������� main �������� ��� ������� ������ Notes � ������� ��������� new � ����������� ptr_note1, ptr_note2 �� ��������� �������. 
�������� � ������ ������ (����� ��������� ptr_note1) ������:
"�������� ��������", "�. �����", 5
�������� �� ������ ������ (ptr_note2) ������ �� ������� �������, ��������� ����� void set_data(const Notes& note).
� ����� ������� main �� �������� ���������� ����� ���������� ������.
P.S. �� ����� ������ �������� �� �����.*/

#include <iostream>
#include <string>

// ����� ���������� �����

int main(void)
{
    // ����� ����������� ������� main

    //__ASSERT_TESTS__ // ���������������� ��� ������������ (�� ������� � ������ ���� ��������������� ����� return 0 ��� ����� ������������� ������)

    // ����� ������������ ������

    return 0;
}
