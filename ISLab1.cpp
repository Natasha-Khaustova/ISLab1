// ISLab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <fstream>;
#include <string>;

using namespace std;
fstream ReadTXT;

int Avto(int r) {
    setlocale(LC_ALL, "Russian");
    fstream ReadTXT;
    int code;

    std::string line;

    cout << "Введите код автомобиля: " << endl;
    cout << "Код: "; cin >> code; cout << endl;

    cout << "_________________________________________________________________________________________\n" << endl;
    if (code > 100 and code < 200) {
        if (code == 101) {
            std::ifstream in("Files_1/Avto_101.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 102) {
            std::ifstream in("Files_1/Avto_102.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 103) {
            std::ifstream in("Files_1/Avto_103.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 104) {
            std::ifstream in("Files_1/Avto_104.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 105) {
            std::ifstream in("Files_1/Avto_105.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 106) {
            std::ifstream in("Files_1/Avto_106.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 107) {
            std::ifstream in("Files_1/Avto_107.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 108) {
            std::ifstream in("Files_1/Avto_108.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 109) {
            std::ifstream in("Files_1/Avto_109.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 110) {
            std::ifstream in("Files_1/Avto_110.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            else std::cout << "Произошла ошибка" << std::endl;
            in.close();     // закрываем файл
        }
        if (code == 111) {
            std::ifstream in("Files_1/Avto_111.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 112) {
            std::ifstream in("Files_1/Avto_112.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 113) {
            std::ifstream in("Files_1/Avto_113.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 114) {
            std::ifstream in("Files_1/Avto_114.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 115) {
            std::ifstream in("Files_1/Avto_115.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 116) {
            std::ifstream in("Files_1/Avto_116.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 117) {
            std::ifstream in("Files_1/Avto_117.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 118) {
            std::ifstream in("Files_1/Avto_118.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
        }
        if (code == 119) {
            std::ifstream in("Files_1/Avto_119.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 120) {
            std::ifstream in("Files_1/Avto_120.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 121) {
            std::ifstream in("Files_1/Avto_121.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 122) {
            std::ifstream in("Files_1/Avto_122.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 123) {
            std::ifstream in("Files_1/Avto_123.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 124) {
            std::ifstream in("Files_1/Avto_124.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 125) {
            std::ifstream in("Files_1/Avto_125.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 126) {
            std::ifstream in("Files_1/Avto_126.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 127) {
            std::ifstream in("Files_1/Avto_127.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 128) {
            std::ifstream in("Files_1/Avto_128.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 129) {
            std::ifstream in("Files_1/Avto_129.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 130) {
            std::ifstream in("Files_1/Avto_130.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code > 130) {
            cout << " Приносим свои извинения. \n Информация по этому автомобилю находится на доработке или еще не добавлена. " << endl;
        }
    }

    if (code > 200 and code < 300) {
        if (code == 201) {
            std::ifstream in("Files_2/Avto_201.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 202) {
            std::ifstream in("Files_2/Avto_202.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 203) {
            std::ifstream in("Files_2/Avto_203.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 204) {
            std::ifstream in("Files_2/Avto_204.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 205) {
            std::ifstream in("Files_2/Avto_205.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 206) {
            std::ifstream in("Files_2/Avto_206.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 207) {
            std::ifstream in("Files_2/Avto_207.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 208) {
            std::ifstream in("Files_2/Avto_208.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 209) {
            std::ifstream in("Files_2/Avto_209.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 210) {
            std::ifstream in("Files_2/Avto_210.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            else std::cout << "Произошла ошибка" << std::endl;
            in.close();     // закрываем файл
        }
        if (code == 211) {
            std::ifstream in("Files_2/Avto_211.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 212) {
            std::ifstream in("Files_2/Avto_212.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 213) {
            std::ifstream in("Files_2/Avto_213.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 214) {
            std::ifstream in("Files_2/Avto_214.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 215) {
            std::ifstream in("Files_2/Avto_215.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code == 216) {
            std::ifstream in("Files_2/Avto_216.txt"); // открываем файл для чтения
            if (in.is_open()) {
                while (getline(in, line)) {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
        }
        if (code > 216) {
            cout << " Приносим свои извинения. \n Информация по этому автомобилю находится на доработке или еще не добавлена. " << endl;
        }
    }


    if (code > 300) {
        cout << " Приносим свои извинения. \n Информация по этому автомобилю находится на доработке или еще не добавлена. " << endl;
    }

    cout << "_________________________________________________________________________________________\n" << endl;
    return 1;

}

int Carina() {
    int otvet, num, kn, p, sim, v, k;

    int pr, kr, tf, vm, ras, tk, rt, ml;

    //БЛОК 1. Пользователю предлагается выбрать свой бюджет. На консоли выводится варианты бюджета.
        //Пользователю необходимо выбрать номер варианта, в соответствие с его бюджетом.
    cout << " Определите Ваш бюджет: " << endl;
    cout << " Нажмите 1, если бюджет низкий. " << endl;
    cout << " Нажмите 2, если бюджет средний. " << endl;
    cout << " Нажмите 3, если бюджет высокий. " << endl;
    cout << " Вы выбрали: "; cin >> otvet; cout << endl;

    //БЛОК 2. Если пользователь выбрал вариант 1 "бюджет низкий",
    //то ему последовательно необходимо выбирать параметры автомобиля, которые соответствуют его требованиям.
    if (otvet == 1) {
        cout << " Выберите ценовой диапазон: " << endl;
        cout << " 1 - чуть ниже среднего." << endl; cout << " 2 - низкий." << endl; cout << " 3 - ультра бюджет." << endl;
        cout << " Вы выбрали: "; cin >> num; cout << endl;
        if (num == 1) { // пользователь выбрал вариант 1 "бюджет чуть ниже среднего",
            cout << " Выберите подходящий тип кузова: " << endl;
            cout << " 1. Седан " << endl;
            cout << " 2. Внедорожник " << endl;
            cout << " 3. Хэтчбек " << endl;

            cout << " Вы выбрали: "; cin >> tk; cout << endl;

            // пользователь выбрал вариант 1. Седан
            if (tk == 1) {
                cout << " Выберите подходящий тип КПП: " << endl;
                cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                cout << " Вы выбрали: "; cin >> kr; cout << endl;

                if (kr == 1) { // Седан, автомат
                    cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                    cout << " Hyundai Elantra 1.6 D-CVVT (97 кВт/132 л.с.) АКПП Optima    | | Код автомобиля: 101" << endl;
                    cout << " Ford Focus Sedan 2.0 (110 кВт/150 л.с.) АКПП Titanium       | | Код автомобиля: 102" << endl;
                    cout << " Honda Civic 4D 1.8 i-VTEC (104 кВт/142 л.с.) АКПП Lifestyle | | Код автомобиля: 103\n" << endl;

                }

                if (kr == 2) {// Седан, механика
                    cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                    cout << " Chevrolet Cruze Sedan 1.8 (104 кВт/141 л.с.) МКПП LT | | Код автомобиля: 104" << endl;
                    cout << " Chery M11 Sedan 1.6 (88 кВт/119 л.с.) МКПП Luxury    | | Код автомобиля: 105" << endl;
                    cout << " Chevrolet Cruze Sedan 1.6 (80 кВт/109 л.с.) МКПП LS  | | Код автомобиля: 106\n" << endl;

                }

            }

            // пользователь выбрал вариант 2. Внедорожник
            if (tk == 2) {
                cout << " Выберите тип привода: " << endl;
                cout << " 1 - передний." << endl;  cout << " 2 - полный." << endl;
                cout << " Вы выбрали: "; cin >> pr; cout << endl;
                if (pr == 1) { // пользователь выбрал вариант 1 "передний"
                    cout << " Выберите подходящий тип КПП: " << endl;
                    cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                    cout << " Вы выбрали: "; cin >> kr; cout << endl;

                    if (kr == 1) { // Внедорожник, привод передний, автомат
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " Great Wall Hover H6 2.4 (108 кВт/148 л.с.) 4x2 АКПП Standard | | Код автомобиля: 107" << endl;
                        cout << " Nissan Juke 1.6 (86 кВт/117 л.с.) 4x2 CVT XE                 | | Код автомобиля: 108" << endl;
                        cout << " Renault Duster 2.0 (99 кВт/135 л.с.) 4x2 АКПП Expression     | | Код автомобиля: 109\n" << endl;

                    }

                    if (kr == 2) {// Внедорожник, привод передний, механика
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " KIA Sportage 2.0 (110 кВт/150 л.с.) МКПП 4x2 Classic      | | Код автомобиля: 110" << endl;
                        cout << " Chery Tiggo 1.6 (88 кВт/119 л.с.) 4x2 МКПП Luxury         | | Код автомобиля: 111" << endl;
                        cout << " Mitsubishi ASX 1.6 MIVEC (86 кВт/117л.с.) МКПП 4x2 Invite | | Код автомобиля: 112\n" << endl;

                    }
                }

                if (pr == 2) { // пользователь выбрал вариант 2 "полный"
                    cout << " Выберите подходящий тип КПП: " << endl;
                    cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                    cout << " Вы выбрали: "; cin >> kr; cout << endl;

                    if (kr == 1) { // Внедорожник, привод полный, автомат
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " Great Wall Hover H5 2.0 TDI (110 кВт/150 л.с.) 4x4 АКПП Luxe | | Код автомобиля: 113" << endl;
                        cout << " ТагАЗ Road Partner 3.2 (162 кВт/220 л.с.) 4x4 АКПП АТ3       | | Код автомобиля: 114\n" << endl;

                    }

                    if (kr == 2) {// Внедорожник, привод полный, механика
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " GM-АвтоВАЗ Chevrolet Niva 1.7 (58.5 кВт/80 л.с.) МКПП 4x4 GLS  | | Код автомобиля: 115" << endl;
                        cout << " Great Wall Hover H5 2.0 TDI (110 кВт/150 л.с.) 4x4 МКПП Luxe   | | Код автомобиля: 116\n" << endl;

                    }
                }

            }

            // пользователь выбрал вариант 3. Хэтчбек
            if (tk == 3) {
                cout << " Выберите тип привода: " << endl;
                cout << " 1 - передний." << endl;  cout << " 2 - не имеет значения." << endl;
                cout << " Вы выбрали: "; cin >> pr; cout << endl;
                if (pr == 1) { // пользователь выбрал вариант 1 "передний"
                    cout << " Выберите подходящий тип КПП: " << endl;
                    cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                    cout << " Вы выбрали: "; cin >> kr; cout << endl;

                    if (kr == 1) { // Хэтчбек, привод передний, автомат
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " Citroen C4 Hatchback 1.6 VTi (88 кВт/120 л.с.) АКПП Dynamique | | Код автомобиля: 117" << endl;
                        cout << " Chevrolet Cruze Hatchback 1.6 (80 кВт/109 л.с.) АКПП Base     | | Код автомобиля: 118\n" << endl;

                    }

                    if (kr == 2) {// Хэтчбек, привод передний, механика
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " Chevrolet Cruze Hatchback 1.6 (80 кВт/109 л.с.) МКПП LS  | | Код автомобиля: 119" << endl;
                        cout << " Audi A1 1.2 TFSI (63 кВт/86 л.с.) МКПП Attraction        | | Код автомобиля: 120\n" << endl;

                    }
                }

                if (pr == 2) { // пользователь выбрал вариант 2 "не имеет значения"
                    cout << " Выберите подходящий тип КПП: " << endl;
                    cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                    cout << " Вы выбрали: "; cin >> kr; cout << endl;

                    if (kr == 1) { // Хэтчбек, привод не имеет значения, автомат
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " BMW 1 3D [116i] 1.6 (85 кВт/115 л.с.) 4x2 АКПП  | | Код автомобиля: 121" << endl;
                        cout << " Suzuki SX4 1.6 VVT(82 кВт/112 л.с.) АКПП 4x4 GL | | Код автомобиля: 122\n" << endl;

                    }

                    if (kr == 2) {// Хэтчбек, привод не имеет значения, механика
                        cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                        cout << " BMW 1 3D [116i] 1.6 (85 кВт/115 л.с.) 4x2 МКПП   | | Код автомобиля: 123" << endl;
                        cout << " Suzuki SX4 1.6 VVT(82 кВт/112 л.с.) МКПП 4x4 GL  | | Код автомобиля: 124\n" << endl;

                    }
                }

            }

        }

        if (num == 2) { // пользователь выбрал вариант 1 "бюджет низкий",
            cout << " Выберите тип привода: " << endl;
            cout << " 1 - передний." << endl;  cout << " 2 - не имеет значения." << endl;
            cout << " Вы выбрали: "; cin >> pr; cout << endl;
            if (pr == 1) { // пользователь выбрал вариант 1 "передний"
                cout << " Выберите подходящий тип КПП: " << endl;
                cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
                cout << " Вы выбрали: "; cin >> kr; cout << endl;

                if (kr == 1) { // привод передний, автомат
                    cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                    cout << " ЗАЗ Chance Sedan 1.4 (74 кВт/101 л.с.) АКПП SX    | | Код автомобиля: 125" << endl;
                    cout << " Chevrolet Spark NEW 1.0 (50 кВт/68 л.с.) АКПП LS  | | Код автомобиля: 126\n" << endl;
                }

                if (kr == 2) {// привод передний, механика
                    cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                    cout << " Chery Bonus 1.5 (80кВт/109 л.с.) МКПП Base               | | Код автомобиля: 127" << endl;
                    cout << " Chevrolet Lacetti Sedan 1.4 (70 кВт/95 л.с.) МКПП SE 51  | | Код автомобиля: 128\n" << endl;
                }
            }

            if (pr == 2) { // пользователь выбрал вариант 2 "не имеет значения"
                cout << " Тип КПП: механика." << endl;
                // привод не имеет значения, механика
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " ВАЗ-Lada 4x4 1.7 (59.5 кВт/80.5 л.с.) МКПП 21214-20-047 3-дв.  | | Код автомобиля: 129" << endl;
                cout << " GM-АвтоВАЗ Chevrolet Niva 1.7 (58.5 кВт/80 л.с.) МКПП 4x4 LC   | | Код автомобиля: 130\n" << endl;

            }

        }

        if (num == 3) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " LADA (ВАЗ) 2110 " << endl;
            cout << " LADA (ВАЗ) 2105 " << endl;
            cout << " LADA (ВАЗ) 2114 " << endl;
        }
    }

    //БЛОК 3. Если пользователь выбрал вариант 2 "бюджет средний".
    if (otvet == 2) {
        cout << " Выберите нужную Вам мощность: " << endl;
        cout << " 1 - до 125 (л.с.)." << endl; cout << " 2 - от 125 до 175 (л.с.)." << endl; cout << " 3 - больше 175 (л.с.)." << endl;
        cout << " Вы выбрали: "; cin >> rt; cout << endl;
        if (rt == 1) {
            cout << " Выберите подходящий тип КПП: " << endl;
            cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
            cout << " Вы выбрали: "; cin >> kr; cout << endl;

            if (kr == 1) { // автомат
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " Audi A3 1.4 TFSi (92 кВт/125 л.с.) 4x2 АКПП Ambiente | | Код автомобиля: 201" << endl;
                cout << " Peugeot 3008 1.6 HDi (84 кВт/112 л.с.) АКПП Allure   | | Код автомобиля: 202" << endl;
                cout << " Toyota Prius 1.8 VVT-i (73 кВт/99 л.с.) CVT Luxe     | | Код автомобиля: 203\n" << endl;
            }

            if (kr == 2) { // механика
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " Subaru XV 1.6 (84 кВт/114 л.с.) 4x4 МКПП CC                             | | Код автомобиля: 204" << endl;
                cout << " Land Rover Defender 110 2.4 TDI (90 кВт/122 л.с.) 4x4 МКПП SE (пикап)   | | Код автомобиля: 205" << endl;
                cout << " Volkswagen Amarok DoubleCab 2.0 TDI (90 кВт/122 л.с.) 4x2 MКПП Highline | | Код автомобиля: 206\n" << endl;
            }


        }

        if (rt == 2) {
            cout << " Выберите подходящий тип КПП: " << endl;
            cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
            cout << " Вы выбрали: "; cin >> kr; cout << endl;

            if (kr == 1) { // автомат
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " BMW 3 Touring [320i] 2.0 (115 кВт/156 л.с.) 4x2 АКПП                           | | Код автомобиля: 207" << endl;
                cout << " Land Rover Range Rover Evoque 5D 2.2 TDI (110 кВт/150 л.с.) 4x4 АКПП Prestige  | | Код автомобиля: 208" << endl;
                cout << " Mercedes-Benz E SW [200] 2.1 CDI (100 кВт/136 л.с.) 4x2 АКПП                   | | Код автомобиля: 209\n" << endl;
            }

            if (kr == 2) { // механика
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " Toyota Land Cruiser Prado 2.7 VVT-i (120 кВт/163 л.с.) МКПП 4x4 Standard      | | Код автомобиля: 210" << endl;
                cout << " Audi A6 (C6) 2.0 TFSi (125 кВт/170 л.с.) 4x2 МКПП                             | | Код автомобиля: 211" << endl;
                cout << " Land Rover Range Rover Evoque 5D 2.2 TDI (110 кВт/150 л.с.) 4x4 МКПП Prestige | | Код автомобиля: 212\n" << endl;
            }
        }

        if (rt == 3) {
            cout << " Выберите подходящий тип КПП: " << endl;
            cout << " 1 - автомат." << endl;  cout << " 2 - механика." << endl;
            cout << " Вы выбрали: "; cin >> kr; cout << endl;

            if (kr == 1) { // автомат
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " Audi A7 Sportback 3.0 TDi (180 кВт/245 л.с.) 4x4 АКПП              | | Код автомобиля: 213" << endl;
                cout << " Lexus RX 3.5 Dual VVT-i (183 кВт/249 л.с.) CVT 4x4 450h Executive  | | Код автомобиля: 214" << endl;
            }

            if (kr == 2) { // механика
                cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
                cout << " BMW 3 Sedan [335i xDrive] 3.0 TFSi (225 кВт/306 л.с.) 4x4 МКПП   | | Код автомобиля: 215" << endl;
                cout << " Subaru Impreza WRX STI 2.5 (221 кВт/300 л.c.) МКПП 4x4 EB Sedan  | | Код автомобиля: 216" << endl;
            }
        }
    }

    //БЛОК 4. Если пользователь выбрал вариант 3 "бюджет высокий".
    if (otvet == 3) {
        cout << " Выберите модель автомобиля: " << endl;
        cout << " 1. Audi " << endl;
        cout << " 2. BMW " << endl;
        cout << " 3. Jaguar " << endl;
        cout << " 4. Land Rover " << endl;
        cout << " 5. Lexus " << endl;
        cout << " 6. Mercedes-Benz " << endl;
        cout << " 7. Aston Martin " << endl;
        cout << " 8. Porsche " << endl;
        cout << " 9. Volkswagen " << endl;
        cout << " 10. Toyota " << endl;

        cout << " Вы выбрали: "; cin >> ml; cout << endl;

        // пользователь выбрал вариант 1. Audi
        if (ml == 1) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Audi A6 (C6) 4.2 FSi (257 кВт/350 л.с.) 4x4 АКПП  | | Код автомобиля: 301" << endl;
            cout << " Audi A8 4.2 FSi (273 кВт/372 л.с.) 4x4 АКПП       | | Код автомобиля: 302" << endl;
            cout << " Audi R8 5.2 FSi (386 кВт/525 л.с.) 4x4 АКПП       | | Код автомобиля: 303\n" << endl;
        }

        // пользователь выбрал вариант 2. BMW
        if (ml == 2) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " BMW [650i Cabrio] 4.8 (270 кВт/367 л.с.) 4x2 АКПП  | | Код автомобиля: 304" << endl;
            cout << " BMW [750i xDrive] 4.4 (300 кВт/407 л.с.) 4x4 АКПП  | | Код автомобиля: 305" << endl;
            cout << " BMW X6 [M] 4.4 (408 кВт/555 л.с.) 4x4 АКПП         | | Код автомобиля: 306\n" << endl;
        }

        // пользователь выбрал вариант 3. Jaguar
        if (ml == 3) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Jaguar XJ 3.0 TDI (202 кВт/275 л.с.) АКПП Portfolio SWB        | | Код автомобиля: 307" << endl;
            cout << " Jaguar XK Cabriolet 5.0 (283 кВт/385 л.с.) 4x2 АКПП Portfolio  | | Код автомобиля: 308" << endl;
            cout << " Jaguar XK Cabriolet [R] 5.0 (375 кВт/510 л.с.) 4x2 АКПП        | | Код автомобиля: 309\n" << endl;
        }

        // пользователь выбрал вариант 4. Land Rover
        if (ml == 4) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Land Rover Range Rover 5.0 (375 кВт/510 л.с.) 4x4 АКПП Westminster    | | Код автомобиля: 310" << endl;
            cout << " Land Rover Range Rover Sport 5.0 (276 кВт/375 л.с.) 4x4 АКПП HSE      | | Код автомобиля: 311" << endl;
            cout << " Land Rover Range Rover Sport 3.0 TDI (180 кВт/245 л.с.) 4x4 АКПП HSE  | | Код автомобиля: 312\n" << endl;
        }

        // пользователь выбрал вариант 5. Lexus
        if (ml == 5) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Lexus LS 5.0 Dual VVT-i (290 кВт/394 л.с.) CVT 4x4 600h L Premium  | | Код автомобиля: 313" << endl;
            cout << " Lexus LX 5.7 Dual VVT-i (270 кВт/367 л.с.) АКПП 4x4 570 Luxury     | | Код автомобиля: 314" << endl;
            cout << " Lexus GX 4.6 Dual VVT-i (218 кВт/296 л.с.) АКПП 4x4 Executive      | | Код автомобиля: 315\n" << endl;
        }

        // пользователь выбрал вариант 6. Mercedes-Benz
        if (ml == 6) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Mercedes-Benz S [500 L] 5.5 (285 кВт/388 л.с.) 4x2 АКПП       | | Код автомобиля: 316" << endl;
            cout << " Mercedes-Benz SL [63 AMG] 6.2 (386 кВт/525 л.с.) 4x2 АКПП     | | Код автомобиля: 317" << endl;
            cout << " Mercedes-Benz [55 AMG] 5.5 (373 кВт/507 л.с.) 4x4 АКПП 5 дв.  | | Код автомобиля: 318\n" << endl;
        }

        // пользователь выбрал вариант 7. Aston Martin
        if (ml == 7) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Aston Martin DB9 5.9 Coupe with Touchtronic  | | Код автомобиля: 319" << endl;
            cout << " Aston Martin V8 Vantage 4.3 Roadster Manual  | | Код автомобиля: 320\n" << endl;
        }

        // пользователь выбрал вариант 8. Aston Martin
        if (ml == 8) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Porsche Cayenne [Turbo] 4.8 (368 кВт/500 л.с.) 4x4 АКПП  | | Код автомобиля: 321" << endl;
            cout << " Porsche Cayman S 3.4 Manual                              | | Код автомобиля: 322" << endl;
            cout << " Porsche Panamera 3.6 (220 кВт/300 л.с.) 4x2 PDK          | | Код автомобиля: 323\n" << endl;
        }

        // пользователь выбрал вариант 9. Volkswagen
        if (ml == 9) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Volkswagen Phaeton 4.2 (246 кВт/335 л.с.) АКПП 4x4 Long   | | Код автомобиля: 324" << endl;
            cout << " Volkswagen Phaeton 6.0 (331 кВт/450 л.с.) АКПП 4x4 Long   | | Код автомобиля: 325" << endl;
            cout << " Volkswagen Phaeton 3.6 (206 кВт/280 л.с.) АКПП 4x4 Short  | | Код автомобиля: 326\n" << endl;
        }

        // пользователь выбрал вариант 10. Toyota
        if (ml == 10) {
            cout << " Наша система предлагает Вам следующие варианты для выбора автомобиля: " << endl << endl;
            cout << " Toyota Land Cruiser 200 4.6 VVT-i (227 кВт/309 л.с.) АКПП 4x4 Luxe  | | Код автомобиля: 327" << endl;
            cout << " Toyota Land Cruiser 200 4.5 D-4D (173 кВт/235 л.с.) АКПП 4x4 Luxe   | | Код автомобиля: 328\n" << endl;
        }



    }

    cout << "Посмотреть подробную информацию? " << endl;
    cout << " 1 - да." << endl;  cout << " 2 - нет." << endl;
    cout << " Вы выбрали: "; cin >> tf; cout << endl;
    if (tf == 1) {
        Avto(1);
    }

    return 1;
}


int main() {
    setlocale(LC_ALL, "Russian");
    int Cr, k, v;

    bool continue_running = 1;
    cout << "\tЭКСПЕРТНАЯ СИСТЕМА ПО ВЫБОРУ АВТОМОБИЛЯ." << endl << endl;
    while (continue_running) {
        cout << " Здравствуйте, вас приветствует CARина. Чем я могу помочь? " << endl;
        cout << " 1. Подобрать автомобиль. " << endl;
        cout << " 2. Посмотреть характеристику автомобиля. " << endl;
        cout << " Вы выбрали: "; cin >> Cr; cout << endl;

        if (Cr == 1) {
            Carina();
        }

        if (Cr == 2) {
            Avto(Cr);
        }

        //БЛОК 5. Затем как пользователь сделал свой выбор система спрашивает о точности выбора авто.
     //Если пользователь выбирает "Нет", то он может продолжить работу системы для выбора другого авто
     //или же закончить ее работу. При выборе ответа "Да" система завершает свою работу. 
        cout << endl << " Вас устроил выбор автомобиля?" << endl;
        cout << " 1 - Нет." << "   2 - Да. " << endl;
        cout << " Вы выбрали: ";  cin >> v; cout << endl;
        if (v == 1) {
            cout << " Вы можете продолжить работу системы для выбора другого автомобиля: " << endl;
            cout << " 0 - Нет. " << "   1 - Да. " << endl;
            cout << " Вы выбрали: ";  cin >> continue_running; cout << endl;
        }
        if (v == 2) {
            cout << " Спасибо, что воспользовались нашей экспертной системой! Удачных покупок!" << endl;
            exit(0);
        }

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
