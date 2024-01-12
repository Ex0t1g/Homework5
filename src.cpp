#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
	string Task = "У Маши было 6 яблок, у Васи 10, а у Коли 15. Сколько яблок было всего?";
    size_t startMasha = Task.find("У Маши было") + 13;
    size_t endMasha = Task.find("яблок,", startMasha);
    string numMasha = Task.substr(startMasha, endMasha - startMasha);
    int appleMasha = stoi(numMasha);

    size_t startVasya = Task.find("у Васи") + 8;
    size_t endVasya = Task.find("яблок,", startVasya);
    string numVasya = Task.substr(startVasya, endVasya - startVasya);
    int appleVasya = stoi(numVasya);

    size_t startKolya = Task.find("у Коли") + 7;
    size_t endKolya = Task.find("яблок", startKolya);
    string numKolya = Task.substr(startKolya, endKolya - startKolya);
    int appleKolya = stoi(numKolya);

 
    int sumApples = appleMasha + appleVasya + appleKolya;

    cout << "Общее количество яблок: " << sumApples << endl;

    return 0;
}