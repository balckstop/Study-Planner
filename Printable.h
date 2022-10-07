#ifndef _PRINTABLE_H_
#define _PRINTABLE_H_

class Printable {
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj);
    
    public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~Printable() = default;
};

#endif