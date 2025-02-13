#include "modGTest.h"

namespace modGTest {
    std::string gtest_line(std::string box_content, std::string message, std::string color, align_type align){
        std::stringstream os;

        os  << COLORS.GREEN << "[ " << (align ? std::right : std::left) << std::setw(8) << box_content.substr(0,8) << " ]";
        os << color << " " << message << COLORS.DEFAULT << std::endl;
        return os.str();
    }

    void myASSERT_THAT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_THAT(test, expectation);
    }
    
    void myASSERT_TRUE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_TRUE(test, expectation);
    }
    
    void myASSERT_FALSE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_FALSE(test, expectation);
    }
    
    void myASSERT_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_EQ(test, expectation);
    }
    
    void myASSERT_NE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_NE(test, expectation);
    }
    
    void myASSERT_LT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_LT(test, expectation);
    }
    
    void myASSERT_GT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_GT(test, expectation);
    }
    
    void myASSERT_LE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_LE(test, expectation);
    }
    
    void myASSERT_GE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_GE(test, expectation);
    }
    
    void myASSERT_STREQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_STREQ(test, expectation);
    }
    
    void myASSERT_STRNE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_STRNE(test, expectation);
    }
    
    void myASSERT_STRCASEEQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_STRCASEEQ(test, expectation);
    }
    
    void myASSERT_STRCASENE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_STRCASENE(test, expectation);
    }
    
    void myASSERT_FLOAT_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_FLOAT_EQ(test, expectation);
    }
    
    void myASSERT_DOUBLE_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_DOUBLE_EQ(test, expectation);
    }
    
    void myASSERT_NEAR(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_NEAR(test, expectation);
    }
    
    void myASSERT_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_THROW(test, expectation);
    }
    
    void myASSERT_ANY_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_ANY_THROW(test, expectation);
    }
    
    void myASSERT_NO_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        ASSERT_NO_THROW(test, expectation);
    }
    
    void myEXPECT_THAT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_THAT(test, expectation);
    }
    
    void myEXPECT_TRUE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_TRUE(test, expectation);
    }
    
    void myEXPECT_FALSE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_FALSE(test, expectation);
    }
    
    void myEXPECT_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_EQ(test, expectation);
    }
    
    void myEXPECT_NE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_NE(test, expectation);
    }
    
    void myEXPECT_LT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_LT(test, expectation);
    }
    
    void myEXPECT_GT(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_GT(test, expectation);
    }
    
    void myEXPECT_LE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_LE(test, expectation);
    }
    
    void myEXPECT_GE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_GE(test, expectation);
    }
    
    void myEXPECT_STREQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_STREQ(test, expectation);
    }
    
    void myEXPECT_STRNE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_STRNE(test, expectation);
    }
    
    void myEXPECT_STRCASEEQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_STRCASEEQ(test, expectation);
    }
    
    void myEXPECT_STRCASENE(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_STRCASENE(test, expectation);
    }
    
    void myEXPECT_FLOAT_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_FLOAT_EQ(test, expectation);
    }
    
    void myEXPECT_DOUBLE_EQ(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_DOUBLE_EQ(test, expectation);
    }
    
    void myEXPECT_NEAR(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_NEAR(test, expectation);
    }
    
    void myEXPECT_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_THROW(test, expectation);
    }
    
    void myEXPECT_ANY_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_ANY_THROW(test, expectation);
    }
    
    void myEXPECT_NO_THROW(auto test, auto expectation, std::string box_text, std::string message, std::string color, align_type align) {
        if ((!box_text.empty()) || (!message.empty())) {
            std::cerr << gtest_line(box_text, message, color, align);
        }
        EXPECT_NO_THROW(test, expectation);
    }
}    