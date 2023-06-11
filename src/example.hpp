#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

struct Example
{
    constexpr static auto valueInt = 10;
    constexpr static auto valueFloat = 10.f;
    static int getInt();
    static float getFloat();
};

#endif
