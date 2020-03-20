#include <cassert>
#include <cstring>

extern "C" {
#include <cell_sdl.h>
}

#include <SDL.h>

int main(int argc, char** argv) {
    auto cfg = LTC_sdl_defaults(LT_config{});
    assert(memcmp(&cfg, &LT_config{ 0 }, sizeof(LT_config)) == 0);
    return 0;
}
