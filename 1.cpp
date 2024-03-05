#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char jezyk1[] = "C++";
    cout << jezyk1 << endl;

    strcpy(jezyk1, "Java");
    cout << jezyk1 << endl;

    char jezyk2[] = "CH";
    cout << jezyk2 << endl;

    strcpy(jezyk2, "Java");
    cout << jezyk2 << endl;

    const char* jezyk3 = "Java";
    cout << jezyk3 << endl;

    

    return 0;
}




