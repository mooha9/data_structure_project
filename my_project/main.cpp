#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include <vector>
#include <list>

struct Product
{
    std::string name;
    int price;
    int pieces;
};

struct order_a
{
    std::string name;
    int price;
    int pieces;
};

void choice(std::vector<Product> &list_o, std::list<order_a> &order_o, std::vector<Product> &list_oo, std::list<order_a> &order_oo, std::vector<Product> &list_ooo, std::list<order_a> &order_ooo, std::vector<Product> &list_oooo, std::list<order_a> &order_oooo);
void canned_food(std::vector<Product> &list_o, std::list<order_a> &order_o);
void ftuit_veg(std::vector<Product> &list_oo, std::list<order_a> &order_oo);
void clean(std::vector<Product> &list_ooo, std::list<order_a> &order_ooo);
void drinks(std::vector<Product> &list_oooo, std::list<order_a> &order_oooo);
void add();
void deleted();
void search();
void orders();
void fruit_struct(std::vector<Product> &list_oo);
void clean_struct(std::vector<Product> &list_ooo);
void drink_struct(std::vector<Product> &list_oooo);
void init(std::vector<Product> &list_o);

int main()
{
    std::vector<Product> list_o = std::vector<Product>();
    std::list<order_a> order_o;
    init(list_o);

    std::vector<Product> list_oo = std::vector<Product>();
    std::list<order_a> order_oo;
    fruit_struct(list_oo);

    std::vector<Product> list_ooo = std::vector<Product>();
    std::list<order_a> order_ooo;
    clean_struct(list_ooo);

    std::vector<Product> list_oooo = std::vector<Product>();
    std::list<order_a> order_oooo;
    drink_struct(list_oooo);

    int number;
    std::string name;
    int a;
    std::cout << "\t\t\t ~~~~~~~~~~~~~ \t\t\t\n";
    std::cout << "\n\n\t\t\t  * HELLO AND WELCOME IN KIWI STORE * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~ \t\t\t\n\n\n";
    std::cout << " IF YOU WANT TO GET A DISCOUNT 5%  JUST SIGN IN (press any number)  \n IF YOU DON'T NEED A DISCOUNT (press 0) \n Your Answer: ";
    std::cin >> a;
    std::cout << "\n";

    if (a == 0)
    {
        choice(list_o, order_o, list_oo, order_oo, list_ooo, order_ooo, list_oooo, order_oooo);

    }
    else
    {
        std::cout << "Write Your Number:\n";
        std::cin >> number;
        std::cout << "Write Your Name:\n";
        std::cin >> name;
        std::cout << "Hello And Welcome   In Our Stor " << "( " << name << " ) \n";
        choice(list_o, order_o, list_oo, order_oo, list_ooo, order_ooo, list_oooo, order_oooo);
    }

    return 0;
}

void orders(std::list<order_a> order_o, std::list<order_a> order_oo, std::list<order_a> order_ooo, std::list<order_a> order_oooo)
{
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n";
    std::cout << "\n\n\t\t\t * Here You Will See Your Shopping Cart * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n\n\n";
    std::cout << "Name Of Prudect :               Price Of Prudect :                  Pieces :              Total :\n\n\n";
    for (order_a i : order_o)
    {
        std::cout << i.name << "                      " << i.price << "                               " << i.pieces << "                    =" << i.pieces*i.price << "\n\n";
    }
    for (order_a i : order_oo)
    {
        std::cout << i.name << "                      " << i.price << "                               " << i.pieces << "                    =" << i.pieces*i.price << "\n\n";
    }
    for (order_a i : order_ooo)
    {
        std::cout << i.name << "                      " << i.price << "                               " << i.pieces << "                    =" << i.pieces*i.price << "\n\n";
    }
    for (order_a i : order_oooo)
    {
        std::cout << i.name << "                      " << i.price << "                               " << i.pieces << "                    =" << i.pieces*i.price << "\n\n";
    }
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n";
    std::cout << "\n\n\t\t\t * THANK YOU FOR SHOPPING IN KIWI STORE * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n\n\n\n\n\n";

    //    if ()
    {

    }
    //    else
    {

    }
}

void init(std::vector<Product> &list_o)
{
    Product p
    {
        "Salmon            ",
        12,
        10
    };

    Product c
    {
        "Pinto Bean         ",
        5,
        10
    };
    Product cc
    {
      "Tomatoes           ",
        6,
        10
    };
    Product ccc
    {
      "Smoked Mackerel   ",
        15,
        10
    };
    Product cccc
    {
        "Sardines           ",
        4,
        10
    };

    list_o.push_back(p);
    list_o.push_back(c);
    list_o.push_back(cc);
    list_o.push_back(ccc);
    list_o.push_back(cccc);
}

