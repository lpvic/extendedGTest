#include "modGTest.h"

int main(){
    std::cerr << modGTest::gtest_line("12890", "Hola", modGTest::COLORS.MAGENTA, modGTest::RIGHT) << std::endl;
    std::cerr << modGTest::gtest_line("12890", "Hola", modGTest::COLORS.CYAN, modGTest::LEFT) << std::endl;
    std::cerr << "Hola" << std::endl;
    return 0;
}
