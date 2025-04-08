#pragma once

struct Mineral
{
    auto mine(int requested) -> int;//if worker request amount mineral checks if requested mineral is present if yes give if no give left

    auto is_available() -> bool; //return whether mineral is left

    double position_x{ 0.0 };
    double position_y{ 0.0 };
    int units{ 100 };
};
