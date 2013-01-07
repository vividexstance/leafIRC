/**
 *  repl.h
 *
 *  @author Nathan Campos
 */

#ifndef REPL_H_
#define REPL_H_

#include <string>

class REPL {
    public:
        bool has_started;
        std::string input_marker;
        std::string current_str;

        // Constructor.
        REPL();
        //~REPL();

        void rewrite();
        std::string read();
        void eval();
};

#endif