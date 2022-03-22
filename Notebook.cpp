#include "Notebook.hpp"
#include <string>
using namespace std;
#include "Direction.hpp"


namespace ariel {
    class notebook {
        void write(int page, int row, int col, Direction direction, string str) {

        }

        string read(unsigned int page, unsigned int row,unsigned int col, Direction direction,unsigned int chars) {
            return "";
        }

        void erase(unsigned int page,unsigned int row,unsigned int col, Direction direction,unsigned int chars) {

        }

        void show(int page) {

        }
    };


}