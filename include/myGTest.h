#pragma once

#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

namespace myGTest {
    // ANSI Codes -> https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
    const struct Colors {
        constexpr static std::string DEFAULT = "\x1B[0;0m";
        constexpr static std::string BLACK = "\x1B[0;30m";
        constexpr static std::string RED = "\x1B[0;31m";
        constexpr static std::string GREEN = "\x1B[0;32m";
        constexpr static std::string YELLOW = "\x1B[0;33m";
        constexpr static std::string BLUE = "\x1B[0;34m";
        constexpr static std::string MAGENTA = "\x1B[0;35m";
        constexpr static std::string CYAN = "\x1B[0;36m";
        constexpr static std::string WHITE = "\x1B[0;37m";
    } COLORS;

    /**
     * @brief Text align inside the box
     */
    enum align_type {LEFT, RIGHT};

    /**
     * @brief Returns a string in the same format as the standard Google Tests output
     * 
     * @param box_content Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     * @return std::string The formatted string
     */
    std::string gtest_line(std::string box_content, std::string message, std::string color = COLORS.DEFAULT, align_type align = LEFT);

    void myASSERT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
            ASSERT_EQ(test, expectation);
        }
    }

    void myEXPECT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
            EXPECT_EQ(test, expectation);
        }
    }
}
