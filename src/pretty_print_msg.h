/**
 *  pretty_print_msg.h
 *
 *  @author Nathan Campos
 */

#ifndef PRETTY_PRINT_MSG_H_
#define PRETTY_PRINT_MSG_H_

#include <string>
#include <vector>
#include "message.h"
#include "channels.h"

class Pretty_Print_Message {
    private:
        const char *buffer;
        bool echo;

        std::string color_string(std::string nickname, bool include_msg);

    public:
        Pretty_Print_Message(const char *_buffer);

        std::string generate(Message &message, Channels &channels);
        bool echo_message();
};

#endif