void cannde_food(std::vector<Product> &list_o, std::list<order_a> &order_o)
{



    //
    //       for (auto i{list_o.begin()}; i != list_o.end(); ++i)
    //       {
    //           std::cout<<i->name<<"       "<<i->price<<"        "<<i->paces<<"\n";
    //       }

    //          if(choice1 == 10)
    //          {
    //             Product i ;
    //             std::cout<<i.name<<i.price<<i.paces;
    //          }
    //
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t";
    std::cout << "\n\n\n\t\t\t  * You Are In The Canned Food Department * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n\n\n";
    for (Product i : list_o)
    {
        std::cout << "Name Of Prudect :               Price Of Prudect :                  Pieces :              \n";
        std::cout << i.name << "                      " << i.price << "                             " << i.pieces << "\n\n";
    }

    while (true)
    {
        std::cout << "\n\nChoice (0) If You Want Buy , Choice (5) If You Want Return Back The Menu\n";
        std::cout << "Your Choice : ";
        int choice1;
        std::cin >> choice1;
        std::cout << "\n";
        switch (choice1)
        {
        case 0:
            std::cout << "0-Salmon\n1-Pinto Beans\n2-Tomatoes\n3-Smoked Mackerel\n4-Sardines\n";
            //                    std::cout << "Enter Number Any Product That You Need To see details\n\nYour Answer:";
            std::cout << "Choice Any Prudoct Number From(0-4)\n";
            std::cout << "Your Choice : ";
            std::cin >> choice1;
            std::cout << "\n";
            if (choice1 > 4)
            {
                std::cout << "Invalid Choice \n";
                break;
            }
            std::cout << "How Many Pieces Do you Want?\nYour Answer:";
            int b;
            std::cin >> b;
            std::cout << "\n";
            if (b <= list_o.at(choice1).pieces)
            {
                std::cout << "Total = " << b * list_o.at(choice1).price << " SR\n";

                list_o.at(choice1).pieces = b;
                order_a new_order{ list_o.at(choice1).name , list_o.at(choice1).price , list_o.at(choice1).pieces };
                order_o.push_back(new_order);
            }

            else
            {
                std::cout << "The Stock Has Just " << list_o.at(choice1).pieces << " Pieces\n";

            }


            break;

        case 5:
            return;
            break;

        default:
            std::cout << "Invalid choice\n";
            std::cout << "Choice Again \n\n";


            break;
        }
    }
}

void fruit_struct(std::vector<Product> &list_oo) {
    Product first
    {
        "Apple              ",
        2,
        100
    };

    Product second
    {
        "Potatoes           ",
        5,
        100
    };
    Product third
    {
      "Banana               ",
        3,
        100
    };
    Product fourth
    {
      "Tomatoes           ",
        6,
        100
    };
    Product fivth
    {
        "Kiwi               ",
        7,
        100
    };



    list_oo.push_back(first);
    list_oo.push_back(second);
    list_oo.push_back(third);
    list_oo.push_back(fourth);
    list_oo.push_back(fivth);
}

