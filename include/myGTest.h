#pragma once

#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

namespace com {
    // ANSI Codes -> https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

    /** @name Colors */
    /** @{ */

    /**
     * @brief Black
     * 
     */
    #define ANSI_TXT_BLACK "\x1B[0;30m"

    /**
     * @brief Red
     * 
     */
    #define ANSI_TXT_RED "\x1B[0;31m"

    /**
     * @brief Green
     * 
     */
    #define ANSI_TXT_GREEN "\x1B[0;32m"

    /**
     * @brief Yellow
     * 
     */
    #define ANSI_TXT_YELLOW "\x1B[0;33m"

    /**
     * @brief Blue
     * 
     */
    #define ANSI_TXT_BLUE "\x1B[0;34m"

    /**
     * @brief Magenta
     * 
     */
    #define ANSI_TXT_MAGENTA "\x1B[0;35m"

    /**
     * @brief Cyan
     * 
     */
    #define ANSI_TXT_CYAN "\x1B[0;36m"

    /**
     * @brief White
     * 
     */
    #define ANSI_TXT_WHITE "\x1B[0;37m"

    /**
     * @brief Default
     * 
     */
    #define ANSI_TXT_DEFAULT "\x1B[0;0m"

    /** @} */


    /**
     * @brief Macro to define the box format to match gtest output.
     * 
     */
    #define GTEST_BOX(box_content) "[ " << std::setw(8) << std::string(box_content).substr(0,8) << " ]"

    /**
     * @brief Returns a string in the same format as the standard Google Tests output
     * 
     * @param box_content Text inside the left box
     * @param message Text after the box
     * @param color Color of the message text
     * @return std::string The formatted string
     */
    std::string gtest_line(std::string box_content, std::string message, std::string color = ANSI_TXT_DEFAULT);
}
