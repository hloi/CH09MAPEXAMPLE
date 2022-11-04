#include <iostream>
#include "Phone_Directory.h"
using namespace std;
int main() {
    Phone_Directory pd;
    pd.load_data("Book1.csv");
    pd.print();
    string name = "Nancy Higgins";
    cout << pd.lookup_entry(name) << endl;
    name = "nobody";
    cout << pd.lookup_entry(name) << endl;
    name = "Wm Love";
    pd.remove_entry(name);
    pd.print();
    return 0;
}
