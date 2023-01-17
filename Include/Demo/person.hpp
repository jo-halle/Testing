
#ifndef OBJEKTORIENTERT_PROGRAMERING_PERSON_HPP
#define OBJEKTORIENTERT_PROGRAMERING_PERSON_HPP

#include <string>
class person{

public:
    person(const std::string& name): name_(name){}

    std::string get_name() const {
        return name_;
    }

private:
    std::string name_;

};


#endif //OBJEKTORIENTERT_PROGRAMERING_PERSON_HPP
