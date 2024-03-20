#include <iostream>
#include <iomanip>
#include <sstream>

class Money {
private:
    long hryvnia;
    unsigned char kopiyky;

public:
    Money();
    Money(long hryvnia, unsigned char kopiyky);
    Money(const Money& other);

    void setHryvnia(long value);
    long getHryvnia() const;

    void setKopiyky(unsigned char value);
    unsigned char getKopiyky() const;

    Money operator+(const Money& other) const;
    Money operator/(int divisor) const;
    Money operator/(double divisor) const;

    void display() const;

    std::string toString() const;

    void init(long hryvnia, unsigned char kopiyky);
    void Read();
};
