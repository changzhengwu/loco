/*!
* @file     LocomotionControllerBase.hpp
* @author   Christian Gehring
* @date     Feb, 2014
* @version  1.0
* @ingroup
* @brief
*/
#ifndef LOCO_LOCOMOTIONCONTROLLERBASE_HPP_
#define LOCO_LOCOMOTIONCONTROLLERBASE_HPP_


namespace loco {

class LocomotionControllerBase {
 public:
  LocomotionControllerBase();
  virtual ~LocomotionControllerBase();

  /*!
   * Initializes locomotion controller
   * @param dt the time step [s]
   * @return true if successfull.
   */
  virtual bool initialize(double dt) = 0;

  /*! Advance in time
   * @param dt  time step [s]
   */
  virtual bool advance(double dt) = 0;


  /*! @returns true if the controller is initialized.
   */
  virtual bool isInitialized() const = 0;

  /*! @returns the run time of the controller in seconds.
   */
  virtual double getRuntime() const = 0;

 protected:

};

} /* namespace loco */

#endif /* LOCOMOTIONCONTROLLERBASE_HPP_ */
