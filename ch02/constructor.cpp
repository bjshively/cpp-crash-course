#include <cstdio>

struct ClockOfTheLongNow {
    // constructor with default value
    ClockOfTheLongNow() {
        year = 2019;
    }
    
    // constructor with custom initial value
    ClockOfTheLongNow(int n) {
        year = n;
    }

    void add_year() {
        year++;
    }

    // getter & setter for input control
    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return true;
    }

    int get_year() {
        return year;
    }

    // make year private
    private:
        int year;
};

int main() {
    ClockOfTheLongNow clock;
    if(!clock.set_year(2018)) {
        clock.set_year(2020);
    }
    printf("year: %d\n", clock.get_year());
    
    clock.add_year();
    printf("year: %d\n", clock.get_year());
    return 0;
}
