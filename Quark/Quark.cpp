#include <iostream>
#include <memory>
#include <string>
//#include <ctime>
//#include <cstdlib>

#define COLUMNAS 2
#define FILAS 4

//Este proyecto esta subido a Git: Andres.trabajo90@gmail.com.

using namespace std;

//------------------Tema 5--------------------//
//Ejercicio 1: Perimetro Cuadrado
/* 
int main(int argc, char* argv[])
{
    int sideSquare = 0, result = 0;

    cout << "Load the side of the square: ";
    cin>>sideSquare;

    result = sideSquare * 4;

    cout << "Perimeter: " << result << "\n";
    
    return 0;
}
*/
//Ejercicio 2: 4 Numeros
/* 
int main(int argc, char* argv[])
{
    int n1, n2, n3, n4, plus, mult;

    cout<< "Load the first number: ";
    cin>>n1;
    cout<< "Load the second number: ";
    cin>>n2;
    cout<< "Load the third number: ";
    cin>>n3;
    cout<< "Load the fourth number: ";
    cin>>n4;

    plus = n1 + n2;
    cout << "The result of " << n1 << " + " << n2 << " is: " << plus << "\n";
    
    mult = n3 * n4;
    cout << "The result of " << n3 << " * " << n4 << " is: " << mult << "\n";
    
    
    return  0;
}
*/
//Ejercicios 3: suma y promedio
/*
int main(int argc, char* argv[])
{
    float n1, n2, n3, n4, plus, average;

    cout << "Load the first number: ";
    cin>>n1;
    cout << "Load the second number: ";
    cin>>n2;
    cout << "Load the third number: ";
    cin>>n3;
    cout << "Load the fourth number: ";
    cin>>n4;
    
    plus = n1 + n2 + n3 + n4;
    average = plus/4;
    cout << "The result of adding the four them is: " << plus << "\n";

    cout << "The average is " << average;
    
    return 0;
}
*/
//Ejercicio 4: Compra Producto
/*
int main(int argc, char* argv[])
{
    float item, amount, cost;

    cout << "Load the cost of the product: ";
    cin>>item;
    cout << "How many products is they buying?: ";
    cin>>amount;

    cost = item * amount;

    cout << "The total cost for this products is: " << cost <<"\n";

    return 0;
}
*/
//-----------------Tema 5 fin-----------------//

//------------------Tema 6--------------------//
//Ejercicio 1: Condicionales compuestas
/*
int main(int argc, char* argv[])
{
    float n1,n2,add,subs,mult,div;

    cout << "Load 2 numbers: ";
    cin>> n1 >> n2;

    if (n1 > n2)
    {
        add = n1 + n2;
        cout << "The addition of " << n1 << " + " << n2 << " is: " << add << "\n";
        subs = n1 - n2;
        cout << "The substraction of " << n1 << " - " << n2 << " is: " << subs << "\n";
    }
    else
    {
        mult = n1 * n2;
        cout << "The multiplication of " << n1 << " * " << n2 << " is: " << mult << "\n";
        div = n1 / n2;
        cout << "The divition of " << n1 << " / " << n2 << " is: " << div << "\n";
    }
    return 0;
}
*/
//Ejercicio 2: Nota de los estudiantes
/*
int main(int argc, char* argv[])
{
    float note1, note2, note3, average = 0;

    cout << "Load the student notes: ";
    cin>>note1 >> note2 >> note3;
    
    average = (note1 + note2+ note3) / 3;
    if(average >= 7)
    {
        cout << "!PROMOTED!";
    }

    return 0;
}
*/
//Ejercicio 3: uno o 2 digitos
/*
int main(int argc, char* argv[])
{
    int number;
    cout << "Load a number with one or two digits: ";
    cin>> number;

    if (number >= 1 && number <= 99)
    {
        cout << "Perfect!";        
    }   
    
    return 0;
}
*/
//-----------------Tema 6 fin-----------------//

//------------------Tema 7--------------------//
//Ejercicio 1: the numero mayor
/*
int main(int argc, char* argv[])
{
    float n1, n2, n3;

    cout << "Load 3 numbers: ";
    cin>> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "The biggest number is: " << n1;
    }
    else
    {
        if (n2 > n3)
        {
            cout << "The biggest number is: " << n2;
        }
        else
        {
            cout << "The biggest number is: " << n3;
        }
    }    
    return 0;
}
*/
//Ejercicio 2: positivo, negativo o null
/*
int main(int argc, char* argv[])
{
    
    int number;

    cout << "Load the number: ";
    cin >> number;
    
    if(number > 0)
    {
        cout << "Your number is positive";
    }
    else
    {
        if (number == 0)
        {
            cout << " Your number is null";
        }
        else
        {
            cout << "Your number is negative";
        }
    }
    
    return 0;
}
*/
//Ejercicio 3: cuantos digitos
/*
int main(int argc, char* argv[])
{
    int number;
    cout << "Load a number: ";
    cin >> number;

    if (number <= 999)
    {
        if (number <= 99)
        {
            if (number <=9)
            {
                cout << "The number has 1 digit";
            }
            else
            {
                cout << "The number has 2 digits";
            }
        }
        else
        {
            cout << "The number has 3 digits";
        }
    }
    else
    {
        cout << "The number is incorrect";
    }

    return 0;
}
*/
//Ejercicio 4: Nota examen
/*
int main(int argc, char* argv[])
{

    int quest, positive;
    float porcent;

    cout << "Load the number of questions: ";
    cin >> quest;
    
    cout << "Load the number of correct answers: ";
    cin >> positive;

    porcent = positive * 100 / quest;
    
    if (porcent <= 90.0f)
    {
        if (porcent <= 75 && porcent < 90)
        {
            if (porcent >= 50 && porcent < 75)
            {
                if (porcent < 50)
                {
                    cout << "Out";
                }
                else
                {
                    cout << "Regular level";
                }
            }
            else
            {
                cout << "Mid level";
            }
        }
        else
        {
            cout << "Max level";
        }
    }
    else
    {
        cout << "Max level";
    }
    
    return 0;
}
*/
//-----------------Tema 7 fin-----------------//

//------------------Tema 13--------------------//
//Ejercicio 1:  clase empleado
/*
class Empleado
{
private:
    char name[20];
    int salary;
public:
    void cargar();
    void imprimir();
    void impuestos();
};

void Empleado::cargar()
{
    cout << "Load the name: ";
    cin>>name;
    cout << "Load the salary: ";
    cin>>salary;
}

void Empleado::imprimir()
{
    cout << "The employee " << name << " has a salary of: " << salary << "\n";
}

void Empleado::impuestos()
{
    if (salary > 3000)
    {
        cout << "The employee " << name << " must pay taxs \n";
    }
    else
    {
        cout << "The employee dont must pay taxs";
    }
}


int main(int argc, char* argv[])
{
    Empleado employee_1;
    employee_1.cargar();
    employee_1.imprimir();
    employee_1.impuestos();
       
    return 0;
}
*/
//Ejercicio 2: clase operaciones
/*
class Operations
{
private:
    int num1,num2;
public:
    void Load();
    void addition();
    void substraction();
    void multiplication();
    void divition();
};

void Operations::Load()
{
    cout << "Load 2 numbers: ";
    cin>> num1 >> num2;
}


void Operations::addition()
{
    cout << "The addition of " << num1 << " and " << num2 << " is: " << (num1 + num2) << "\n";
}

void Operations::substraction()
{
    cout << "The substraction of " << num1 << " and " << num2 << " is: " << (num1 - num2) << "\n";
}

void Operations::multiplication()
{
    cout << "The multiplication of " << num1 << " and " << num2 << " is: " << (num1 * num2) << "\n";
}

void Operations::divition()
{
    cout << "The divition of " << num1 << " and " << num2 << " is: " << (num1 / num2) << "\n";
}

int main(int argc, char* argv[])
{
    Operations operations_1;
    operations_1.Load();
    operations_1.addition();
    operations_1.substraction();
    operations_1.multiplication();
    operations_1.divition();
    
    return 0;
}
*/
//-----------------Tema 13 fin-----------------//

