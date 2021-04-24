namespace Chrono
{

    enum class Month
    {
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    class Date
    {
        public:
            class invalid{}; // to throw as exception

            Date(int y, Month m, int d); // check for valid date and initialize
            Date(); // default contructo

            // nonmodifying operations
            int day() const {return d;}
            Month month() const {return m;}
            int year() const {return y;}

            // modifying operations
            void add_day(int n);
            void add_month(int n);
            void add_year(int n);

        private:
            int y;
            Month m;
            int d;
    }; // end of class

    bool is_date(int y, Month m, int y); // true for valid date
    bool leapyear(int y); // true if y is a leap year

    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);

    ostream& operator<<(ostream& os, const Date& d);
    istream& operator>>(istream& is, Date& dd);

    Day day_of_week(const Date& d); // day of week of d
    Date next_sunday(const Date& d); // next sunday after d
    Date next_weekday(const Date& d); // next weed day after d

} // End namespace