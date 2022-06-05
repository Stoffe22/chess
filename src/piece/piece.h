#pragma once

#include <string>

namespace chess {
namespace piece {

using Type = std::string;
class Piece {
 public:
  Piece() = default;
  virtual ~Piece() = default;

  virtual const Type& GetType() const = 0;
  virtual bool AreSquaresLegal() const = 0;
};

} // namespace piece
} // namspace chess