//
// Created by Blake Han on 2023/4/10.
//
#pragma once

#include "Message.hpp"

namespace yft {
    class IReader {
    public:
        virtual Message createMessage() = 0;

        virtual bool eof() = 0;

        virtual bool isValid() const = 0;
        virtual ~IReader() = default;

    };
}
