
# Modular Deployment of UML Models on Embedded Targets

This project presents sample UML models for modular deployment on embedded targets.
Different environment models can be used for different purposes: simulation, verification, and execution on actual embedded boards.
In this project, these models are executed using the Embedded Model Interpreter (EMI), verified with the [OBP2 model-checker](https://plug-obp.github.io/), and deployed on a STM32 discovery board.


## Sample UML Models

This repository presents three models:

** Button Led** 
A very simple model that switches on/off a LED when a button is pressed/released.
Three environment models can be used for the deployment:
	* SimulatedEnv: An platform independent model that can be used for simulation and verification
	* GpioEnv: A model that map the LED to an output GPIO pin and the button to an input GPIO pin of an embedded target
	* PwmEnv: A model that map the LED to a PWM channel and the button to an input GPIO pin of an embedded target

** Level Crossing **
A model of a level crossing controller that must ensure safety during the passage of a train.
Two environment models can be used for the deployment:
	* SimulatedEnv: An platform independent model that can be used for simulation and verification
	* ConcreteEnv: A model that can be used for deployment on an actual embedded board using all or nothing sensors and actuators (leds, servomotor).

** Cruise Control Interface **
A model of a user interface of a cruise control system that must compute the cruise speed which be used as setpoint for the control loop controlling the engine. This sytem has to process events received by the driver and the actual speed measured by the engine. Based on these data, the system computes the cruise speed and determines when activating/deactivating the control loop.
Two environment models can be used for the deployment:
	* SimulatedEnv: An platform independent model that can be used for simulation and verification
	* ConcreteEnv: A model that can be used for deployment on an actual embedded board using sensors (buttons, encoder) and actuators (leds, motor).

## Execution Traces obtained with SimulatedEnv

** Button Led** 
![Execution trace for the "Button Led" model](/ButtonLed/ButtonLedSimulatedEnv.emi/msc.svg)

** Level Crossing **
![Execution trace for the "Level Crossing" model](/LevelCrossing/LevelCrossingSimulatedEnv.emi/msc.svg)

** Cruise Control Interface **
![Execution trace for the "Cruise Control Interface" model](/CruiseControlInterface/CCISimulatedEnv.emi/msc.svg)

