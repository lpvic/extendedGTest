#include "myGTest.h"

int main(){
    std::cerr << myGTest::gtest_line("12890", "Hola", myGTest::COLORS.MAGENTA, myGTest::RIGHT) << std::endl;
    std::cerr << myGTest::gtest_line("12890", "Hola", myGTest::COLORS.CYAN, myGTest::LEFT) << std::endl;
    std::cerr << "Hola" << std::endl;
    return 0;
}
