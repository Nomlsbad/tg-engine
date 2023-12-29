#ifndef LEVEL_H
#define LEVEL_H

#include "Utils/ForwardDeclarations/Core.h"
#include "Utils/Types/CppTypes.h"

#include <set>

namespace TGEngine::Core
{

class Level
{
public:

    Level() = default;

    Level(const Level& level) = delete;
    Level& operator= (const Level& level) = delete;

    Level(Level&& level) = default;
    Level& operator= (Level&& level) = default;

public:

    void transferActor(const SharedPtr<Actor>& actor);
    [[nodiscard]] bool isAtLevel(const SharedPtr<Actor>& actor) const;

private:

    std::set<SharedPtr<Actor>> actors;
};

} // namespace TGEngine::Core

#endif // LEVEL_H