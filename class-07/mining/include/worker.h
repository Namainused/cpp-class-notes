#pragma once

#include "mineral.h"

struct Worker
{
    auto update(Mineral& mineral) -> void;//if mineral is empty basket is not full, once full or no more mineral back to 0 0 drop off mineral basket 0

    auto move(double target_x, double target_y, double speed) -> void;//

    auto work(Mineral &mineral) -> void;//arrive at mine request mineral from mine only amount carry. incrament number of unit in basket

    auto is_empty() -> bool;

    auto is_full() -> bool;

    auto is_close_to_mineral(const Mineral& mineral) -> bool;

    double position_x{ 0.0 };
    double position_y{ 0.0 };

    int units{ 0 };
    int capacity{ 5 };
};
auto Worker::is_empty() -> bool{//basket is empty
    bool empty = false;
    if (units == 0) {
        empty = true;
    }
    return empty;
}

auto Worker::is_full() -> bool{//number is equal to capacity
    bool full = false;
    if (units == capacity) {
        full = true;
    }
    return full;
}

auto Worker::is_close_to_mineral(const Mineral& mineral) -> bool{//measure if is close to mineral
    double x_diff = mineral.position_x - position_x;
    double y_diff = mineral.position_y - position_y;
    double range = 3.0;
    bool close = false;
    if (x_diff > -range && x_diff < range && y_diff > -range && y_diff < range) {
        bool close = true;
    }
    return close;
}