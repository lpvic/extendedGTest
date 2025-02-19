#include "extendedGTest.h"

int main(){
    std::cerr << extGTest::gtest_line("12890", "Hola", extGTest::COLORS.MAGENTA, extGTest::RIGHT) << std::endl;
    std::cerr << extGTest::gtest_line("12890", "Hola", extGTest::COLORS.CYAN, extGTest::LEFT) << std::endl;
    std::cerr << "Hola" << std::endl;
    return 0;
}