//------------------Tema 15--------------------//
//Ejercicio 1: arreglo[8]
/*
class Numbers
{
private:
    int vec[8];
public:
    void load();
    void value();
    void over36();
    void over50();
};

void Numbers::load()
{
    for (int i = 0; i < 8; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>>vec[i];
    }
}

void Numbers::value()
{
    int value = 0;
    for (int i = 0; i < 8; i++)
    {
        value += vec[i];
    }
    cout << "The total value of all numbers is: " << value << "\n";
}


void Numbers::over36()
{
    int over36 = 0;

    for(int i = 0; i < 8; i++)
    {
        if(vec[i] > 36)
        {
            over36++;
        }
    }
    cout << "The numbers over 36 are: " << over36 << "\n";
}

void Numbers::over50()
{
    int over50 = 0;

    for(int i = 0; i < 8; i++)
    {
        if(vec[i] > 50)
        {
            over50++;
        }
    }
    cout << "The numbers over 50 are: " << over50 << "\n";
}

int main(int argc, char* argv[])
{
    Numbers numbers_1;
    numbers_1.load();
    numbers_1.value();
    numbers_1.over36();
    numbers_1.over50();
    
    return 0;
}
*/
//Ejercicio 2: cuentas con arreglos
/*
class Addition
{
private:
    int vec[4], vec2[4], result[4];
public:
    void load();
    void add();
    void print();
};

void Addition::load()
{
    cout << "Load the first vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>>vec[i];
    }

    cout << "Load the second vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>>vec2[i];
    }
}

void Addition::add()
{
    for(int i = 0; i < 4; i++)
    {
        result[i] = vec[i] + vec2[i];
    }
}

void Addition::print()
{
    cout << "The result of the addition of this 2 vectors is: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << " ";
    }
    cout << ".\n";
}


int main(int argc, char* argv[])
{
    Addition add;
    add.load();
    add.add();
    add.print();
    return 0;
}
*/
//Ejercicio 3: Notas del curso
/*
class Puntaje
{
private:
    int curse_A[5];
    int curse_B[5];
public:
    void load();
    void average();
};

void Puntaje::load()
{
    cout << "Load the notes of the curse A: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " note: ";
        cin >> curse_A[i];
    }
    cout << "\nLoad the notes of the curse B: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " note: ";
        cin >> curse_A[i];
    }
}

void Puntaje::average()
{
    int average1 = 0, average2 = 0;

    for (int i = 0; i > 5; i++)
    {
        average1 += curse_A[i];
    }
    for (int i = 0; i > 5; i++)
    {
        average2 += curse_B[i];
    }

    average1 /= 5;
    average2 /= 5;

    if (average1 > average2)
    {
        cout << "Curse A is the winner.";
    }
    else
    {
        cout << "Curse B is the winner.";
    }
}


int main(int argc, char* argv)
{
    Puntaje curses;
    curses.load();
    curses.average();
    
    return 0;
}
*/
//Ejercicio 4: Arreglo ordenado
/*
class PruebaVector7 {
private:
    int vec[10];
public:
    void cargar();
    void verificarOrdenado();
};

void PruebaVector7::cargar()
{
    for(int f = 0; f < 10; f++)
    {
        cout <<"Ingrese elemento:";
        cin >>vec[f];
    }
}

void PruebaVector7::verificarOrdenado()
{
    int orden=1;
    for(int f = 0; f < 9; f++) 
    {
        if (vec[f+1] < vec[f]) 
        {
            orden=0;
        }
    }
    if (orden==1) 
    {
        cout <<"Esta ordenado de menor a mayor";
    }
    else 
    {
        cout <<"No esta ordenado de menor a mayor";
    }
    cin.get();
    cin.get();
}

int main(int argc, char* argv)
{
    PruebaVector7 pv7;
    pv7.cargar();
    pv7.verificarOrdenado();
    return 0;
}
*/
//-----------------Tema 15 fin-----------------//

//------------------Tema 18--------------------//
//Ejercicio 1: Elementos ordenados
/*
class SortedArray
{
private:
    int numbers[5];
public:
    void load();
    void orderGreater();
    void orderMinor();
    void print();
};

void SortedArray::load()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese valor:";
        cin >> numbers[f];
    }
}

void SortedArray::orderGreater()
{
    int aux;

    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4 - k; i++)
        {
            if (numbers[i] < numbers[i + 1])
            {
                aux  = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i+1] = aux;
            }
        }
    }
}

void SortedArray::orderMinor()
{
    int aux;
    for (int k = 0; k < 4; k++)
    for (int i = 0; i < 5 - k; i++)
   {
       if (numbers[i] > numbers[i + 1])
      {
                aux  = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i+1] = aux;
      }
   }
}

void SortedArray::print()
{
    cout << "Showing array: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << "\n";
    }
}


int main(int argc, char* argv[])
{
    SortedArray  sorted;
    sorted.load();
    sorted.orderGreater();
    sorted.print();
    cout << "-----------------------------------------------";
    sorted.orderMinor();
    sorted.print();
    
    return 0;
}
*/
//-----------------Tema 18 fin-----------------//

//------------------Tema 19--------------------//
//Ejercicio 1: ordenamiento de vectores
/*
class Countries
{
private:
    char name[5][40];
    int habitants[5];
public:
    void load();
    void order();
    void print();
};

void Countries::load()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Load the name: ";
        cin.getline(name[i], 40);
        cout << "Load the number of habitants: ";
        cin>>habitants[i];
        cin.get();
    }
    cout << "\n";
}

void Countries::order()
{
    for (int i = 0; i < 5; i++)
    {
        for (int  j = 0; j < 4 - i; i++)
        {
            if (habitants[j] < habitants[j + 1])
            {
                int auxHabit;
                auxHabit = habitants[j];
                habitants[j] = habitants[j + 1];
                habitants[j + 1] = auxHabit;
                char auxName[40];
                strcpy_s(auxName, 40, name[j]);
                strcpy_s(name[j], 40, name[j + 1]);
                strcpy_s(name[j + i], 40, auxName);
            }
        }
    }
}

void Countries::print()
{
    cout << "Name of the cuntries since bigger to minor: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << " - " << habitants[i] << "\n";
    }
}


int main(int argc, char* argv[])
{
    Countries paises;
    paises.load();
    paises.order();
    paises.print();
    
    return 0;
}
*/
//-----------------Tema 19 fin-----------------//

//------------------Tema 20--------------------//
//Ejercicio 1: Matrices
/*
class Array
{
private:
    int arreglo [2][5] = {};
public:
    void load();
    void print();
};

void Array::load()
{
    cout << "Load the array of 2x5: \n";

    for (int c = 0; c < 5; c++)
    {
        for (int f = 0; f < 2; f++) 
        {
            cout << "Load the number of " << f + 1 << " x " << c + 1 << ": ";
            cin>>arreglo[f][c];
        }
        cin.get();
    }
}

void Array::print()
{
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout <<arreglo[f][c] <<" "; 
        }
        cout << "\n";
    }
    cin.get();
    cin.get();
}


int main(int argc, char* argv[])
{
    Array test;
    test.load();
    test.print();
    return 0;
}
*/
//-----------------Tema 20 fin-----------------//

//------------------Tema 21--------------------//
//Ejercicio 1: Temperatura media
/*
class TemperaturaMed
{
private:
    char name[4][40] = {};
    float temp[4][3] = {};
    float med[4] = {};
public:
    void load ();
    void print();
    void media();
    void mayor();
};

void TemperaturaMed::load()
{
    for (int f = 0; f < 4; f++)
    {

        cout << "Name the country number " << f+1 << ": ";
        cin.get(name[f],40);
        for (int c = 0; c < 3; c++)
        {
            cout << "Load the " << c+1 << " month temperature : ";
            cin >> temp[f][c];
        }
        cin.get();
    }
}

void TemperaturaMed::media()
{
    float add = 0;
    for (int f = 0; f < 4; f++)
    {
        for (int c = 0; c < 3; c++)
        {
             add += temp[f][c];
        }
        med[f] = add / 3;
    }    
}

void TemperaturaMed::mayor()
{
    int may = med[0];
    char country[40];

    strcpy_s(country, 40, name[0]);
    
    for (int f = 0; f < 4; f++)
    {
        if (med[f] > may)
        {
            may = med[f];
            strcpy_s(country, 40, name[f]);
        }
    }

    cout << "The country with the mayor temperature is " << country << " with: " << may;
}

void TemperaturaMed::print()
{
    cout << "Showing the countries and their temperatures: \n";
    for (int f = 0; f < 4; f++)
    {
        cout << "The country " << name[f] << " had " <<  med[f] << " of temperature media in this last 3 months.\n";
    }
}


int main(int argc, char* argv[])
{
    TemperaturaMed test;
    test.load();
    test.media();
    test.mayor();
    //test.print();

    return 0;
}
*/
//-----------------Tema 21 fin-----------------//

//------------------Tema 22--------------------//
//Ejercicio 1: Constructor
/*
class Employee
{
private:
    char name[40] = {};
    int salary = 0;
public:
    Employee();
    void print();
    void pay();
};

Employee::Employee()
{
    cout << "Load the name of the of the employee: ";
    cin.get(name, 40);
    cout << "Load the salary: ";
    cin>>salary;
}

void Employee::print()
{
    cout << "\nThe employee " << name << " has a salary of " << salary; 
}

void Employee::pay()
{
    if (salary >= 3000)
    {
        cout<< "\nAnd must pay taxs";
    }
}


int main(int argc, char* argv[])
{
    Employee test;
    test.print();
    test.pay();
    
    return 0;
}
*/
//-----------------Tema 22 fin-----------------//

//------------------Tema 23--------------------//
//Ejercicio 1: Destructor
/*
class Sumario
{
private:
    int num = 0;
public:
    void load();
    ~Sumario();
};

void Sumario::load()
{
    int addition = 0;
    cout << "Welcome! this program will end when you load a 0.\n";
    do
    {
        cout << "Load a number: ";
        cin>>num;
        addition += num;
    }while(num != 0);
    cout << "Perfect! the addition of all numbers you load is: " << addition << ".\n";
}

Sumario::~Sumario()
{
    cout << "Thanks for used this program! byeee.";
    cin.get();
    cin.get();
}


int main(int argc, char* argv[])
{
    Sumario test;
    test.load();
    
    return 0;
}
*/
//-----------------Tema 23 fin-----------------//

//------------------Tema 24--------------------//
//Ejercicio 1: Private y public
/*
class May_Men
{
    int num[5];
public:
    May_Men();
    void print();
};

May_Men::May_Men()
{
    srand(time (NULL));
    for (int i = 0; i < 5; i++)
    {
        num[i] = rand() % 10;
    }
}

void May_Men::print()
{
    int min = num[0], max = num[0];
    for (int i = 0; i < 5; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        if (num[i] > max)
        {
            max = num[i];
        }
        cout << num[i] << "-";
    }
    cout << "\n";
    cout << "The bigger number is: " << max << ".\n";
    cout << "The lowest number is: " << min << ".\n";
}

int main(int argc, char* argv[])
{
    May_Men test;
    test.print();

    return 0;
}
*/
//-----------------Tema 24 fin-----------------//

