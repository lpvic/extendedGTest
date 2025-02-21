#pragma once

#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

namespace extGTest {
    // ANSI Codes -> https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
    /**
     * @brief ANSI Color definitions
     * 
     */
    const struct Colors {
        /**
         * @brief ANSI color code for default.
         * 
         */
        constexpr static std::string DEFAULT = "\x1B[0;0m";
        /**
         * @brief ANSI color code for black.
         * 
         */
        constexpr static std::string BLACK = "\x1B[0;30m";
        /**
         * @brief ANSI color code for red.
         * 
         */
        constexpr static std::string RED = "\x1B[0;31m";
        /**
         * @brief ANSI color code for green.
         * 
         */
        constexpr static std::string GREEN = "\x1B[0;32m";
        /**
         * @brief ANSI color code for yellow.
         * 
         */
        constexpr static std::string YELLOW = "\x1B[0;33m";
        /**
         * @brief ANSI color code for blue.
         * 
         */
        constexpr static std::string BLUE = "\x1B[0;34m";
        /**
         * @brief ANSI color code for magenta.
         * 
         */
        constexpr static std::string MAGENTA = "\x1B[0;35m";
        /**
         * @brief ANSI color code for cyan.
         * 
         */
        constexpr static std::string CYAN = "\x1B[0;36m";
        /**
         * @brief ANSI color code for white.
         * 
         */
        constexpr static std::string WHITE = "\x1B[0;37m";
    } COLORS;

    /**
     * @brief Text align inside the box
     */
    enum align_type {LEFT, RIGHT};

    /**
     * @brief Returns a string in the same format as the standard GoogleTest output
     * 
     * @param box_content Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     * @return std::string The formatted string
     */
    std::string gtest_line(std::string box_content, std::string message, std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_THAT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_THAT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_TRUE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_TRUE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_FALSE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_FALSE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_NE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_NE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_LT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_LT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_GT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_GT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_LE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_LE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_GE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_GE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_STREQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_STREQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_STRNE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_STRNE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_STRCASEEQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_STRCASEEQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_STRCASENE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_STRCASENE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_FLOAT_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_FLOAT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_DOUBLE_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_DOUBLE_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_NEAR that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_NEAR(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_ANY_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_ANY_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro ASSERT_NO_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myASSERT_NO_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_THAT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_THAT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_TRUE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_TRUE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_FALSE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_FALSE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_NE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_NE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_LT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_LT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_GT that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_GT(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_LE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_LE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_GE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_GE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_STREQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_STREQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_STRNE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_STRNE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_STRCASEEQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_STRCASEEQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_STRCASENE that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_STRCASENE(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_FLOAT_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_FLOAT_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_DOUBLE_EQ that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_DOUBLE_EQ(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_NEAR that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_NEAR(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_ANY_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_ANY_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);

    /**
     * @brief Wrapper for GoogleTest macro EXPECT_NO_THROW that prints additional information in the same format as the test summary
     *
     * @param test Test result
     * @param expectation Expected result
     * @param box_text Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @param align Alignment of the text inside the box
     */
    void myEXPECT_NO_THROW(auto test, auto expectation, std::string box_text = "", std::string message = "", std::string color = COLORS.DEFAULT, align_type align = LEFT);
}
