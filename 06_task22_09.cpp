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
    string music[14] = {"Master of puppets - Metallica", "Áðîøó - Pyrokinesis", "Homebody - PH1","×åðâÿê - Äàðãîìûæñêèé","Russian - Ebunny","Enemy - Imagine dragons"," Çèçàçàé - Îããè è òàðàêàíû","Valentine - Justice","Swimming pools - Kendrick Lamar","Night Call - Kavinsky","Yesterday - The Beatles","Òàê çàêàëÿëàñü ñòàëü - Ãðàæäàíñêàÿ îáîðîíà","Çà äåíüãè äà - Èíñòàñàìêà","Bad habits - Ed sheeran"};
    string movies[14] = {"Êîðîòêîå çàìûêàíèå", "Òðàíñôîðìåðû", "Ïîëíî÷ü", "Ïî ñîîáðàæåíèÿì ñîâåñòè","Äæåíòëüìåíû","Âàí Õåëüñèíê","Îïåðàöèÿ Û","Äðàéâ","Áîëüøàÿ èãðà","Èãðà â èìèòàöèþ","Âñ¸ âåçäå è ñðàçó","Ôîððåñò Ãàìï","Òåðìèíàë","Íå ñìîòðèòå íàâåðõ"};
    string actors[14] = {"Ðàéàí Ãîñëèíã", "Êðèñòèàí Áåéë", "Äæåêè ×àí","Ýíäðþ Ãàðôèëä","Ëåîíàðäî ÄèÊàïðèî","Áåíåäèêò Êåìáåðáåò÷","Ìýòüþ Ìàêêîíàõè","Äýâèä Ëèí÷","Äýíèýëë Ðýäêëèôô","Äæåéê Äæèëëåõîëë","Àëåêñàíäð Ïåòðîâ","Ðîíàëüä Ðåéãàí","Òîì Êðóç","Áðýä Ïèòò"};
    string actress[14] = {"Íàòàëèÿ Êðà÷êîâñêàÿ", "Ìåãàí Ôîêñ", "Äæåíèôôåð Ëîïåç","Ýììà Ñòîóí","Ýììà Óîòñîí","Êèðà Íàéòëè","Ìèëëà Éîâîâè÷","Ìàðãî Ðîááè","Ìåðèë Ñòðèï","Ñêàðëåò Éîõàíññîí","Àëåêñàíäðà Áîðòè÷","Àíäæåëèíà Äæîëè","Øàðëèç Òåðîí","Èíãåáîðãà Äàïêóíàéòå"};
    string selebs[14] = {"Äåéâ Ìàéíñòåéí", "Èâàí Çîëà", "Ñåðãåé Ìàâðîäè", "Åêàòåðèíà Ãîðäååâà", "Ðîáåðò Îïåíãåéìåð", "Ëèîíåëü Ìåññè", "Ïàïè÷", "Õèäýî Êîäçèìà", "Ëÿéñàí Óòÿøåâà","Ïàâåë Âîëÿ","Êðèøòèàíó Ðîíàëäó","Áîðèñ Áóðäà","Êèì Êàðäàøüÿí","Êëàâà Êîêà"};
    
    cout <<"Ââåäèòå èìÿ:"<<endl;
    wcin >> name;
    cout <<"Ââåäèòå äàòó ðîæäåíèÿ:"<<endl;
    cin >> birthdate;
    cout <<"Äîáðûé äåíü, ";
    wcout << name << "!"<<endl;
    
    long long int sums = summa(birthdate);
    //cout << "sums = " << sums << endl;
    cout << "âàøà ïåñíÿ ñåãîäíÿ: " << music[(sums)&15] << endl; 
    cout << "âàø ôèëüì ñåãîäíÿ: " << movies[(sums>>4)&15] << endl;    
    cout << "âàø àêòåð ñåãîäíÿ: " << actors[(sums>>8)&15] << endl;
    cout << "âàøà àêòðèñà ñåãîäíÿ: " << actress[(sums>>12)&15] << endl;
    cout << "âàøà ñåëåáà ñåãîäíÿ: " << selebs[(sums>>16)&15] << endl;
    return 0;
}