//------------------Tema 25--------------------//
//Ejercicio 1: Sobrecarga de metodos
/*
class Vector
{
private:
    int array[5];
public:
    void load();
    void print();
    void print(int to);
    void print(int since, int to);
};

void Vector::load()
{
    for(int  i = 0; i < 5; i++)
    {
        cout << "Load a number: ";
        cin >> array[i];
    }
}

void Vector::print()
{
    cout << "\n";
    for(int i = 0; i < 5; i++)
    {
        cout << array[i] << " - ";
    }
}

void Vector::print(int to)
{
    cout << "\n";
    for (int i  = 0; i < to; i++)
    {
        cout << array[i] << " - ";
    }
}

void Vector::print(int since, int to)
{
    cout << "\n";
    for(int i = since; i < to; i++)
    {
        cout << array[i] << " - ";
    }
}

int main()
{
    Vector test;
    test.load();
    test.print();
    test.print(3);
    test.print(2,4);
    return 0;
}
*/
//Ejercicio 2: Clase punto
/*
class Punto
{
private:
    float x, y;
public:
    Punto();
    Punto(int xVar, int yVar);
};

Punto::Punto()
{
    x = 0;
    y = 0;

    cout << "X is: " << x << " and Y is: " << y << "\n";
}

Punto::Punto(int xVar, int yVar)
{
    x = xVar;
    y = yVar;
    
    cout << "X is: " << x << " and Y is: " << y << "\n";
}

int main()
{
    Punto test;
    Punto test2(5, 5);
}
*/
//-----------------Tema 25 fin-----------------//

//------------------Tema 26--------------------//
//Ejercicio 1: Colaboracion de clases
/*
class Socio
{
private:
    char name[40];
    int years;
public:
    Socio();
    void print();
    int returnLongevity();
};

class Club
{
    Socio socio1, socio2, socio3;
public:
    void longevity();
};

Socio::Socio()
{
    cout << "Load the name: ";
    cin.get(name, 40);
    cout << "Load the years in the club: ";
    cin>>years;
    cin.get();
}

void Socio::print()
{
    cout << "Name: " << name << " years: " << years << "\n";
}

int Socio::returnLongevity()
{
    return years;
}

void Club::longevity()
{
    cout << "Member with the biggest longevity: \n";
    if (socio1.returnLongevity() > socio2.returnLongevity() && socio1.returnLongevity() > socio3.returnLongevity())
    {
        socio1.print();
    }
    else if(socio2.returnLongevity() > socio3.returnLongevity())
    {
        socio2.print();
    }
    else
    {
        socio3.print();
    }
}

int main()
{
    Club test;
    test.longevity();

    return 0;
}
*/
//-----------------Tema 26 fin-----------------//

//------------------Tema 27--------------------//
//Ejerciocio 1: Herencia
/*
class Persona
{
protected:
    char name[20];
    int age;
public:
    void load();
    void print();
};

class Empleado  : public Persona
{
private:
    int salary;
public:
    void loadSalary();
    void printSalary();
};

void Persona::load()
{
    cout << "Load the name of the person: ";
    cin.get(name , 20);
    cout << "Load the age of the persona: ";
    cin>>age;
    cin.get();
}

void Persona::print()
{
    cout << name << " is " << age << " years old\n";
}

void Empleado::loadSalary()
{
    cout << "Load the salary of " << name << ": ";
    cin>>salary;
    cin.get();
}

void Empleado::printSalary()
{
    cout << name << " has a salary of " << salary << "\n";
}


int main()
{
    Persona testPersona;
    Empleado testEmpleado;

    testPersona.load();
    testPersona.print();

    testEmpleado.load();
    testEmpleado.loadSalary();
    testEmpleado.print();
    testEmpleado.printSalary();
    
    return 0;
}
*/
//-----------------Tema 27 fin-----------------//

//------------------Tema 28--------------------//
//Ejercicio 1: Punteros
/*
int main()
{
    int x1 = 50;
    int x2 = 100;
    int *pun1, *pun2;
    pun1 = &x1;
    pun2 = pun1;
    *pun1 = 2000;
    cout << x1;
    cout << "\n";
    cout << x2;
    cout << "\n";
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    pun2 = &x2;
    x1 = 1;
    x2 = 2;
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    *pun1 = 500;
    *pun2 = 600;
    cout << x1;
    cout << "\n";
    cout << x2;
    return 0;
}
*/
//Ejercicio 2: Puntero 2
/*
int main()
{
    int num1 =5 ,num2 = 10, num3 = 15;    
    int *punt;

    punt = &num1;
    cout << punt << "\n";
    cout << *punt << "\n";
    
    punt = &num2;
    cout << punt << "\n";
    cout << *punt << "\n";
    
    punt = &num3;
    cout << punt << "\n";
    cout << *punt << "\n";
    
    return 0;
}
*/
//Ejercicio 3: Puntero 3
/*
int main()
{
    float f1,f2;
    float *punt;

    f1 = 10.5;
    f2 = 5.5;

    punt = &f1;
    *punt = 5.5;

    punt = &f2;
    *punt = 10.5;
}
*/
//-----------------Tema 28 fin-----------------//

//------------------Tema 29--------------------//
//Ejercicios 1: Parametros del metodo puntero
/*
class Matris
{
    int cube[3][3] = {};
public:
    void load();
    void print() const;
    void fyc(int& nmay, int& nmen);
};

void Matris::load()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Load a number [" << f+1 << "][" << c+1 << "]: ";
            cin>>cube[f][c];
        }
        cin.get();
    }
}

void Matris::print() const
{
    cout << "Printing Matris: \n";
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << cube[f][c] << " ";
        }
        cout << "\n";
    }
}

void Matris::fyc(int& nmay, int& nmen)
{
    mayor = cube [0][0];
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if(cube[f][c] > mayor)
            {
                mayor = cube[f][c];
                nmay = f;
                nmen = c;
            }
        }
    }
}


int main()
{
    int nmay, nmen;    
    Matris test;
    test.load();
    test.print();
    test.fyc(nmay, nmen);

    cout << "The mayor number is in the position: " << nmay << ".\n";
    cout << "The mayor number is in the position: " << nmen << ".\n";
    return 0;
}
*/
//-----------------Tema 29 fin-----------------//

//------------------Tema 31--------------------//
//Ejercicio 1: operador ++ y -- en punteros
/*
class Admin
{
    int vec[5];
public:
    void load();
    void print();
};

void Admin::load()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Load a number: ";
        cin>>vec[i];
    }
}

void Admin::print()
{
    int* pt = &vec[0];
    for (int i = 0; i < 5; i++)
    {
        cout << *pt << " ";
        pt++;
    }
}


int main()
{
    Admin test;
    test.load();
    test.print();

    return 0;
}
*/
//-----------------Tema 31 fin-----------------//

//------------------Tema 36--------------------//
//Ejercicio 1: Estructuras dinamicas: Pilas
/*
class Pila
  {
  private:
      class Nodo
      {
      public:
          int val;
          Nodo *next;
      };
      Nodo* raiz;
  public:
      Pila();
      ~Pila();
      void insert(int x);
      void print();
      int remove();
      int amount();
      bool empty();
      void printFirst();
  };

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insert(int x)
{
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->val = x;

    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->next = NULL;
    }
    else
    {
        nuevo->next = raiz;
        raiz = nuevo;
    }
}

void Pila::print()
{
    Nodo* read = raiz;
    cout << "List of elements in the stack: \n";
    while (read != NULL)
    {
        cout << read->val << " - ";
        read = read->next;
    }
    cout << "\n";
}

int Pila::remove()
{
    if (raiz != NULL)
    {
        int info = raiz->val;
        Nodo* del = raiz;
        raiz = raiz->next;
        delete del;
        return info;
    }
    else
    {
        return -1;
    }
}

Pila::~Pila()
{
    Nodo* read = raiz;
    Nodo* del;
    while (read != NULL)
    {
        del = read;
        read = read->next;
        delete del;
    }
}

int Pila::amount()
{
    Nodo* read = raiz;
    int amount = 0;
    while (read != NULL)
    {
        amount++;
        read = read->next;
    }
    return amount;
}

bool Pila::empty()
{
    if (raiz == NULL)
    {
        return true;
    }
    else
    {
        return  false;
    }
}

void Pila::printFirst()
{
    if (raiz != NULL)
    {
        Nodo* first = raiz;
        cout << "The first element is: " << first->val << ".\n";
    }
    else
    {
        cout << "Empty list.\n";
    }
}


int main()
{
    Pila *test;
    test = new Pila();
    
    test->insert(10);
    test->insert(5);
    test->insert(15);
    test->print();

    test->printFirst();
    
    cout << "the number of nodes is: " << test->amount() << " \n";
    while (test->empty() == false)
    {
        cout << "removing nodes: " << test->remove() << "\n";
    }
    delete test;
    return 0;
}
*/
//-----------------Tema 36 fin-----------------//

