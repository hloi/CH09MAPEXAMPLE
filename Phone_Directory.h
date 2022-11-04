//
// Created by hloi on 11/4/2022.
//

#ifndef CH09MAPEXAMPLE_PHONE_DIRECTORY_H
#define CH09MAPEXAMPLE_PHONE_DIRECTORY_H

#include <string>
#include <map>

class Phone_Directory {
public:
    Phone_Directory() {}
    ~Phone_Directory() {}
    void load_data(const std::string source_name);
    std::string lookup_entry(const std::string& name) const;
    std::string add_or_change_entry(const std::string& name,
                                    const std::string& number);
    std::string remove_entry(const std::string & name);
    void save();
    void print();
private:
    typedef std::map< std::string, std::string >::iterator iterator;
    typedef std::map< std::string, std::string >::const_iterator const_iterator;

    std::map<std::string, std::string> the_directory;
    std::string source_name;
    bool modified;


};


#endif //CH09MAPEXAMPLE_PHONE_DIRECTORY_H
