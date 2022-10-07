#pragma once 
#include <Stardust-Celeste.hpp>
#include "world.hpp"
#include "player.hpp"

using namespace Stardust_Celeste;

class GameState final : public Core::ApplicationState {
    public:

    GameState() = default;
    ~GameState() = default;

    auto on_start() -> void;
    auto on_cleanup() -> void;

    auto on_update(Core::Application *app, double dt) -> void;
    auto on_draw(Core::Application *app, double dt) -> void;

    private:
        ScopePtr<World> world;
        ScopePtr<Player> player;

    Utilities::Controller *psp_controller;
    Utilities::Controller *vita_controller;
    Utilities::Controller *key_controller;
    Utilities::Controller *mouse_controller;
};