//------------------Tema 38--------------------//
//Ejercicio 1: Estructura dinamica: Colas
/*
class Cola
{
private:
    class Node
    {
    public:
        int info;
        Node* next;
    };
    Node* raiz;
    Node* last;
public:
    Cola();
    ~Cola();
    void insert(int x);
    void print();
    int extract();
    int amount();
    bool empty();
};

Cola::Cola()
{
    raiz = NULL;
    last = NULL;
}

Cola::~Cola()
{
    Node* reco = raiz;
    Node* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->next;
        delete bor;
    }
}

void Cola::insert(int x)
{
    Node* nuevo;
    nuevo = new Node();
    nuevo->info = x;
    nuevo->next = NULL;
    if (empty())
    {
        raiz = nuevo;
        last = nuevo;
    }
    else
    {
        last->next = nuevo;
        last = nuevo;
    }
}

int Cola::extract()
{
    if (!empty())
    {
        int info = raiz->info;
        Node* bor = raiz;
        if (raiz == last)
        {
            raiz = NULL;
            last = NULL;
        }
        else
        {
            raiz = raiz->next;
        }
        delete bor;
        return info;
    }
    else
    {
        return -1;
    }
}

int Cola::amount()
{
    int many = 0;
    Node* reco = raiz;
    while (reco != NULL)
    {
        many++;
        reco = reco->next;
    }
    return many;
}


void Cola::print()
{
    Node* reco = raiz;
    cout << "List of elements: \n";
    while (reco != NULL)
    {
        cout << reco->info << " - ";
        reco = reco->next;
    }
    cout << "\n";
}

bool Cola::empty()
{
    if(raiz == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class SuperMarket
{
public:
    void Simulation();
};

void SuperMarket::Simulation()
{
    srand(time(NULL));
    int caja1 = 0, caja2 = 0 , caja3 = 0;
    int marchan = 0;
    int llegada = 2 + rand() % 2;
    int salida1 = -1, salida2 = -1, salida3 = -1;
    int cantAtend1 = 0, cantAtend2 = 0, cantAtend3 = 0;
    int tiempoEnCola = 0;
    int cantidadEnCola = 0;
    Cola* cola1 = new Cola();
    Cola* cola2 = new Cola();
    Cola* cola3 = new Cola();

    for (int minuto = 0; minuto < 600; minuto++)
    {
        if (llegada == minuto)
        {
            if (caja1 == 0)
            {
                caja1 = 1;
                salida1 = minuto + 7 + rand() % 5;
            }
            else
            {
                if (caja2 == 0)
                {
                    caja2 = 1;
                    salida2 = minuto + 7 + rand() % 5;
                }
                else
                {
                    if (caja3 == 0)
                    {
                        caja3 = 1;
                        salida3 = minuto + 7 + rand() % 5;
                    }
                    else
                    {
                        if (cola1->amount() == 6 && cola2->amount() == 6 && cola3->amount() == 6)
                        {
                            marchan++;
                        }
                        else
                        {
                            if (cola1->amount() <= cola2->amount() && cola1->amount() <= cola3->amount())
                            {
                                cola1->insert(minuto);
                            }
                            else
                            {
                                if (cola2->amount() <= cola3->amount())
                                {
                                    cola2->insert(minuto);
                                }
                                else
                                {
                                    cola3->insert(minuto);
                                }
                            }
                        }
                    }
                }
            }
            llegada = minuto + 2 + rand() % 2;
        }
        if (salida1 == minuto)
        {
            cantAtend1++;
            caja1 = 0;
            if (!cola1->empty())
            {
                caja1 = 1;
                int m = cola1->extract();
                salida1 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
        if (salida2 == minuto)
        {
            cantAtend2++;
            caja2 = 0;
            if (!cola2->empty())
            {
                caja2 = 1;
                int m = cola2->extract();
                salida2 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
        if (salida3 == minuto)
        {
            cantAtend3++;
            caja3 = 0;
            if (!cola3->empty())
            {
                caja3 = 1;
                int m = cola3->extract();
                salida3 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
    }
    cout << "Clientes atendidos por caja: caja1=" << cantAtend1 << " caja2=" << cantAtend2 << " caja3=" << cantAtend3 << ".\n";
    cout << "Se marchan sin hacer compras: " << marchan << "\n";
    if (cantidadEnCola > 0)
    {
        int tiempoPromedio = tiempoEnCola / cantidadEnCola;
        cout << "tiempo promedio en cola: " << tiempoPromedio << "\n";
    }
}

int main()
{
    SuperMarket* super1;
    super1 = new SuperMarket();
    super1->Simulation();
    delete super1;

    return 0;
}
*/
//-----------------Tema 38 fin-----------------//

//------------------Tema 40--------------------//
//Ejercicio 1: Estructuras Dinamicas Secuenciales
/*
class Admin
{
    class Nodo
    {
    public:
        int info;
        Nodo* sig;
    };
    Nodo* raiz;
public:
    Admin();
    ~Admin();
    void insertarPrimero( int info);//al inicio
    void insertarUtlimo( int info);//al final
    void insertarSegundo( int info);//en la segunda posicion
    void insertarAnteUltimo( int info);//En la ante penultima posicion
    void borrarPrimero();//al inicio
    void borrarUltimo();//al final
    void borrarSegundo();//en la segunda posicion
    void borrarMayor();//En la ante penultima posicion
    void imprimir();
};

Admin::Admin()
{
    raiz = NULL;
}

Admin::~Admin()
{
    Nodo* reco = raiz;
    Nodo* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void Admin::insertarPrimero(int info)
{
    Nodo* nuevo = new Nodo();
    nuevo->info = info;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void Admin::insertarSegundo(int info)
{
    if (raiz != NULL)
    {
        Nodo* nuevo = new Nodo();
        nuevo->info = info;
        if (raiz->sig == NULL)
        {
            //Solo un nodo
            raiz->sig = nuevo;
        }
        else
        {
            nuevo->sig = raiz->sig;
            raiz->sig = nuevo;
        }
    }

}

void Admin::insertarUtlimo(int info)
{
    Nodo* nuevo = new Nodo();
    nuevo->info = info;
    nuevo->sig = NULL;
    if (raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        Nodo* reco = raiz;
        while (reco != NULL)
        {
            reco = reco->sig;
        }
        reco->sig = nuevo;
    }
}

void Admin::insertarAnteUltimo(int info)
{
    if (raiz != NULL)
    {
        Nodo* nuevo = new Nodo();
        nuevo->info = info;
        if (raiz->sig == NULL)
        {
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else
        {
            Nodo* atras = raiz;
            Nodo* reco = raiz->sig;
            while (reco->sig != NULL)
            {
                atras = reco;
                reco = reco ->sig;
            }
            nuevo->sig = atras->sig;
            atras->sig = nuevo;
        }
    }
}

void Admin::borrarPrimero()
{
    if (raiz != NULL)
    {
        Nodo* bor = raiz;
        raiz = raiz->sig;
        delete bor;
    }
}

void Admin::borrarSegundo()
{
    if (raiz != NULL)
    {
        if (raiz->sig != NULL)
        {
            Nodo* bor = raiz->sig;
            Nodo* tercero = raiz->sig;
            tercero = tercero->sig;
            raiz->sig = tercero;
            delete bor;
        }
    }
}

void Admin::borrarUltimo()
{
    if (raiz != NULL) 
    {
        if (raiz->sig == NULL) 
        {
            delete raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz->sig;
            Nodo *atras = reco;
            while (reco->sig != NULL) 
            {
                atras = reco;
                reco = reco->sig;
            }
            atras->sig = NULL;
            delete reco;
        }
    }
}

void Admin::borrarMayor()
{
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        int may = raiz->info;
        while (reco != NULL) 
        {
            if (reco->info>may) 
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        reco = raiz;
        Nodo *atras = raiz;
        Nodo *bor;
        while (reco != NULL) 
        {
            if (reco->info == may)
            {
                if (reco == raiz) 
                {
                    bor = raiz;
                    raiz = raiz->sig;
                    atras = raiz;
                    reco = raiz;
                    delete bor;
                }
                else {
                    atras->sig = reco->sig;
                    bor = reco;
                    reco = reco->sig;
                    delete bor;
                }
            }
            else {
                atras = reco;
                reco = reco->sig;
            }
        }
    }
}

void Admin::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

int main()
{
    Admin *AD;
    AD = new Admin();
    AD->insertarPrimero(10);
    AD->insertarPrimero(45);
    AD->insertarPrimero(23);
    AD->insertarPrimero(89);
    AD->imprimir();
    cout<<"Insertamos un nodo al final:\n";
    AD->insertarUtlimo(160);
    AD->imprimir();
    cout<<"Insertamos un nodo en la segunda posición:\n";
    AD->insertarSegundo(13);
    AD->imprimir();
    cout<<"Insertamos un nodo en la anteultima posición:\n";
    AD->insertarAnteUltimo(600);
    AD->imprimir();
    cout<<"Borramos el primer nodo de la lista:\n";
    AD->borrarPrimero();
    AD->imprimir();
    cout<<"Borramos el segundo nodo de la lista:\n";
    AD->borrarSegundo();
    AD->imprimir();
    cout<<"Borramos el ultimo nodo de la lista:\n";
    AD->borrarUltimo();
    AD->imprimir();
    cout<<"Borramos el mayor de la lista:\n";
    AD->borrarMayor();
    AD->imprimir();
    return 0;
}
*/
//-----------------Tema 40 fin-----------------//

//------------------Tema 41--------------------//
//ejercicio 1: Lista Generica Ordenada (se ordena sola)
/*
class ListaGenericaOrdenada {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    ListaGenericaOrdenada();
    ~ListaGenericaOrdenada();    
    void insertar(int x);
    void imprimir();
};

ListaGenericaOrdenada::ListaGenericaOrdenada()
{
    raiz = NULL;
}

ListaGenericaOrdenada::~ListaGenericaOrdenada()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenericaOrdenada::insertar(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL) 
    {
        raiz = nuevo;
    }
    else 
    {
        if (x<raiz->info) 
        {
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else 
        {
            Nodo *reco = raiz;
            Nodo *atras = raiz;
            while (x >= reco->info && reco->sig != NULL) 
            {
                atras = reco;
                reco = reco->sig;
            }
            if (x >= reco->info) 
            {
                reco->sig = nuevo;
            }
            else
            {
                nuevo->sig = reco;
                atras->sig = nuevo;
            }
        }
    }
}

void ListaGenericaOrdenada::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}


int main()
{
    ListaGenericaOrdenada *lista = new ListaGenericaOrdenada();
    lista->insertar(10);
    lista->insertar(5);
    lista->insertar(7);
    lista->insertar(50);
    lista->imprimir();
    delete lista;
    return 0;
}
*/
//-----------------Tema 41 fin-----------------//

