//
// Created by Legion on 6/1/2023.
//

#ifndef LAB_5_TINTNUMBER_H
#define LAB_5_TINTNUMBER_H
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

class TIntNumber {
protected:
    int value;
public:
    TIntNumber();
    void setValue(int val);
    int getValue() const;
    virtual void input();
    virtual void output() const;
    void add(const TIntNumber& other);
    int compare(const TIntNumber& other) const;
    virtual std::string convertToBase(int base) const;
};

class TIntNumber2 : public TIntNumber {
public:
    void input() override;
    void output() const override;
};

class TIntNumber8 : public TIntNumber {
public:
    void input() override;
    void output() const override;
};



#endif //LAB_5_TINTNUMBER_H
