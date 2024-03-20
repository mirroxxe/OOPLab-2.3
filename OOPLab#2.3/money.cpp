#include "Money.h"

Money::Money() : hryvnia(0), kopiyky(0) {}

Money::Money(long hryvnia, unsigned char kopiyky) : hryvnia(hryvnia), kopiyky(kopiyky) {}

Money::Money(const Money& other) : hryvnia(other.hryvnia), kopiyky(other.kopiyky) {}

void Money::setHryvnia(long value) {
    hryvnia = value;
}

long Money::getHryvnia() const {
    return hryvnia;
}

void Money::setKopiyky(unsigned char value) {
    kopiyky = value;
}

unsigned char Money::getKopiyky() const {
    return kopiyky;
}

Money Money::operator+(const Money& other) const {
    long totalHryvnia = hryvnia + other.hryvnia;
    unsigned char totalKopiyky = kopiyky + other.kopiyky;
    if (totalKopiyky >= 100) {
        totalHryvnia++;
        totalKopiyky -= 100;
    }
    return Money(totalHryvnia, totalKopiyky);
}

Money Money::operator/(int divisor) const {
    long totalHryvnia = hryvnia / divisor;
    unsigned char totalKopiyky = kopiyky / divisor;
    return Money(totalHryvnia, totalKopiyky);
}

Money Money::operator/(double divisor) const {
    double total = hryvnia + kopiyky / 100.0;
    total /= divisor;
    long totalHryvnia = static_cast<long>(total);
    unsigned char totalKopiyky = static_cast<unsigned char>((total - totalHryvnia) * 100);
    return Money(totalHryvnia, totalKopiyky);
}

void Money::display() const {
    std::cout << hryvnia << "," << std::setw(2) << std::setfill('0') << static_cast<int>(kopiyky);
}

std::string Money::toString() const {
    std::ostringstream oss;
    oss << hryvnia << "," << std::setw(2) << std::setfill('0') << static_cast<int>(kopiyky);
    return oss.str();
}

void Money::init(long hryvnia, unsigned char kopiyky) {
    this->hryvnia = hryvnia;
    this->kopiyky = kopiyky;
}

void Money::Read() {
    std::cout << "Enter hryvnia: ";
    std::cin >> hryvnia;
    std::cout << "Enter kopiyky: ";
    std::cin >> kopiyky;
}