//------------------Tema 42--------------------//
//Ejercicio 1: Listas doblemente encadenadas
/*
class ListaGenericaDoble
{
private:
    class Nodo
    {
    public:
        int info;
        Nodo* sig;
        Nodo* ant;
    };
    Nodo* raiz;

public:
    ListaGenericaDoble(); 
    ~ListaGenericaDoble();

    int cantidad();
    int extraer(int pos);
    int mayor();
    int posMayor();

    bool vacia();
    bool ordenada();
    bool existe(int x);

    void insertar(int pos, int x);
    void borrar(int pos);
    void intercambiar(int pos1, int pos2);
    void imprimir();
};

ListaGenericaDoble::ListaGenericaDoble()
{
    raiz = NULL;
}

ListaGenericaDoble::~ListaGenericaDoble()
{
    Nodo* reco = raiz;
    Nodo* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

int ListaGenericaDoble::cantidad()
{
    Nodo* reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        reco = reco->sig;
        cant++;
    }
    return cant;
}

void ListaGenericaDoble::insertar(int pos, int x)
{
    if (pos <= cantidad() + 1)
    {
        Nodo* nuevo = new Nodo();
        nuevo->info = x;
        if (pos == 1)// al principio de la lista
        {
            nuevo->sig = raiz;
            if (raiz != NULL)
            {
                raiz->ant = nuevo;
            }
            raiz = nuevo;
        }
        else
        {
            if(pos == cantidad() + 1) // al final de la lista
            {
                Nodo* reco = raiz;
                while (reco != NULL)
                {
                    reco = reco->sig;
                }
                reco->sig = nuevo;
                nuevo->ant = reco;
                nuevo->sig = NULL;
            }
            else //ante ultimo
            {
                Nodo* reco = raiz;
                for (int f = 1; f < pos - 2; f++)
                {
                    reco = reco->sig;
                }
                Nodo* siguiente = reco->sig; //ante ultimo
                reco->sig = nuevo; //ante ultimo
                nuevo->ant = reco; //ante penultimo
                nuevo->sig = siguiente;
                siguiente->ant = nuevo;
            }
        }
    }
    
}

int ListaGenericaDoble::extraer(int pos)
{
    if (pos <= cantidad())
    {
        int informacion;
        Nodo* bor;
        if (pos == 1)
        {
            informacion = raiz->info;
            bor = raiz;
            raiz = raiz->sig;
            if (raiz != NULL)
            {
                raiz->ant = NULL;
            }
        }
        else
        {
            Nodo* reco = raiz;
            for (int f = 1; f < pos - 2;f++)
            {
                reco = reco->sig;
            }
            Nodo* prox = reco->sig;
            bor = prox;
            reco->sig = prox->sig;
            Nodo* siguiente = prox->sig;
            if (siguiente != NULL)
            {
                siguiente->ant = reco;
            }
            informacion = prox->info;
        }
        delete bor;
        return informacion;
    }
    else
    {
        return  -1;
    }
}

void ListaGenericaDoble::borrar(int pos)
{
    if (pos <= cantidad())
    {
        Nodo* bor;
        if (pos == 1)
        {
            bor = raiz;
            raiz = raiz->sig;
            if (raiz != NULL)
            {
                raiz->ant = NULL;
            }
        }
        else
        {
            Nodo* reco = raiz;
            for (int f = 1; f <= pos - 2; f++)
            {
                reco = reco->sig;
            }
            Nodo *prox = reco->sig;
            bor = prox;
            reco->sig = prox->sig;
            Nodo *siguiente = prox->sig;
            if (siguiente != NULL)
            {
                siguiente->ant = reco;
            }
        }
        delete bor;
    }
}

void ListaGenericaDoble::intercambiar(int pos1, int pos2)
{
    if (pos1 <= cantidad() && pos2 <= cantidad())
    {
        Nodo* reco1 = raiz;
        for (int f = 1; f < pos1; f++)
        {
            reco1 = reco1->sig;
        }
        Nodo* reco2 = raiz;
        for (int f = 1; f < pos2; f++)
        {
            reco2 = reco2->sig;
        }
        int aux = reco1->info;
        reco1->info = reco2->info;
        reco2->info = aux;
    }
}

bool ListaGenericaDoble::vacia()
{
    if (raiz == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int ListaGenericaDoble::mayor()
{
    if (!vacia())
    {
        int mayor = raiz->info;
        Nodo* reco = raiz->sig;
        while (reco != NULL)
        {
            if (mayor < reco->info)
            {
                mayor = reco->info;
            }
            reco = reco->sig;
        }
        return mayor;
    }
    else
    {
        return -1;
    }
}

void ListaGenericaDoble::imprimir()
{
    Nodo* reco = raiz;
    cout << "Imprimiendo:\n";
    while (reco != NULL)
    {
        cout << reco->info << " - ";
    }
    cout << "\n";
}

int ListaGenericaDoble::posMayor()
{
    if (!vacia())
    {
        int mayor = raiz->info;
        int x = 1;
        int pos = x;
        Nodo* reco = raiz->sig;

        while (reco != NULL)
        {
            if (reco->info > mayor)
            {
                mayor = reco->info;
                pos = x;
            }
            reco = reco->sig;
            x++;
        }
        return pos;
    }
    else
    {
        return -1;
    }
}

bool ListaGenericaDoble::ordenada()
{
    if (cantidad() > 1)
    {
        Nodo* reco1 = raiz;
        Nodo* reco2 = raiz->sig;
        while (reco2 != NULL)
        {
            if (reco2->info < reco1->info)
            {
                return  false;
            }
            reco2 = reco2->sig;
            reco1 = reco1->sig;
        }
    }
    return true;
}

bool ListaGenericaDoble::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        if (reco->info == x)
            return true;
        reco = reco->sig;
    }
    return false;
}

int main()
{
    ListaGenericaDoble *lg = new ListaGenericaDoble();
    lg->insertar(1, 10);
    lg->insertar(2, 20);
    lg->insertar(3, 30);
    lg->insertar(2, 15);
    lg->insertar(1, 115);
    lg->imprimir();
    cout << "Luego de Borrar el primero\n";
    lg->borrar(1);
    lg->imprimir();
    cout << "Luego de Extraer el segundo\n";
    lg->extraer(2);
    lg->imprimir();
    cout << "Luego de Intercambiar el primero con el tercero\n";
    lg->intercambiar(1, 3);
    lg->imprimir();
    if (lg->existe(20))
        cout << "Se encuentra el 20 en la lista\n";
    else
        cout << "No se encuentra el 20 en la lista\n";
    cout << "La posición del mayor es:" << lg->posMayor() << "\n";
    if (lg->ordenada())
        cout << "La lista esta ordenada de menor a mayor\n";
    else
        cout << "La lista no esta ordenada de menor a mayor\n";
    delete lg;
    return 0;
}
*/
//Ejercicio 2: Problema Propuesto
/*
 class ListaGenerica {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
        Nodo *ant;
    };

    Nodo *raiz;
public:
    ListaGenerica();
    ~ListaGenerica();
    void imprimir();
    void insertarPrimero(int x);
    void insertarUtlimo(int x);
    void insertarSegundo(int x);
    void insertarAnteUltimo(int x);
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}


void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    if (raiz != NULL)
        raiz->ant = nuevo;
    raiz = nuevo;
}

void ListaGenerica::insertarUtlimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *reco = raiz;
        while (reco->sig != NULL)
        {
            reco = reco->sig;
        }
        reco->sig = nuevo;
        nuevo->ant = reco;
    }
}

void ListaGenerica::insertarSegundo(int x)
{
    if (raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (raiz->sig == NULL)
        {
            //Hay un solo nodo.
            raiz->sig = nuevo;
            nuevo->ant = raiz;
        }
        else
        {
            Nodo *segundo = raiz->sig;
            nuevo->sig = segundo;
            nuevo->ant = raiz;
            raiz->sig = nuevo;
            segundo->ant = nuevo;
        }
    }
}

void ListaGenerica::insertarAnteUltimo(int x)
{
    if (raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (raiz->sig == NULL) {
            //Hay un solo nodo.
            nuevo->sig = raiz;
            raiz->ant = nuevo;
            nuevo->ant = NULL;
            raiz = nuevo;
        }
        else
        {
            Nodo *reco = raiz;
            while (reco->sig != NULL)
            {
                reco = reco->sig;
            }
            Nodo *anteultimo = reco->ant;
            anteultimo->sig = nuevo;
            nuevo->ant = anteultimo;
            nuevo->sig = reco;
            reco->ant = nuevo;
        }
    }
}

void ListaGenerica::borrarPrimero()
{
    if (raiz != NULL)
    {
        Nodo *bor = raiz;
        raiz = raiz->sig;
        if (raiz != NULL)
            raiz->ant = NULL;
        delete bor;
    }
}

void ListaGenerica::borrarSegundo()
{
    if (raiz != NULL)
    {
        if (raiz->sig != NULL)
        {
            Nodo *bor = raiz->sig;
            Nodo *tercero = raiz->sig;
            tercero = tercero->sig;
            raiz->sig = tercero;
            if (tercero != NULL)
                tercero->ant = raiz;
            delete bor;
        }
    }
}

void ListaGenerica::borrarUltimo()
{
    if (raiz != NULL)
    {
        if (raiz->sig == NULL)
        {
            delete raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz;
            while (reco->sig != NULL)
            {
                reco = reco->sig;
            }
            Nodo *ante = reco->ant;
            ante->sig = NULL;
            delete reco;
        }
    }
}

void ListaGenerica::borrarMayor()
{
    if (raiz != NULL)
    {
        Nodo *reco = raiz;
        int may = raiz->info;
        while (reco != NULL)
        {
            if (reco->info>may)
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        reco = raiz;
        Nodo *bor;
        while (reco != NULL)
        {
            if (reco->info == may)
            {
                if (reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz->sig;
                    if (raiz != NULL)
                        raiz->ant = NULL;
                    delete bor;
                    return;
                }
                else {
                    if (reco->sig == NULL)
                    {
                        bor = reco;
                        reco = reco->ant;
                        reco->sig = NULL;
                        delete bor;
                        return;
                    }
                    else
                    {
                        Nodo *ante = reco->ant;
                        bor = reco;
                        reco = reco->sig;
                        ante->sig = reco;
                        reco->ant = ante;
                        delete bor;
                        return;                        
                    }
                }
            }
            else {
                reco = reco->sig;
            }
        }
    }
}


int main()
{
    ListaGenerica *lg = new ListaGenerica();
    lg->insertarPrimero(10);
    lg->insertarPrimero(45);
    lg->insertarPrimero(23);
    lg->insertarPrimero(89);
    lg->imprimir();
    cout << "Insertamos un nodo al final:\n";
    lg->insertarUtlimo(160);
    lg->imprimir();
    cout << "Insertamos un nodo en la segunda posición:\n";
    lg->insertarSegundo(13);
    lg->imprimir();
    cout << "Insertamos un nodo en la anteultima posición:\n";
    lg->insertarAnteUltimo(600);
    lg->imprimir();
    cout << "Borramos el primer nodo de la lista:\n";
    lg->borrarPrimero();
    lg->imprimir();
    cout << "Borramos el segundo nodo de la lista:\n";
    lg->borrarSegundo();
    lg->imprimir();
    cout << "Borramos el ultimo nodo de la lista:\n";
    lg->borrarUltimo();
    lg->imprimir();
    cout << "Borramos el mayor de la lista:\n";
    lg->borrarMayor();
    lg->imprimir();
    return 0;
} 
*/
//-----------------Tema 42 fin-----------------//

