# IR and Temperature Sensor with Buzzer Alert System

This project demonstrates how to integrate an IR sensor, a temperature sensor, and a buzzer to create an alert system. The system reads values from the sensors and triggers a buzzer when both IR and temperature conditions exceed predefined thresholds. The project is implemented using an Arduino.

## Components Required
- **Arduino Board**: Any Arduino-compatible board (e.g., Uno, Mega, Nano).
- **IR Sensor**: Detects proximity or objects based on infrared light.
- **Temperature Sensor**: Measures temperature values (e.g., LM35 or similar).
- **Buzzer**: Produces an audible alert.
- **Resistors and Wires**: For proper connections.
- **Breadboard**: To assemble the circuit.

## Circuit Diagram

### Connections
1. **Buzzer**
   - Positive terminal to Arduino pin `3`.
   - Negative terminal to GND.

2. **IR Sensor**
   - Signal pin to Arduino pin `A0`.
   - VCC pin to `5V`.
   - GND pin to GND.

3. **Temperature Sensor**
   - Signal pin to Arduino pin `A1`.
   - VCC pin to `5V`.
   - GND pin to GND.

## Working Principle
1. **IR Sensor**:
   - Measures the intensity of infrared light reflected by nearby objects.
   - Produces an analog value that is read by Arduino on pin `A0`.

2. **Temperature Sensor**:
   - Converts temperature into an analog signal.
   - Arduino reads this signal on pin `A1`.

3. **Threshold Conditions**:
   - The program checks if the IR value exceeds a specific threshold (e.g., 200) and the temperature value exceeds another threshold (e.g., 200).
   - If both conditions are true, the buzzer is activated.

4. **Buzzer**:
   - Emits a tone when powered by the Arduino through pin `3`.

## Customization
- **Adjust Thresholds**:
  Modify the IR and temperature thresholds to suit the specific sensors and environment.

- **Sensor Types**:
  Ensure the analog sensors used are compatible with the Arduino.

- **Buzzer Output**:
  The intensity or tone of the buzzer can be adjusted by changing its input signal value.

## Debugging
- Use the Serial Monitor at `9600` baud to view real-time sensor readings and validate system performance.
- Adjust thresholds based on the observed sensor output.

## Applications
- Object and temperature detection systems.
- Security and safety alarms.
- Automation projects.

## Future Enhancements
- Add an LCD to display sensor readings.
- Include a real-time clock (RTC) for time-based alerts.
- Integrate wireless modules for remote monitoring.
