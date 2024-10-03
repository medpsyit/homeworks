#pragma once

class Counter
{
private:
    int defaultCount = 1;
public:
    int get_count();
    void set_count(int customCount);
    void add();
    void subtract();
    void check();
};