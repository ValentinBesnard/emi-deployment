#ifndef MODELS_IDENTIFIERS_H
#define MODELS_IDENTIFIERS_H
/**
 * @file identifiers.h
 *
 * Define identifiers for states and signal events of the UML model.
 *
 * This file is automatically generated by the uml-serializer-c tool.
 * Do not modify manually.
 *
 * @author Matthias Brun (matthias.brun@eseo.fr)
 * @author Valentin Besnard (valentin.besnard@eseo.fr)
 */

#include "types_calibration.h"
#include "interpreter/active_object.h"
#include "interpreter/passive_object.h"

// Serialize root access to composite structure classes
#define ROOT_instMain 	passiveObjects.instMain
#ifdef WITH_OBSERVERS
#define ROOT_instObs 	passiveObjects.instObs
#endif /* WITH_OBSERVERS */








#define STATE_Buttons_Initial			0
#define STATE_Buttons_Idle			1


#define STATE_Pedal_Initial			0
#define STATE_Pedal_Released			1
#define STATE_Pedal_Pressed			2

#define STATE_Engine_Initial			0
#define STATE_Engine_Idle			1





#define STATE_GpioButton_Initial			0
#define STATE_GpioButton_Released			1
#define STATE_GpioButton_Pressed			2


#define STATE_Observer1_Initial			0
#define STATE_Observer1_Disengaged			1
#define STATE_Observer1_Fail			2
#define STATE_Observer1_Engaged			3

#define STATE_Observer2_Initial			0
#define STATE_Observer2_Running			1
#define STATE_Observer2_Fail			2

#define STATE_Observer3_Initial			0
#define STATE_Observer3_Running			1
#define STATE_Observer3_Fail			2








#define STATE_Actuation_Initial			0
#define STATE_Actuation_ChoiceEngagedCaptureSpeed			1
#define STATE_Actuation_ChoiceDisengagedCaptureSpeed			2
#define STATE_Actuation_Disengaged			3
#define STATE_Actuation_Engaged			4

#define STATE_CruiseSpeedManager_Initial			0
#define STATE_CruiseSpeedManager_ChoiceIncCS			1
#define STATE_CruiseSpeedManager_ChoiceDecCS			2
#define STATE_CruiseSpeedManager_Idle			3
#define STATE_CruiseSpeedManager_WaitSpeed			4

#define STATE_PedalsManager_Initial			0
#define STATE_PedalsManager_ChoiceLock			1
#define STATE_PedalsManager_ChoiceResume			2
#define STATE_PedalsManager_Idle			3
#define STATE_PedalsManager_Lock			4

#define STATE_Controller_Initial			0
#define STATE_Controller_WaitCS			1
#define STATE_Controller_WaitPM			2
#define STATE_Controller_Off			3
#define STATE_Controller_On			4
#define STATE_Controller_Pause			5
#define STATE_Controller_Engaged			6
#define STATE_Controller_Lock			7
#define STATE_Controller_WaitDisengaged			8











#define SIGNAL_buttonPressed			(globalSignalEvents.buttonPressed)
#define SIGNAL_lock			(globalSignalEvents.lock)
#define SIGNAL_unlock			(globalSignalEvents.unlock)
#define SIGNAL_requestPedals			(globalSignalEvents.requestPedals)
#define SIGNAL_ackPedals			(globalSignalEvents.ackPedals)
#define SIGNAL_nackPedals			(globalSignalEvents.nackPedals)
#define SIGNAL_setCS			(globalSignalEvents.setCS)
#define SIGNAL_incCS			(globalSignalEvents.incCS)
#define SIGNAL_decCS			(globalSignalEvents.decCS)
#define SIGNAL_ackCS			(globalSignalEvents.ackCS)
#define SIGNAL_nackCS			(globalSignalEvents.nackCS)
#define SIGNAL_resetCS			(globalSignalEvents.resetCS)
#define SIGNAL_engage			(globalSignalEvents.engage)
#define SIGNAL_disengage			(globalSignalEvents.disengage)
#define SIGNAL_disengaged			(globalSignalEvents.disengaged)
#define SIGNAL_speedCaptured			(globalSignalEvents.speedCaptured)
#define SIGNAL_speedNotCaptured			(globalSignalEvents.speedNotCaptured)
#define SIGNAL_requestSetPoint			(globalSignalEvents.requestSetPoint)
#define SIGNAL_start			(globalSignalEvents.start)
#define SIGNAL_stop			(globalSignalEvents.stop)
#define SIGNAL_set			(globalSignalEvents.set)
#define SIGNAL_pause			(globalSignalEvents.pause)
#define SIGNAL_resume			(globalSignalEvents.resume)
#define SIGNAL_inc			(globalSignalEvents.inc)
#define SIGNAL_dec			(globalSignalEvents.dec)
#define SIGNAL_pedalPressed			(globalSignalEvents.pedalPressed)
#define SIGNAL_pedalReleased			(globalSignalEvents.pedalReleased)
#define SIGNAL_controlOn			(globalSignalEvents.controlOn)
#define SIGNAL_controlOff			(globalSignalEvents.controlOff)
#define SIGNAL_updateSpeed			(globalSignalEvents.updateSpeed)
#define SIGNAL_updateSetPoint			(globalSignalEvents.updateSetPoint)

#endif /* MODELS_IDENTIFIERS_H */
