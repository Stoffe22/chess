#pragma once

#include "piece.h"

namespace chess {
namespace piece {

class Pawn: public Piece {
 public:
  Pawn() = default;
  virtual ~Pawn() = default;

  const Type& GetType() const { return type; };
  bool AreSquaresLegal() const override;

 private:
  const Type type{"P"};
};

}
}
