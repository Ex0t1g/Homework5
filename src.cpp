#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
	string Task = "� ���� ���� 6 �����, � ���� 10, � � ���� 15. ������� ����� ���� �����?";
    size_t startMasha = Task.find("� ���� ����") + 13;
    size_t endMasha = Task.find("�����,", startMasha);
    string numMasha = Task.substr(startMasha, endMasha - startMasha);
    int appleMasha = stoi(numMasha);

    size_t startVasya = Task.find("� ����") + 8;
    size_t endVasya = Task.find("�����,", startVasya);
    string numVasya = Task.substr(startVasya, endVasya - startVasya);
    int appleVasya = stoi(numVasya);

    size_t startKolya = Task.find("� ����") + 7;
    size_t endKolya = Task.find("�����", startKolya);
    string numKolya = Task.substr(startKolya, endKolya - startKolya);
    int appleKolya = stoi(numKolya);

 
    int sumApples = appleMasha + appleVasya + appleKolya;

    cout << "����� ���������� �����: " << sumApples << endl;

    return 0;
}