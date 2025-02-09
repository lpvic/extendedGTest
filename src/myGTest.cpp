#include "myGTest.h"

namespace com {
    std::string gtest_line(std::string box_content, std::string message, std::string color){
        std::stringstream os;
        os  << ANSI_TXT_GREEN << GTEST_BOX(box_content) << color << " " << message << ANSI_TXT_DEFAULT;
        return os.str();
    }
}