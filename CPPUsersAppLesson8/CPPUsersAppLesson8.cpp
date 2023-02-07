// CPPUsersAppLesson8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>

struct WashingMachine
{
    std::string Manufacture = "";
    int color[3]{ 0,0,0 };
    int width = 0;
    int length = 0;
    int height = 0;
    int power = 0;
    int speed = 0;
    int temp = 0;
};

int main()
{
    setlocale(LC_ALL, "russian");

    WashingMachine washingmachine{ "Samsung",{230,230,230},70,50,100,200,800,70 };

    std::cout << "Крутая стиральная машина фирмы " << washingmachine.Manufacture << "\n";
    std::cout << "Форм-фактор машины: Высота: " << washingmachine.height << "Ширина: " << washingmachine.width << "Длина: " << washingmachine.length << "\n";
    std::cout << "Скорость вращения барабана при отжиме: " << washingmachine.speed << "\n";
    std::cout << "Стирает вещи при температуре " << washingmachine.temp << "\n";
    std::cout << "Экономия на электричестве! Потребляет всего " << washingmachine.power << "ватт\n";
    std::cout << "Красивая внешность состоящия из насыщенности оттенка по красному "<< washingmachine.color[0] <<", по зеленому"<< washingmachine.color[1] << " и по синему" << washingmachine.color[2] << "цветам\n";
    washingmachine.Manufacture = "LG";
    std::cout << "Ой, на самом деле машинка фирмы " << washingmachine.Manufacture << "\n";
    
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
