/*
 * GaitPatternBase.hpp
 *
 *  Created on: Feb 21, 2014
 *      Author: gech
 */

#ifndef LOCO_GAITPATTERNBASE_HPP_
#define LOCO_GAITPATTERNBASE_HPP_


namespace loco {

class GaitPatternBase {
  friend class GaitPreview;
public:
  GaitPatternBase() {

  }

  virtual ~GaitPatternBase() {

  }

  virtual double getStrideDuration() = 0;

  virtual void setStrideDuration(double strideDuration) = 0;

  /**
    returns the relative phase for the leg whose index is passed in. The number
    returned is always going to be between 0 and 1 (0 meaning it should still be in stance mode,
    1 - it is a stance leg again, anything in between means that it is a swing leg).
    The absoultePhase is expected to be between 0 and 1.
  */
  virtual double getRelativePhaseForLeg(int iLeg, double absolutePhase) = 0;

  //! returns the relative stance phase for the leg. If the leg is in swing mode, it returns -1
  virtual double getStancePhaseForLeg(int iLeg, double absolutePhase) = 0;

  //! returns the total length (in unitless phase measurement) of the stance phase
  virtual double getStanceDuration(int iLeg) = 0;

  virtual unsigned long int getNumGaitCycles() = 0;



};

} // namespace loco


#endif /* LOCO_GAITPATTERNBASE_HPP_ */