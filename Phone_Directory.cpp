//
// Created by hloi on 11/4/2022.
//
#include <fstream>
#include <istream>
#include <ostream>
#include <string>
#include <iostream>
#include <sstream>

#include "Phone_Directory.h"
using namespace std;
void Phone_Directory::load_data(const std::string source_name) {
    this->source_name = source_name;
    ifstream in(source_name.c_str());
    if (in) {
        string name, number, line;
        while (getline(in, line)) {
            istringstream iss(line);
            getline(iss, name, ',');
            getline(iss, number, ',');
            the_directory[name] = number;

        }
        in.close();
    }

}

void Phone_Directory::print() {
    for (iterator itr=the_directory.begin(); itr!=the_directory.end(); ++itr) {
        cout << itr->first << ", " << itr->second << endl;
    }
}

std::string Phone_Directory::lookup_entry(const string &name) const {

    const_iterator itr = the_directory.find(name);
    if (itr != the_directory.end()) {
        return itr->second;
    }
    return "";

}

std::string Phone_Directory::remove_entry(const string &name) {
    iterator itr = the_directory.find(name);
    if (itr != the_directory.end()) {
        string value = itr->first;
        the_directory.erase(name);
        return value;
    }
    return "";

    return std::string();
}
