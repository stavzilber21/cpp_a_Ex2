#include <string>
using namespace std;
#include "Direction.hpp"
#include <vector>
#include <array>

namespace ariel{

    class Page {
    public:
        Page() {}
        ~Page() {}

        void write(int, int, Direction, string) {}
        void read(int, int, Direction, int) {}
        void earse(int, int, Direction, int) {}
        void show() {}

    private:
        vector<array<char, 100>> text;
    };

    class Notebook {
    public:
        Notebook() {}
        ~Notebook() {}

        void write(int page, int row, int col, Direction direction, string str){}
        string read(int page, int row, int col, Direction direction, int chars) { return ""; }
        void erase(int page, int row, int col, Direction direction, int chars) {}
        void show(int page) {}

    private:
        vector<Page> pages;
    };

}