# pragma once
#include <Message.hpp>
#include <Order.hpp>
#include <OrderPool.hpp>
#include <OrderBook.hpp>
#include <Reader.hpp>
#include <Writer.hpp>


namespace yft {
    class IReader;

    class BookConstructor {
    private:
        Message message;
        OrderBook book;
        OrderPool pool;
        IReader* message_reader;
        Writer messageWriter;
        Writer bookWriter;
        Writer parserWriter;
        size_t levels;
    public:
        BookConstructor(IReader* reader,
                        const std::string &outputMessageCSV,
                        const std::string &outputBookCSV,
                        const size_t &_levels);

//        BookConstructor(IReader* reader);

        ~BookConstructor();

        void start();

        void next();

        bool updateMessage();

        void updateBook();

        void updatePool();

        void WriteBookAndMessage();

    };
}
