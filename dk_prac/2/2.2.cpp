#include <iostream>

class product {
    int id;
    int price;
    int stock;

 public:
    int get_id();
    void set_id(int new_id);

    int get_price();
    void set_price(int new_price);

    int get_stock();
    void set_stock(int new_stock);

    void set_all(int new_id, int new_price, int new_stock);
};

int product::get_id()
{
    return id;
}
int product::get_stock()
{
    return stock;
}
int product::get_price()
{
    return price;
}
void product::set_id(int new_id)
{
    id = new_id;
}
void product::set_all(int new_id, int new_price, int new_stock)
{
    id = new_id;
    price = new_price;
    stock = new_stock;
}
int main()
{
    product pen;

    pen.set_all(0, 100, 200);

    std::cout << pen.get_id() << std::endl;
    std::cout << pen.get_price() << std::endl;
    std::cout << pen.get_stock() << std::endl;
}