// РїРµСЂРµРіСЂСѓР·РєР° РѕРїРµСЂР°С†РёРё

// 1 РєРѕР»РёС‡РµСЃС‚РІРѕ Р°СЂРіСѓРјРµРЅС‚РѕРІ СЃРѕС…СЂР°РЅСЏРµС‚СЃСЏ
// 2 СЃРѕР·СЂР°РЅСЏРµС‚СЃСЏ РїСЂРёРѕСЂРёС‚РµС‚ РѕРїРµСЂР°С†РёР№
// 3 РЅРµР»СЊР·СЏ РїРµСЂРµРѕРїСЂРµРґРµР»СЏС‚СЊ РѕРїРµСЂР°С†РёРё РґР»СЏ СЃС‚Р°РЅРґР°СЂС‚РЅС‹С… С‚РёРїРѕРІ РґР°РЅРЅС‹С…
// 4 РѕРїРµСЂР°С†РёСЏ РЅРµ РјРѕР¶РµС‚ РёРјРµС‚СЊ Р°СЂРіСѓРјРµРЅС‚РѕРІ РїРѕ-СѓРјРѕР»С‡Р°РЅРёСЋ
// 5 РѕРїРµСЂР°С†РёСЏ РЅРµ РјРѕР¶РµС‚ Р±С‹С‚СЊ static
// 6 РѕРїРµСЂР°С†РёСЏ РЅР°СЃР»РµРґСѓРµС‚СЃСЏ

// С‚РёРї РІРѕР·РІСЂР°С‰Р°РµРјРѕРіРѕ Р·РЅР°С‡РµРЅРёСЏ operator РѕРїРµСЂР°С†РёСЏ (СЃРїРёСЃРѕРє РїР°СЂР°РјРµС‚СЂРѕРІ){С‚РµР»Рѕ}

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
	coord operator - (coord ob2);   // Р±РёРЅР°СЂРЅС‹Р№ РјРёРЅСѓСЃ
	coord operator - ();            // СѓРЅР°СЂРЅС‹Р№ РјРёРЅСѓСЃ
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

// РґРѕР±Р°РІРёС‚СЊ РІС‹РІРѕРґ СЂР°Р±РѕС‡РёР№
/*int main()
{
	coord a(10,5),b(7,1);
	int x = 0,y = 0;
	a = a - b;
	a.get(x,y);
	cout << " a - b : " << x << " " << y << endl;

	return 0;
}*/

// РїРµСЂРµРіСЂСѓР·РєР° Р»РѕРіРёС‡РµСЃРєРёС… РѕРїРµСЂР°С‚РѕСЂРѕРІ Рё РѕРїРµСЂР°С‚РѕСЂРѕРІ РѕС‚РЅРѕС€РµРЅРёР№
// РЅРµ РІРѕР·РІСЂР°С‰Р°СЋС‚ СЃР°Рј РѕР±СЉРµРєС‚

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

// РґСЂСѓР¶РµСЃС‚РІРµРЅРЅС‹Рµ С„СѓРЅРєС†РёРё
// СѓРєР°Р·Р°С‚РµР»СЊ this РЅРµ РїРµСЂРµРґР°РµС‚СЃСЏ
// = РјРѕР¶РµС‚ Р±С‹С‚СЊ РїРµСЂРµРіСЂСѓР¶РµРЅ С‚РѕР»СЊРєРѕ РєР°Рє РјРµС‚РѕРґ РєР»Р°СЃСЃР°
// [] - РѕРїРµСЂР°С‚РѕСЂ РёРЅРґРµРєСЃР° РјР°СЃСЃРёРІР° - С‚РѕР»СЊРєРѕ РєР°Рє РјРµС‚РѕРґ РєР»Р°СЃСЃР°

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
}*/

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

/*class Vect
{
public:
	Vect(const int a[], int n);
	explicit Vect(int n = 10);  // explicit - конструктор вызывается явно
	~Vect(){delete[] p;};
	void Print();
	int &operator[] (int i);
private:
	int *p;
	int size;
};

Vect::Vect(int n) : size(n)
{
	p = new int[size];
}
Vect::Vect(const int a[], int n) : size(n)
{
	p = new int[size];
	for (int i = 0; i < size; i ++)
		p[i] = a[i];
}
void Vect::Print()
{
	for (int i = 0;i < size ; i++)
		cout << p[i] << " ";
}
int& Vect::operator[](int i)
{
	if ((i < 0) || (i > size))
		cout << "Invalid" << endl;
	else
		return p[i];
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	Vect a(arr,10);
	cout << a[12];

	return 0;
}*/

// тип данных (имя класса::имя указателя)(параметры)

//указатель на метод класса
//тип_данных (имя_класса :: имя_указателя) (параметры);
//(двойное двоеточие - расширение области видимости)

//пример

/*int get_health() { return health; }
int get_ammo() { return ammo; }
int (Monstr ::* pget)();
//последняя строчка это указатель на первые 2 местода (первые две строчки)

void fun(int (Monstr ::* pget)())
{
	pget = &Monstr::get_health;
	(*this.*pget)(); // *this->*pget)();
}

pget = &Monstr::get_health;
Monstr Ergo, *p;
p = new Monstr;
int Ergo_health = (Ergo.*pget)();
int p_health = (p.*get)();*/
// нельзу преобразовывать указатель на метод в указатель на обычную функцию
// указатель на статический метод создать нельзя
// указатель на метод не ссылается на пямять, задает смещение

// формат указателя на поле класса
// тип_данных (имя_класса :: имя_указателя);
// указатель на поле класса не ссылается на пямять, задает смещение

