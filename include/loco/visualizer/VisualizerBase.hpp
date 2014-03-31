/*
 * VisualizerBase.hpp
 *
 *  Created on: Mar 14, 2014
 *      Author: gech
 */

#ifndef LOCO_VISUALIZERBASE_HPP_
#define LOCO_VISUALIZERBASE_HPP_

namespace loco {

class VisualizerBase {
 public:
  VisualizerBase();
  virtual ~VisualizerBase();
 protected:
  double desiredFrameRate_;
};

} /* namespace loco */

#endif /* LOCO_VISUALIZERBASE_HPP_ */