//------------------Tema 43--------------------//
//Ejercicio 1: Listas encadenadas
/*
class ListaCircular {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
        Nodo *ant;
    };

    Nodo *raiz;
public:
    ListaCircular();
    ~ListaCircular();
    void insertarPrimero(int x);
    void insertarUltimo(int x);
    bool vacia();
    void imprimir();
    int cantidad();
    void borrar(int pos);
};

ListaCircular::ListaCircular()
{
    raiz = NULL;
}

ListaCircular::~ListaCircular()
{
    if (raiz != NULL) {
        Nodo *reco = raiz->sig;
        Nodo *bor;
        while (reco != raiz)
        {
            bor = reco;
            reco = reco->sig;
            delete bor;
        }
        delete raiz;
    }
}

void ListaCircular::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL) 
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else 
    {
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
        raiz = nuevo;
    }
}

void ListaCircular::insertarUltimo(int x) 
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL) 
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else 
    {
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
    }
}

bool ListaCircular::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

void ListaCircular::imprimir()
{
    if (!vacia()) {
        Nodo *reco = raiz;
        do {
            cout<<reco->info  <<"-";
            reco = reco->sig;
        } while (reco != raiz);
        cout << "\n";
    }
}

int ListaCircular::cantidad()
{
    int cant = 0;
    if (!vacia()) 
    {
        Nodo *reco = raiz;
        do {
            cant++;
            reco = reco->sig;
        } while (reco != raiz);
    }
    return cant;
}

void ListaCircular::borrar(int pos)
{
    if (pos <= cantidad())
    {
        if (pos == 1) 
        {
            if (cantidad() == 1) 
            {
                delete raiz;
                raiz = NULL;
            }
            else 
            {
                Nodo *bor = raiz;
                Nodo *ultimo = raiz->ant;
                raiz = raiz->sig;
                ultimo->sig = raiz;
                raiz->ant = ultimo;
                delete bor;
            }
        }
        else {
            Nodo *reco = raiz;
            for (int f = 1; f <= pos - 1; f++)
                reco = reco->sig;
            Nodo *bor = reco;
            Nodo *anterior = reco->ant;
            reco = reco->sig;
            anterior->sig = reco;
            reco->ant = anterior;
            delete bor;
        }
    }
}

int main()
{
    ListaCircular *lc = new ListaCircular();
    lc->insertarPrimero(100);
    lc->insertarPrimero(45);
    lc->insertarPrimero(12);
    lc->insertarPrimero(4);
    cout <<"Luego de insertar 4 nodos al principio\n";
    lc->imprimir();
    lc->insertarUltimo(250);
    lc->insertarUltimo(7);
    cout<<"Luego de insertar 2 nodos al final\n";
    lc->imprimir();
    cout<<"Cantidad de nodos:" <<lc->cantidad() <<"\n";
    cout <<"Luego de borrar el de la primer posición:\n";
    lc->borrar(1);
    lc->imprimir();
    cout << "Luego de borrar el de la cuarta posición:\n";
    lc->borrar(4);
    lc->imprimir();
    delete lc;
    return 0;
}
*/
//-----------------Tema 43 fin-----------------//

//------------------Tema 44--------------------//
//Ejercicio 2: Recursividad: Problema aplicado
/*
class ListaGenerica {
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;
    void imprimir(Nodo *reco);
public:
    ListaGenerica();
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}


void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::imprimir()
{
    imprimir(raiz);
}

void ListaGenerica::imprimir(Nodo *reco)
{
    if (reco != NULL) 
    {
        imprimir(reco->sig);
        cout<<reco->info << "-";
    }
}

int main()
{
    ListaGenerica *lg = new ListaGenerica();
    lg->insertarPrimero(10);
    lg->insertarPrimero(4);
    lg->insertarPrimero(5);
    lg->imprimir();
    delete lg;
    return 0;
}
*/
//-----------------Tema 44 fin-----------------//

//------------------Tema 48--------------------//
//Ejercicio 1: Arboles pre, pos y entre.
/*
class ArbolBinario {
private:
    class Nodo {
    public:
        int info;
        Nodo *izq;
        Nodo *der;
    };
    Nodo *raiz;
    void borrar(Nodo *reco);
    void imprimirPre(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void imprimirPost(Nodo *reco);
public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    void imprimirPre();
    void imprimirEntre();
    void imprimirPost();
};

ArbolBinario::ArbolBinario()
{
    raiz = NULL;
}

ArbolBinario::~ArbolBinario()
{
    borrar(raiz);
}

void ArbolBinario::borrar(Nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        delete reco;
    }
}

void ArbolBinario::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (x < reco->info)
                reco = reco->izq;
            else
                reco = reco->der;
        }
        if (x < anterior->info)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void ArbolBinario::imprimirPre()
{
    imprimirPre(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirPre(Nodo *reco)
{
    if (reco != NULL)
    {
        cout << reco->info << "-";
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}

void ArbolBinario::imprimirEntre()
{
    imprimirEntre(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirEntre(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}

void ArbolBinario::imprimirPost()
{
    imprimirPost(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirPost(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        cout << reco->info << "-";
    }
}


int main()
{
    ArbolBinario *arbol = new ArbolBinario();
    arbol->insertar(100);
    arbol->insertar(50);
    arbol->insertar(25);
    arbol->insertar(75);
    arbol->insertar(150);
    cout<<"Impresion preorden: ";
    arbol->imprimirPre();
    cout<<"Impresion entreorden: ";
    arbol->imprimirEntre();
    cout<<"Impresion postorden: ";
    arbol->imprimirPost();
    delete arbol;
    return 0;
}
*/

