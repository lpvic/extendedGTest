#include "myGTest.h"

namespace myGTest {
    std::string gtest_line(std::string box_content, std::string message, std::string color, align_type align){
        std::stringstream os;

        os  << COLORS.GREEN << "[ " << (align ? std::right : std::left) << std::setw(8) << box_content.substr(0,8) << " ]";
        os << color << " " << message << COLORS.DEFAULT << std::endl;
        return os.str();
    }
}