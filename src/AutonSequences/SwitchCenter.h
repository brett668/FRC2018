/*
 * Switch.h
 *
 *  Created on: Feb 28, 2018
 *      Author: DriversStation
 */

#ifndef SRC_AUTONSEQUENCES_SWITCH_CENTER_H_
#define SRC_AUTONSEQUENCES_SWITCH_CENTER_H_

#include <Autonomous.h>

class SwitchCenter : public Autonomous {
public:

	int length;

	SwitchCenter(DriveController *dc, Elevator *el, Intake *in) : Autonomous(dc, el, in) {

	}

	void GenerateSwitch(bool left, bool added_switch);
	void GetAddedSwitch(bool left);
	void PlaceAddedSwitch(bool left);

	void RunStateMachine(bool *place_switch);

};

#endif /* SRC_AUTONSEQUENCES_SWITCH_H_ */