//Ejercicio 2: Arboles: Insercion no existente
/*
class ArbolBinario {
private:
    class Nodo {
    public:
        int info;
        Nodo *izq;
        Nodo *der;
    };
    Nodo *raiz;
    int cant;
    int altura;
    void borrar(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void cantidad(Nodo *reco);
    void cantidadNodosHoja(Nodo *reco);
    void imprimirEntreConNivel(Nodo *reco, int nivel);
    void retornarAltura(Nodo *reco, int nivel);
public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    bool existe(int x);
    void imprimirEntre();
    int cantidad();
    int cantidadNodosHoja();
    void imprimirEntreConNivel();
    int retornarAltura();
    void mayorValor();
    void borrarMenor();
};

ArbolBinario::ArbolBinario()
{
    raiz = NULL;
}

ArbolBinario::~ArbolBinario()
{
    borrar(raiz);
}
void ArbolBinario::borrar(Nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        delete reco;
    }
}

void ArbolBinario::insertar(int x)
{
    if (!existe(x))
    {
        Nodo *nuevo;
        nuevo = new Nodo();
        nuevo->info = x;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        if (raiz == NULL)
            raiz = nuevo;
        else
        {
            Nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->info)
                    reco = reco->izq;
                else
                    reco = reco->der;
            }
            if (x < anterior->info)
                anterior->izq = nuevo;
            else
                anterior->der = nuevo;
        }
    }
}

bool ArbolBinario::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL) 
    {
        if (x == reco->info)
                return true;
        else
            if (x>reco->info)
                reco = reco->der;
            else
                reco = reco->izq;
    }
    return false;
}

int ArbolBinario::cantidad() 
{
    cant = 0;
    cantidad(raiz);
    return cant;
}
void ArbolBinario::cantidad(Nodo *reco) 
{
    if (reco != NULL) 
    {
        cant++;
        cantidad(reco->izq);
        cantidad(reco->der);
    }
}

int ArbolBinario::cantidadNodosHoja() 
{
    cant = 0;
    cantidadNodosHoja(raiz);
    return cant;
}
void ArbolBinario::cantidadNodosHoja(Nodo *reco) 
{
    if (reco != NULL) {
        if (reco->izq == NULL && reco->der == NULL)
            cant++;
        cantidadNodosHoja(reco->izq);
        cantidadNodosHoja(reco->der);
    }
}

void ArbolBinario::imprimirEntreConNivel() 
{
    imprimirEntreConNivel(raiz, 1);
    cout << "\n";
}

void ArbolBinario::imprimirEntreConNivel(Nodo *reco, int nivel)  
{
    if (reco != NULL) {
        imprimirEntreConNivel(reco->izq, nivel + 1);
        cout<<reco->info <<"(" <<nivel <<") - ";
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}

int ArbolBinario::retornarAltura() 
{
    altura = 0;
    retornarAltura(raiz, 1);
    return altura;
}
void ArbolBinario::retornarAltura(Nodo *reco, int nivel)    
{
    if (reco != NULL) 
    {
        retornarAltura(reco->izq, nivel + 1);
        if (nivel>altura)
            altura = nivel;
        retornarAltura(reco->der, nivel + 1);
    }
}

void ArbolBinario::mayorValor()
 {
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        while (reco->der != NULL)
            reco = reco->der;
        cout<<"Mayor valor del árbol:" <<reco->info;
    }
}

void ArbolBinario::borrarMenor() 
{
     if (raiz != NULL) {
         Nodo *bor;
         if (raiz->izq == NULL)
         {
             bor = raiz;
             raiz = raiz->der;
             delete bor;
         }
         else {
             Nodo *atras = raiz;
             Nodo *reco = raiz->izq;
             while (reco->izq != NULL) 
             {
                 atras = reco;
                 reco = reco->izq;
             }
             atras->izq = reco->der;
             delete reco;
         }
     }
 }


void ArbolBinario::imprimirEntre()
{
    imprimirEntre(raiz);
    cout << "\n";
}
void ArbolBinario::imprimirEntre(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}

int main()
{
    ArbolBinario *arbol1 = new ArbolBinario();
    arbol1->insertar(100);
    arbol1->insertar(50);
    arbol1->insertar(25);
    arbol1->insertar(75);
    arbol1->insertar(150);
    cout<<"Impresion entreorden: ";
    arbol1->imprimirEntre();
    cout<<"Cantidad de nodos del árbol:" <<arbol1->cantidad() <<"\n";
    cout<<"Cantidad de nodos hoja:" <<arbol1->cantidadNodosHoja()<<"\n";
    cout<<"Impresion en entre orden junto al nivel del nodo:";
    arbol1->imprimirEntreConNivel();
    cout<<"Artura del arbol:";
    cout << arbol1->retornarAltura();
    cout << "\n";
    arbol1->mayorValor();
    cout << "\n";
    arbol1->borrarMenor();
    cout<<"Luego de borrar el menor:";
    arbol1->imprimirEntre();
    delete arbol1;
    return 0;
}
*/
//-----------------Tema 48 fin-----------------//

//------------------Tema 49--------------------//
//Ejercicio 1: Metodo Inline
/*
class Admin
{
    int vec[5];
public:
    ~Admin();
    void cargar();
    void imprimir();
    void Suma(){ int suma = vec[0] + vec[4];  cout << "La suma del primer y el ultimo componente es: " << suma << ".\n"; }//Metodo inline
};

void Admin::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Cargar un valor: ";
        cin>>vec[i];
        cin.get();
    }
    cout << "\n";
}

void Admin::imprimir()
{
    for(int i = 0; i< 5; i++)
    {
        cout << vec[i] << " - ";
    }
    cout <<"\n";
}

int main()  
{
    Admin* test = new Admin();
    test->cargar();
    test->imprimir();
    test->Suma();

    cout << "\n-Fin del programa- \n";
    return 0;
}
*/
//-----------------Tema 49 fin-----------------//

//------------------Tema 50--------------------//
//Ejercicio 1: Funciones Amigas
/*
class Temperatura {
    int minima, maxima, actual;
public:
    Temperatura(int min, int max, int act){ minima = min; maxima = max; actual = act; }
    friend int temperaturaMedia(Temperatura t1, Temperatura t2);
};

int temperaturaMedia(Temperatura t1, Temperatura t2)
{
    int pro =(t1.actual + t2.actual)/2;
    return pro;
}

int main()
{
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(12, 25, 17);
    cout << "La temperatura promedio de las temperaturas actuales es:";
    cout << temperaturaMedia(temperatura1, temperatura2);
    return 0;
}
*/
//-----------------Tema 50 fin-----------------//

//------------------Tema 51--------------------//
//Ejercicio 1: Clases Amigas
/*
class Nodo {
    int info;
    Nodo *ant, *sig;
public:
    Nodo(int x){ info = x; };
    friend class ListaGenerica;
};


class ListaGenerica {
    Nodo *raiz;
public:
    ListaGenerica() { raiz = NULL; };
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo(x);
    nuevo->ant = NULL;
    if (raiz == NULL)
    {
        nuevo->sig = NULL;
        raiz = nuevo;
    }
    else
    {
        nuevo->sig = raiz;
        raiz->ant = raiz;
        raiz = nuevo;
    }
}

void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}


int main()
{
    ListaGenerica *lista1 = new ListaGenerica();
    lista1->insertarPrimero(10);
    lista1->insertarPrimero(20);
    lista1->insertarPrimero(5);
    lista1->imprimir();
    delete lista1;
    return 0;
}
*/
//-----------------Tema 51 fin-----------------//

//------------------Tema 52--------------------//
//Ejercicio 1: Atributos estaticos
/*
class Cuenta {
    float saldo;
    static int cantidad;
public:
    Cuenta(float sal) { saldo = sal; cantidad++; };
    int retornarCantidad() { return cantidad; };
};

int Cuenta::cantidad = 0;

class Banco {
    Cuenta *cuenta1, *cuenta2, *cuenta3;
public:
    Banco();
    ~Banco();
    void cantidadClientes();
};

Banco::Banco()
{
    cuenta1 = new Cuenta(1000);
    cuenta2 = new Cuenta(3000);
    cuenta3 = new Cuenta(5000);
}

Banco::~Banco()
{
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}

void Banco::cantidadClientes()
{
    cout << cuenta1->retornarCantidad();
}

int main()
{
    Banco *banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;
    return 0;
}
*/
//-----------------Tema 52 fin-----------------//

//------------------Tema 53--------------------//
//Ejercicio 1: Metodos estaticos
/*
class Cuenta {
    float saldo;
    static int cantidad;
public:
    Cuenta(float sal) { saldo = sal; cantidad++; };
    static int retornarCantidad() { return cantidad; };
};

int Cuenta::cantidad = 0;

class Banco {
    Cuenta *cuenta1, *cuenta2, *cuenta3;
public:
    Banco();
    ~Banco();
    void cantidadClientes();
};

Banco::Banco()
{
    cuenta1 = new Cuenta(1000);
    cuenta2 = new Cuenta(3000);
    cuenta3 = new Cuenta(5000);
}

Banco::~Banco()
{
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}

void Banco::cantidadClientes()
{
    cout << Cuenta::retornarCantidad();
}

int main()
{
    Banco *banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;
    return 0;
}
*/
//-----------------Tema 53 fin-----------------//

//------------------Tema 54--------------------//
//Ejercicio 1: Puntero this
/*
class Temperatura {
    int minima;
    int maxima;
    int actual;
    void imprimir();
public:
    Temperatura(int min, int max, int actual);
};

Temperatura::Temperatura(int minima, int maxima, int actual)
{
    this->minima = minima;
    this->maxima = maxima;
    this->actual = actual;
    imprimir();
}

void Temperatura::imprimir()
{
    cout << minima << " " << actual << " " << maxima << "\n";
}

int main()
{
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(25, 35, 29);
    return 0;
}
*/
//-----------------Tema 54 fin-----------------//

//------------------Tema 55--------------------//
//Ejercicio 1: #define
/*
class Matris
{
    int vec[FILAS][COLUMNAS];
public:
    void cargar();
    void imprimir();
};

void Matris::cargar()
{
    for(int f = 0; f < FILAS; f++)
    {
        for(int c = 0; c < COLUMNAS; c++)
        {
            cout << "Ingrese un valor: ";
            cin>>vec[f][c];
            cin.get();
        }
    }
}

void Matris::imprimir()
{
    for(int f = 0; f < FILAS; f++)
    {
        for(int c = 0; c < COLUMNAS; c++)
        {
            cout << vec[f][c] << " - ";
        }
        cout << "\n";
    }
}



int main()
{
    Matris* test = new Matris();
    test->cargar();
    test->imprimir();
    
    return 0;
}
*/
//-----------------Tema 55 fin-----------------//

//------------------Tema 56--------------------//
//Ejercicio 1: Definicion de Constantes
/*
class Temperatura {
    const int media;
    int minima,maxima;
public:
    Temperatura(int min,int max,int me);
    void imprimir();
};

Temperatura::Temperatura(int min,int max,int me):media(me)
{
    minima=min;
    maxima=max;
}

void Temperatura::imprimir()
{
    cout <<minima <<" " <<maxima <<" " << media << "\n";
}

int main()
{
    Temperatura t1(10,20,14);
    t1.imprimir();
    Temperatura t2(5,9,7);
    t2.imprimir();
    return 0;
}
*/
//-----------------Tema 56 fin-----------------//

