#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <wchar.h>
#include <time.h>


using namespace std;

int getRandom(int min, int max){
    srand(time(NULL));
    int number = min + rand()%(max);
    //cout << "getRandom = "<< number <<endl;
    return number;
}

long long int getRandomNumber(){
    int arr[3] {0,11111111,22222222};
    int number;
    number = arr[getRandom(0,3)];
    //cout << "getRandomNumber = "<< number <<endl;
    return number;
}

long long int summa(string str){
    long long int summ = 0;
    for (int i = 0; i< str.length()+1; i++){
        char c = str[i];
        if (c > '0' && c < '9'){
            c = c - '0';
            summ += c;
        }
    }
    int numer = (str[3]-'0')*10+(str[4]-'0');
    //cout << "summ = " << summ <<endl;
    //cout << "numer = " << numer <<endl;
    //cout << pow(summ,numer) <<endl;
    //cout << pow(summ,numer)+ getRandomNumber() <<endl;
    return pow(summ,numer) + getRandomNumber(); 
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    wstring name;
    string birthdate;
    string music[14] = {"Master of puppets - Metallica", "Брошу - Pyrokinesis", "Homebody - PH1","Червяк - Даргомыжский","Russian - Ebunny","Enemy - Imagine dragons"," Зизазай - Огги и тараканы","Valentine - Justice","Swimming pools - Kendrick Lamar","Night Call - Kavinsky","Yesterday - The Beatles","Так закалялась сталь - Гражданская оборона","За деньги да - Инстасамка","Bad habits - Ed sheeran"};
    string movies[14] = {"Короткое замыкание", "Трансформеры", "Полночь", "По соображениям совести","Джентльмены","Ван Хельсинк","Операция Ы","Драйв","Большая игра","Игра в имитацию","Всё везде и сразу","Форрест Гамп","Терминал","Не смотрите наверх"};
    string actors[14] = {"Райан Гослинг", "Кристиан Бейл", "Джеки Чан","Эндрю Гарфилд","Леонардо ДиКаприо","Бенедикт Кембербетч","Мэтью Макконахи","Дэвид Линч","Дэниэлл Рэдклифф","Джейк Джиллехолл","Александр Петров","Рональд Рейган","Том Круз","Брэд Питт"};
    string actress[14] = {"Наталия Крачковская", "Меган Фокс", "Джениффер Лопез","Эмма Стоун","Эмма Уотсон","Кира Найтли","Милла Йовович","Марго Робби","Мерил Стрип","Скарлет Йоханссон","Александра Бортич","Анджелина Джоли","Шарлиз Терон","Ингеборга Дапкунайте"};
    string selebs[14] = {"Дейв Майнстейн", "Иван Зола", "Сергей Мавроди", "Екатерина Гордеева", "Роберт Опенгеймер", "Лионель Месси", "Папич", "Хидэо Кодзима", "Ляйсан Утяшева","Павел Воля","Криштиану Роналду","Борис Бурда","Ким Кардашьян","Клава Кока"};
    
    cout <<"Введите имя:"<<endl;
    wcin >> name;
    cout <<"Введите дату рождения:"<<endl;
    cin >> birthdate;
    cout <<"Добрый день, ";
    wcout << name << "!"<<endl;
    
    long long int sums = summa(birthdate);
    //cout << "sums = " << sums << endl;
    cout << "ваша песня сегодня: " << music[(sums)&15] << endl; 
    cout << "ваш фильм сегодня: " << movies[(sums>>4)&15] << endl;    
    cout << "ваш актер сегодня: " << actors[(sums>>8)&15] << endl;
    cout << "ваша актриса сегодня: " << actress[(sums>>12)&15] << endl;
    cout << "ваша селеба сегодня: " << selebs[(sums>>16)&15] << endl;
    return 0;
}