void fruit_veg(std::vector<Product> &list_oo, std::list<order_a> &order_oo)
{



    //
    //       for (auto i{list_o.begin()}; i != list_o.end(); ++i)
    //       {
    //           std::cout<<i->name<<"       "<<i->price<<"        "<<i->paces<<"\n";
    //       }

    //          if(choice1 == 10)
    //          {
    //             Product i ;
    //             std::cout<<i.name<<i.price<<i.paces;
    //          }
    //
    std::cout << "\t\t\t ~~~~~~~~~~~~~~~~~ \t\t\t";
    std::cout << "\n\n\n\t\t\t  * You Are In Fruit And Vegetables Department * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~~~~ \t\t\t\n\n\n";
    for (Product i : list_oo)
    {
        std::cout << "Name Of Prudect :               Price Of Prudect :                  Pieces :              \n";
        std::cout << i.name << "                      " << i.price << "                             " << i.pieces << "\n\n";
    }

    while (true)
    {
        std::cout << "\n\nChoice (0) If You Want Buy , Choice (5) If You Want Return Back The Menu\n";
        std::cout << "Your Choice : ";
        int choice1;
        std::cin >> choice1;
        std::cout << "\n";
        switch (choice1)
        {
        case 0:
            std::cout << "0-Apple\n1-Potatoes\n2-Banana\n3-Tomatoes\n4-Kiwi\n";
            //                    std::cout << "Enter Number Any Product That You Need To see details\n\nYour Answer:";
            std::cout << "Choice Any Prudoct Number From(0-4)\n";
            std::cout << "Your Choice : ";
            std::cin >> choice1;
            std::cout << "\n";
            if (choice1 > 4)
            {
                std::cout << "Invalid Choice \n";
                break;
            }
            std::cout << "How Many Pieces Do you Want?\nYour Answer:";
            int b;
            std::cin >> b;
            std::cout << "\n";
            if (b <= list_oo.at(choice1).pieces)
            {
                std::cout << "Total = " << b * list_oo.at(choice1).price << " SR\n";

                list_oo.at(choice1).pieces = b;
                order_a new_order{ list_oo.at(choice1).name , list_oo.at(choice1).price , list_oo.at(choice1).pieces };
                order_oo.push_back(new_order);
            }

            else
            {
                std::cout << "The Stock Has Just " << list_oo.at(choice1).pieces << " Pieces\n";

            }


            break;

        case 5:
            return;
            break;

        default:
            std::cout << "Invalid choice\n";
            std::cout << "Choice Again \n\n";


            break;
        }
    }
}
void clean_struct(std::vector<Product> &list_ooo) {
    Product first
    {
        "Tide              ",
        11,
        100
    };

    Product second
    {
        "Dettol             ",
        6,
        100
    };
    Product third
    {
      "Dac               ",
        17,
        100
    };
    Product fourth
    {
      "Wow               ",
        13,
        100
    };
    Product fivth
    {
        "Gento             ",
        14,
        100
    };



    list_ooo.push_back(first);
    list_ooo.push_back(second);
    list_ooo.push_back(third);
    list_ooo.push_back(fourth);
    list_ooo.push_back(fivth);
}

void clean(std::vector<Product> &list_ooo, std::list<order_a> &order_ooo)
{



    //
    //       for (auto i{list_o.begin()}; i != list_o.end(); ++i)
    //       {
    //           std::cout<<i->name<<"       "<<i->price<<"        "<<i->paces<<"\n";
    //       }

    //          if(choice1 == 10)
    //          {
    //             Product i ;
    //             std::cout<<i.name<<i.price<<i.paces;
    //          }
    //
    std::cout << "\t\t\t ~~~~~~~~~~~~~~~ \t\t\t";
    std::cout << "\n\n\n\t\t\t  * You Are In The Clean Tool Department * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~~ \t\t\t\n\n\n";
    for (Product i : list_ooo)
    {
        std::cout << "Name Of Prudect :               Price Of Prudect :                  Pieces :              \n";
        std::cout << i.name << "                      " << i.price << "                             " << i.pieces << "\n\n";
    }

    while (true)
    {
        std::cout << "\n\nChoice (0) If You Want Buy , Choice (5) If You Want Return Back The Menu\n";
        std::cout << "Your Choice : ";
        int choice1;
        std::cin >> choice1;
        std::cout << "\n";
        switch (choice1)
        {
        case 0:
            std::cout << "0-Tide\n1-Dettol\n2-Dec\n3-Wow\n4-Gento\n";
            //                    std::cout << "Enter Number Any Product That You Need To see details\n\nYour Answer:";
            std::cout << "Choice Any Prudoct Number From(0-4)\n";
            std::cout << "Your Choice : ";
            std::cin >> choice1;
            std::cout << "\n";
            if (choice1 > 4)
            {
                std::cout << "Invalid Choice \n";
                break;
            }
            std::cout << "How Many Pieces Do you Want?\nYour Answer:";
            int b;
            std::cin >> b;
            std::cout << "\n";
            if (b <= list_ooo.at(choice1).pieces)
            {
                std::cout << "Total = " << b * list_ooo.at(choice1).price << " SR\n";

                list_ooo.at(choice1).pieces = b;
                order_a new_order{ list_ooo.at(choice1).name , list_ooo.at(choice1).price , list_ooo.at(choice1).pieces };
                order_ooo.push_back(new_order);
            }

            else
            {
                std::cout << "The Stock Has Just " << list_ooo.at(choice1).pieces << " Pieces\n";

            }


            break;

        case 5:
            return;
            break;

        default:
            std::cout << "Invalid choice\n";
            std::cout << "Choice Again \n\n";


            break;
        }
    }
}
void drink_struct(std::vector<Product> &list_oooo) {
    Product first
    {
        "Orange Juice       ",
        7,
        100
    };

    Product second
    {
        "Water              ",
        1,
        100
    };
    Product third
    {
      " Apple Juice       ",
        8,
        100
    };
    Product fourth
    {
      "Coca Cola          ",
        3,
        100
    };
    Product fivth
    {
        "Milk              ",
        14,
        100
    };



    list_oooo.push_back(first);
    list_oooo.push_back(second);
    list_oooo.push_back(third);
    list_oooo.push_back(fourth);
    list_oooo.push_back(fivth);
}