//------------------Tema 57--------------------//
//Ejercicio 1: Parametros de un Metodo Constante
/*
class ListaGenerica {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;
public:
    ListaGenerica();
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
    bool iguales(const ListaGenerica *lista2);
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

bool ListaGenerica::iguales(const ListaGenerica *lista2)
{
    bool iguales = true;
    Nodo *reco1 = raiz;
    Nodo *reco2 = lista2->raiz;
    while (reco1 != NULL && reco2 != NULL)
    {
        if (reco1->info != reco2->info)
        {
            iguales = false;
            break; //salimos del while
        }
        reco1 = reco1->sig;
        reco2 = reco2->sig;
    }
    if (iguales == true && reco1 == NULL && reco2 == NULL)
        return true;
    else
        return false;
}

int main()
{
    ListaGenerica *lg1 = new ListaGenerica();
    lg1->insertarPrimero(10);
    lg1->insertarPrimero(20);
    lg1->insertarPrimero(30);
    lg1->imprimir();

    ListaGenerica *lg2 = new ListaGenerica();
    lg2->insertarPrimero(10);
    lg2->insertarPrimero(20);
    lg2->insertarPrimero(30);
    lg2->imprimir();

    if (lg1->iguales(lg2))
        cout << "Las dos listas son iguales\n";
    else
        cout << "Las dos listas no son iguales\n";

    delete lg1;
    delete lg2;
    return 0;
}
*/
//-----------------Tema 57 fin-----------------//

//------------------Tema 58--------------------//
//Ejercicio 1: Metodos Constantes
/*
ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::imprimir() const
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

bool ListaGenerica::iguales(const ListaGenerica *lista2) const
{
    bool iguales = true;
    Nodo *reco1 = raiz;
    Nodo *reco2 = lista2->raiz;
    while (reco1 != NULL && reco2 != NULL)
    {
        if (reco1->info != reco2->info)
        {
            iguales = false;
            break; //salimos del while
        }
        reco1 = reco1->sig;
        reco2 = reco2->sig;
    }
    if (iguales == true && reco1 == NULL && reco2 == NULL)
        return true;
    else
        return false;
}

int main()
{
    ListaGenerica *lg1 = new ListaGenerica();
    lg1->insertarPrimero(10);
    lg1->insertarPrimero(20);
    lg1->insertarPrimero(30);
    lg1->imprimir();

    ListaGenerica *lg2 = new ListaGenerica();
    lg2->insertarPrimero(10);
    lg2->insertarPrimero(20);
    lg2->insertarPrimero(30);
    lg2->imprimir();

    if (lg1->iguales(lg2))
        cout << "Las dos listas son iguales\n";
    else
        cout << "Las dos listas no son iguales\n";

    delete lg1;
    delete lg2;
    return 0;
}
*/
//-----------------Tema 58 fin-----------------//

//------------------Tema 59--------------------//
//Ejercicio 1: Parametros por Valor y por Referencia de Datos Simples
/*
class Vector {
    int vec[5];
public:
    void cargar();
    void imprimir();
    void mayorMenor(int &may, int &men);
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese elemento:";
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n";
}

void Vector::mayorMenor(int &may, int &men)
{
    may = vec[0];
    men = vec[0];
    for (int f = 1; f < 5; f++)
    {
        if (vec[f]>may)
            may = vec[f];
        else
            if (vec[f] < men)
                men = vec[f];
    }
}

int main()
{
    Vector vector1;
    vector1.cargar();
    vector1.imprimir();
    int mayor, menor;
    vector1.mayorMenor(mayor, menor);
    cout << "Mayor elemento del vector:" << mayor << "\n";
    cout << "Menor elemento del vector:" << menor << "\n";
    return 0;
}
 */
//-----------------Tema 59 fin-----------------//

//------------------Tema 60--------------------//
//Ejercicio: Parametros por Valor y por Referencia de Objetos
/*
class Reloj {
    int hora;
    int minuto;
    int segundo;
public:
    Reloj(int hora, int minuto, int segundo) { this->hora = hora; this->minuto = minuto; this->segundo = segundo; };
    void imprimir();
    void intentoCambiar(Reloj &r);
};

void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << "\n";
}

void Reloj::intentoCambiar(Reloj &r)//El Objeto debe pasarse por referencia o no causara cambios en el objeto
{
    r.hora = 1;
    r.minuto = 0;
    r.segundo = 0;
}

int main()
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(20, 20, 20);
    reloj1.intentoCambiar(reloj2);
    reloj1.imprimir();  // imprime: 10:10:10
    reloj2.imprimir();  // imprime: 1:0:0
    return 0;
} 
 */
//-----------------Tema 60 fin-----------------//

//------------------Tema 61--------------------//
//Ejercicio 1: Clase String
/*
int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;
    cout << "Ingrese una cadena de caracteres sin espacios en blanco:";
    cin >> cadena2;
    cin.get();
    cout << "Primer string:" << cadena1 << "\n";
    cout << "Segundo string:" << cadena2;
    return 0;
}
*/
//Ejercicio 2: Operadores en Strings
/*
int main()
{
    string s1;
    string s2;
    cout << "Primer cadena:";
    getline(cin, s1);
    cout << "Segundo cadena:";
    getline(cin, s2);
    if (s1>s2)
    {
        cout << s1 << " es el mayor alfabeticamente.";
    }
    else
    {
        if (s2>s1)
        {
            cout << s2 << " es el mayor alfabeticamente";
        }
        else
        {
            cout << "Se cargaron dos cadenas iguales";
        }
    }
    return 0;
}
*/
//Ejercicio 3: Operador +
/*
int main()
{
    string s1;
    string s2;
    cout << "Primer cadena:";
    getline(cin, s1);
    cout << "Segundo cadena:";
    getline(cin, s2);
    string s3 = s1 + "-" + s2;
    cout << "string que resulta de la concatenacion de los dos anteriores:" << s3;
    return 0;
}
*/
//Ejercicio 4: Subindice
/*
int main()
{
    string cadena1 = "Hola";
    cout << cadena1[0];
    cout << "\n";
    cout << cadena1[3];
    return 0;
}
 */
//-----------------Tema 61 fin-----------------//

//------------------Tema 62--------------------//
//Ejercicio 1: Metodos: length() y size()
/*
int main()
{
    string cadena1 = "Hola";
    cout << "cadena:" << cadena1;
    cout << "\n";
    cout << cadena1.size();
    cout << "\n";
    cout << cadena1.length();
    return 0;
}
*/
//Ejercicio 2: Metodo: empty()
/*
int main()
{
    string cadena;
    cout << "Ingrese una cadena:";
    getline(cin, cadena);
    if (cadena.empty())
    {
        cout << "No se ingresaron caracteres por teclado.";
    }
    else
    {
        cout << "La cadena tiene una longitud de:" << cadena.length();
    }
    return 0;
}
*/
//Ejercicio 3: Metodo: at()
/*
int main()
{
    string cadena;
    cout << "Ingrese un palabra:";
    getline(cin, cadena);
    for (int f = 0; f < cadena.length(); f++)
    {
        cout << cadena.at(f)<<"-";
    }
    return 0;
}
*/
//-----------------Tema 62 fin-----------------//

//------------------Tema 63--------------------//
//append: Para añadir al final otra cadena de caracteres.
//insert: Para añadir otra cadena en cualquier parte de la cadena indicando la posición inicial.
//erase: Borrar desde una determinada posición una determinada cantidad de caracteres del string.

//Ejercicio 1: Metodos aplicados
/*
int main()
{
    string cad = "uno tres";
    cout << "Cadena original:" << cad << "\n";
    cad.append(" cuatro");
    cout << "Cadena despues de llamar a append:" << cad << "\n";
    cad.insert(3, " dos");
    cout << "Cadena despues de llamar a insert:" << cad << "\n";
    cad.erase(0, 4);
    cout << "Cadena despues de llamar a erase:" << cad << "\n";
    return 0;
}
*/
//-----------------Tema 63 fin-----------------//

//------------------Tema 64--------------------//
//-----------------------------------------------
//-----------------Tema 64 fin-----------------//

//Punteros Inteligentes//
//Libreria : <memory>
//Ejercicio 1 : unique_ptr
/*
int main() {

    std::unique_ptr<int> num(new int(5));

    //imprimira el numero 5

    std::cout << *num << std::endl;

    return 0;

}
*/
//Ejercicio 2 : shared_ptr
/*
int main() {

    std::shared_ptr<int> num1(new int(5));

    std::shared_ptr<int> num2 = num1;

    //Imprimira el numero 5

    std::cout << *num2 << std::endl;

    return 0;

}
*/
//Ejercicio 3: weak_ptr
/*
int main() {

    std::shared_ptr<int> num1(new int(5));



    std::weak_ptr<int> num2 = num1;



    //It will print the number 1

    std::cout << num2.use_count() << std::endl;



    return 0;

}
*/

//Ejercicio 4: clase Auto
/*
class Auto
{
private:
    string marca_;
    string modelo_;

public:
    Auto( string modelo, string marca) : marca_(marca), modelo_(modelo){}
    void mostrarDatos() { cout << "Vehiculo " << marca_ << "Modelo " << modelo_ << ".\n";}
};

int main()
{
    // puntero inteligente de tipo shared_ptr para un objeto de la clase Auto
    shared_ptr<Auto> auto_ptr = make_shared<Auto>("Ford","Munstag");

    //llamada a la función mostrar_datos a través del puntero inteligente
    auto_ptr->mostrarDatos();

    return 0;
}
*/
//Punteros inteligentes - fin//

