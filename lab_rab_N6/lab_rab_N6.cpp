
#include <iostream>
#include <string>	

using namespace std;		

int main()
{
    setlocale(LC_ALL, "ru");

    char* string = new char[255];
    char* token;
    char* next_token;
    unsigned int max = 0;
    const char* maxStr = "";
    unsigned int min = 255;
    const char* minStr =  "";

    cout << "Введите текст:" << endl;
    gets_s(string, 255);

    token = strtok_s(string, " ", &next_token);
    while (token != NULL) {
        if (*token == '.') {
            token = strtok_s(NULL, " ", &next_token);
            continue;
        }
        if (max < strlen(token)) {
            maxStr = token;
            max = strlen(maxStr);
        }
        if (min > strlen(token)) {
            minStr = token;
            min = strlen(minStr);
        }
        token = strtok_s(NULL, " ", &next_token);

    }

    cout << "Самое длинное слово: " << maxStr << endl;
    cout << "Самое короткое слово: " << minStr << endl;
    system("pause");
    return 0;

}
