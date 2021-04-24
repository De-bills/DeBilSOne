// перегрузка операции

// 1 количество аргументов сохраняется
// 2 созраняется приоритет операций
// 3 нельзя переопределять операции для стандартных типов данных
// 4 операция не может иметь аргументов по-умолчанию
// 5 операция не может быть static
// 6 операция наследуется

// тип возвращаемого значения operator операция (список параметров){тело}

#include <iostream> 
using namespace std;

/*class coord
{
    int x,y;
public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void get(int x, int y)
    {
        x = this->x;
        y = this->y;
    }
    coord operator - (coord ob2);   // бинарный минус
    coord operator - ();            // унарный минус
};

coord coord::operator - (coord ob2)
{
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}
coord coord::operator - ()
{
    x = -x;
    y = -y;
    return *this;
}*/

/*const monstr& operator = (const monstr &m)
{
    if (&m == this) return *this;
    if (name) delete[] name;
    if (m.name)
    {
        name = new char [strlen(m.name)+1];
        strcpy(name,m.name);
    }
    else name = 0;
    health = m.health;
    skin = m.skin;
    ammo = m.ammo;
    return *this;
}*/

// добавить вывод рабочий
/*int main()
{
    coord a(10,5),b(7,1);
    int x = 0,y = 0;
    a = a - b;
    a.get(x,y);
    cout << " a - b : " << x << " " << y << endl;

    return 0;
}*/

// перегрузка логических операторов и операторов отношений
// не возвращают сам объект


/*class coord
{
    int x,y;
public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void get(int &x,int &y)
    {
        x = this->x;
        y = this->y;
    }
    int operator == (coord ob2);
    int operator && (coord ob2);
};

int coord::operator==(coord ob2)
{
    if ((this->x == ob2.x) && (this->y == ob2.y))
        return ((this->x == ob2.x) && (this->y == ob2.y));
}

int coord::operator&&(coord ob2)
{
    return ((x&&ob2.x)&&(y&&ob2.y));
}

int main()
{
    coord a(5,10),b(4,4),c(5,10);
    cout << " " << a==b << " " << a==c << " " << a&&b << " " << a&&c;
    return 0;
}*/

// дружественные функции
// указатель this не передается
// = может быть перегружен только как метод класса
// [] - оператор индекса массива - только как метод класса

class coord
{
    int x,y;
public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void get(int &x,int &y)
    {
        x = this->x;
        y = this->y;
    }
    friend coord operator + (coord ob1,coord ob2);
};

coord operator + (coord ob1,coord ob2)
{
    coord temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    return temp;
}

int main()
{
    coord a(5,2),b(3,5);
    int x,y;
    a = a + b;
    a.get(x,y);
    cout << x << " " << y;

    return 0;
}

/*
Monstr& operator ++ (monstr &M)
{
    int h = M.get_h();
    h++;
    M.get(h);
    return M;
}
*/


/*
const int size = 6;
class arrayType
{
    int a[size];
public:
    arrayType()
    {
        for (int i = 0; i < size; i++)
            a[i] = (i+1)*(i+1);
    }
    int operator[](int i)
    {
        return a[i];
    }
};


int main()
{
    arrayType ob;
    for (int i = 0;i < size;i++)
        cout << ob[i];
    return 0;
}
*/

class Vect
{
public:
    Vect(const int a[])

};