// health - public
/*int (Monstr::*phealth) = &Monstr::health;
Monstr Vasya, *p;
cout << Vasya.*phealth;
cout << p->*phealth;*/

// наследование

// при описании класса нужно перечислять его базовые классы через двоеточие
// class имя_класса::[private(по-умолчанию),protected,public(по умолчанию для структур)](тип наследования) базовый_класс
// class D::A, protected B, public C

/*
		||==============================================================================||
		||ключ доступа        ||      спецификатор в        ||      Доступ в            ||
		||                    ||      базовом классе        ||      производном классу  ||
		||====================||============================||==========================||
		||private             ||      private               ||      нет                 ||
		||                    ||      protected             ||      private             ||
		||                    ||      public                ||      private             ||
		||====================||============================||==========================||
		||protected           ||      private               ||      нет                 ||
		||                    ||      protected             ||      protected           ||
		||                    ||      public                ||      protected           ||
		||====================||============================||==========================||
		||public              ||      private               ||      нет                 ||
		||                    ||      protected             ||      protected           ||
		||                    ||      public                ||      public              ||
		||==============================================================================||

		protected == private/(protected базового класса доступны для всех произвольных классов)

		class Base
		{
			public:
				void f;
		};
		class Derived:private Base
		{
			public:
				Base::void f;
		};

		class Base
		{
				int x;
			public:
				void setX(int n)
				{ x = n;}
				void show_x(){return x;}
		};
		class Derived:public Base
		{
				int y;
			public:
				void setY(int n)
				{ y = n;}
				void show_y(){return y;}
		};
		int main()
		{
			Base ob1;
			ob1.setX(10);
			ob1.show_x();
			Derived ob2;
			ob2.setX(15);
			ob2.show_x();
		}

		class samp()
		{
			int a;
		protected:
			int b;
		public:
			int c;
			samp(int n, int m)
			{
				a,b = n,m;
			}
			int geta(){return a;}
			int getb(){return b;}
		}
		int main()
		{
			samp ob(10,20);
			ob.c = 99;

			return 0;
		}

		class Base
		{
			protected:
				int a,b;
			public:
				void setab(int n, int m)
				{a,b = n,m;}
		};
		class derived:public Base
		{
				int c;
			public:
				void setc(int n)
				{  c = n;  }
				void show_abc()
				{
					cout << a << b << c;
				}
		};
		int main()
		{
			derival b;
			b.setab(1,2);
			b.setc(5);
			b.show_abc();

			return 0;
		}

// конструкторы выполняются в порядке наследования базовый, производный классы
// деструктор работает наоборот

// конструктор производного класса(список параметров) : базовый_класс(список параметров){тело конструктора}

class Base
{
	public:
		Base(int n){cout << "Базовый конструктор" << endl;}
		void showi(){return i;}
		~Base(){cout << "Базовый десструктор" << endl;}
	private:
		i;
};
class derived:public Base
{
	public:
		derived(int n):base(n){cout << "Производ конструктор" << endl;}
		void showi(){return j;}
		~derived(cout << "Производ деструктор" << endl;)
	private:
		j;
}
*/

/*
class vehicle   // truck and car
{
	int num_whels;
	int range;
public:
	vehicle(int a, int b)
	{
		num_whels = a;
		range = b;
	}
	void show()
	{
		cout << "Whels : " << num_whels << " , range : " << range << endl;
	}
};
class car:public vehicle
{
	int passengers;
public:
	car(int p, int w, int r) : vehicle(w,r)
	{
		passengers = p;
	}
	void show()
	{
		vehicle::show();
		cout << "Passengers : " << passengers << endl;
	}
};
class truck:public vehicle
{
	int loadlimit;
public:
	truck(int p, int w, int r) : vehicle(w,r)
	{
		loadlimit = p;
	}
	void show()
	{
		vehicle::show();
		cout << "Loadlimit : " << loadlimit << endl;
	}
};
int main()
{
	car CUMry(5,4,2000);
	truck CUMtruck(3000,6,4000);
	CUMry.show();
	CUMtruck.show();

	return 0;
}

class A
{
	int a;
public:
	A(int i)
	{
		a = i;
	}
};
class B
{
	int b;
public:
	B(int i)
	{
		b = i;
	}
};
class C:public A,public B
{
	int c;
public:
	C(int i, int k, int j) : A(i),B(j)
	{
		c = k;
	}
};*/
//  A     B
//  |     |
//  -------
//     |
//     C

// виртуальный базовый класс

// bas   bas
//  |     |
//  d1----d2
//     |
//     d3

//  множественное наследование
//class base
//{
//public:
//	int i;
//};
//class derived1 :virtual public base
//{
//public:
//	int j;
//};
//class derived2 :virtual public base
//{
//public:
//	int k;
//};
//class derived3 :public derived1, public derived2
//{
//public:
//	int product()
//	{
//		return i * j * k;
//	}
//};
//
//int main()
//{
//	derived3 ob;
//	ob.i = 10;
//	ob.j = 15;
//	ob.k = 30;
//	cout << ob.product() << endl;
//}

class base
{
public:
	int i;
};

class derived1 : virtual public base
{
public:
	j
};

class derived2 : virtual public base
{
public:
	k
};

class derived3 : public derived1, public derived2
{
public:
	int proj()
	{
		return i * k * j;
	}
};

int main()
{
	derived3 ob;
	ob.i = 10;
	ob.j = 15;
	ob.k = 10;
	cout << ob.proj() << endl;

	base* p;
	base ob_b;
	derived1 ob_d;
	p = &ob_b;

	// указатель на базовый класс может указывать на производный но не наоборот

	return 0;
}