void drinks(std::vector<Product> &list_oooo, std::list<order_a> &order_oooo)
{



    //
    //       for (auto i{list_o.begin()}; i != list_o.end(); ++i)
    //       {
    //           std::cout<<i->name<<"       "<<i->price<<"        "<<i->paces<<"\n";
    //       }

    //          if(choice1 == 10)
    //          {
    //             Product i ;
    //             std::cout<<i.name<<i.price<<i.paces;
    //          }
    //
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t";
    std::cout << "\n\n\n\t\t\t  * You Are In The Drinks Department * \t\t\t\n\n\n";
    std::cout << "\t\t\t ~~~~~~~~~~~~~~ \t\t\t\n\n\n";
    for (Product i : list_oooo)
    {
        std::cout << "Name Of Prudect :               Price Of Prudect :                  Pieces :              \n";
        std::cout << i.name << "                      " << i.price << "                             " << i.pieces << "\n\n";
    }

    while (true)
    {
        std::cout << "\n\nChoice (0) If You Want Buy , Choice (5) If You Want Return Back The Menu\n";
        std::cout << "Your Choice : ";
        int choice1;
        std::cin >> choice1;
        std::cout << "\n";
        switch (choice1)
        {
        case 0:
            std::cout << "0-Orange Juice \n1-Water\n2-Apple Juice \n3-Coca Cola\n4-Milk\n";
            //                    std::cout << "Enter Number Any Product That You Need To see details\n\nYour Answer:";
            std::cout << "Choice Any Prudoct Number From(0-4)\n";
            std::cout << "Your Choice : ";
            std::cin >> choice1;
            std::cout << "\n";
            if (choice1 > 4)
            {
                std::cout << "Invalid Choice \n";
                break;
            }
            std::cout << "How Many Pieces Do you Want?\nYour Answer:";
            int b;
            std::cin >> b;
            std::cout << "\n";
            if (b <= list_oooo.at(choice1).pieces)
            {
                std::cout << "Total = " << b * list_oooo.at(choice1).price << " SR\n";

                list_oooo.at(choice1).pieces = b;
                order_a new_order{ list_oooo.at(choice1).name , list_oooo.at(choice1).price , list_oooo.at(choice1).pieces };
                order_oooo.push_back(new_order);
            }

            else
            {
                std::cout << "The Stock Has Just " << list_oooo.at(choice1).pieces << " Pieces\n";

            }


            break;

        case 5:
            return;
            break;

        default:
            std::cout << "Invalid choice\n";
            std::cout << "Choice Again \n\n";


            break;
        }
    }
}
void choice(std::vector<Product> &list_o, std::list<order_a> &order_o, std::vector<Product> &list_oo, std::list<order_a> &order_oo, std::vector<Product> &list_ooo, std::list<order_a> &order_ooo, std::vector<Product> &list_oooo, std::list<order_a> &order_oooo)
{
    int choice;
    while (true)
    {
        std::cout << "\t\t\t ~~~~~~~~~~~~~ \t\t\t";
        std::cout << "\n\n\n\t\t\t * Here You Will See All Departments * \t\t\t\n\n\n";
        std::cout << "\t\t\t ~~~~~~~~~~~~~ \t\t\t\n\n\n";

        std::cout << "1-Canned Food\n2-Fruit And Vegetables\n3-Clean Tool\n4-Drinks\n5-Orders\n6-Exit\n";
        std::cout << "Enter Number Any Department That You Need\nYour Answer:";

        std::cin >> choice;
        std::cout << "\n";
        switch (choice)
        {
        case 1:
            cannde_food(list_o, order_o);
            break;
        case 2:
            fruit_veg(list_oo, order_oo);
            break;
        case 3:
            clean(list_ooo, order_ooo);
            break;
        case 4:
            drinks(list_oooo, order_oooo);
            break;
        case 5:
            orders(order_o, order_oo, order_ooo, order_oooo);
            break;
        case 6:
            std::cout << "Exiting....";
            std::exit(0);
            break;
        }
    }
}
