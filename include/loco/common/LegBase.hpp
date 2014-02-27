/*
 * LegBase.hpp
 *
 *  Created on: Feb 25, 2014
 *      Author: gech
 */

#ifndef LOCO_LEGBASE_HPP_
#define LOCO_LEGBASE_HPP_

#include "loco/common/LegStateLiftOff.hpp"
#include "loco/common/LegStateTouchDown.hpp"

#include "loco/common/TypeDefs.hpp"

#include <string>
#include <iostream>

namespace loco {

class LegBase {
 public:
  typedef Eigen::Vector3d Position;
 public:
  LegBase();
  LegBase(const std::string& name);
  virtual ~LegBase();

  virtual const std::string& getName() const ;

  virtual double getStancePhase() const;
  virtual double getSwingPhase() const;

  virtual double getStanceDuration() const;
  virtual double getSwingDuration() const;

  virtual bool isInStanceMode() const;
  virtual bool isInSwingMode() const;

  virtual bool isGrounded() const;
  virtual bool shouldBeGrounded() const;
  virtual bool isAndShoulBeGrounded() const;


  virtual void setStancePhase(double phase);
  virtual void setSwingPhase(double phase);

  virtual void setStanceDuration(double duration);
  virtual void setSwingDuration(double duration);

  virtual void setIsInStanceMode(bool isInStanceMode);
  virtual void setIsInSwingMode(bool isInSwingMode);

  virtual void setIsGrounded(bool isGrounded);
  virtual void setShouldBeGrounded(bool shouldBeGrounded);

  LegStateTouchDown* getStateTouchDown();
  LegStateLiftOff* getStateLiftOff();


  virtual const Position& getFootPositionInWorldFrame() = 0;
  friend std::ostream& operator << (std::ostream& out, const LegBase& leg) {
    out << "name" << leg.getName() << std::endl;
    return out;
  }

 protected:
  std::string name_;

  double stancePhase_;
  double swingPhase_;
  double stanceDuration_;
  double swingDuration_;

  bool isInStanceMode_;
  bool isInSwingMode_;
  bool isGrounded_;
  bool shouldBeGrounded_;

  LegStateTouchDown stateTouchDown_;
  LegStateLiftOff stateLiftOff_;
};

} /* namespace loco */

#endif /* LOCO_LEGBASE_HPP_ */
