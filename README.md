# WEEK 1
--------
## Index
 * ### Microcontrollers And Microprocessors
 * ### Pull up/Pull down Resistors
 * ### communications protocols
  * #### UART
  * #### SPI
  * #### I2C
 ### Arduino
  #### fade
  #### ultrasonic
  #### IR-object detection
  #### 8IR-line detection
 ### 3D stuff
  ## world to local
  ## local to world
  ## angular velocity
 ### C++ programs(5)
  --------
### Microcontrollers And Microprocessors
A Microprocessor is an IC which has only the CPU inside it. These microprocessors don’t have a RAM, ROM or other peripheral on the chip. A system designer has to add them externally to make them functional. Application of microprocessor includes Desktop PC’s, Laptops, notepads etc.
But this is not the case with Microcontrollers. A  Microcontroller has a CPU, in addition with a fixed amount of RAM, ROM and other peripherals all embedded on a single chip. At times it is also termed as a mini computer or a computer on a single chip. Today different manufacturers produce microcontrollers with a wide range of features available in different versions. 
Microcontrollers are designed to perform specific tasks. Specific means applications where the relationship of input and output is defined. Depending on the input, some processing needs to be done and output is delivered. For example, keyboards, mouse, washing machine, digicam, pen drive, remote, microwave, cars, bikes, telephone, mobiles, watches, etc. Since the applications are very specific, they need small resources like RAM, ROM, I/O ports etc and hence can be embedded on a single chip. This in turn reduces the size and the cost.
Microprocessors find application where tasks are unspecific like developing software, games, websites, photo editing, creating documents etc. In such cases the relationship between input and output is not defined. They need high amount of resources like RAM, ROM, I/O ports etc. 
The clock speed of the Microprocessor is quite high as compared to the microcontroller. Whereas the microcontrollers operate from a few MHz to 30 to 50 MHz, today’s microprocessors operate above 1GHz as they perform complex tasks.
 
Undoubtedly a microcontroller is far cheaper than a microprocessor. However microcontroller cannot be used in place of microprocessor and using a microprocessor in place of a microcontroller is not advisable as it makes the application quite costly. Microprocessors cannot be used alone. They need other peripherals like RAM, ROM, buffer, I/O ports etc and hence a system designed around a microprocessor is quite costly.

### Pull up/Pull down Resistors
If the inputs to a digital logic gate or circuit are not within the range by which it can be sensed as either a logic “0” or a logic “1” input, then the digital circuit may false trigger as the gate or circuit does not recognise the correct input value, as the HIGH may not be high enough or the LOW may not be low enough.
Pull-up Resistors and Pull-down Resistors  give the input pin a defined default state, even if the switch is open, closed or there is nothing is connected to it.
Pull-up Resistors
The most common method of ensuring that the inputs of digital logic gates and circuits cannot self-bias and float about is to either connect the unused pins directly to ground (0V) for a constant low “0” input, (OR and NOR gates) or directly to Vcc (+5V) for a constant high “1” input (AND and NAND gates).
This time, to stop the two inputs, A and B, from “floating” about when the corresponding switches, “a” and “b” are open (OFF), the two inputs are connected to +5V supply.
You may think that this would work fine as when switch “a” is open (OFF), the input is connected to Vcc (+5V) and when the switch is closed (ON), the input is connected to ground as before, then inputs “A” or “B” always have a default state regardless of the position of the switch.
However, this is a bad condition because when either of the switches are closed (ON), there will be a direct short circuit between the +5V supply and ground, resulting in excessive current flow either blowing a fuse or damaging the circuit which is not good news. One way to overcome this issue is to use a pull-up resistor connected between the input pin and the +5V supply rail as shown.
Pull-up Resistor Application
By using these two pull-up resistors, one for each input, when switch “A” or “B” is open (OFF), the input is effectively connected to the +5V supply rail via the pull-up resistor. The result is that as there is very little input current into the input of the logic gate, very little voltage is dropped across the pull-up resistor so nearly all the +5V supply voltage is applied to the input pin creating a HIGH, logic “1” condition.
When switches “A”, or “B” are closed, (OFF) the input is shorted to ground (LOW) creating a logic “0” condition as before at the input. However, this time we are not shorting out the supply rail as the pull-up resistor only passes a small current (as determined by Ohms law) through the closed switch to ground.
By using a pull-up resistor in this way, the input always has a default logic state, either “1” or “0”, high or low, depending on the position of the switch, thus achieving the proper output function of the gate at “Q” and therefore preventing the input from floating about or self-biasing giving us exactly the switching condition we require.
While the connection between Vcc and an input (or output) is the preferred method for using a pull-up resistor, the question arises as how do we calculate the value of the resistance require to ensure the correct operation of the input.
Pull-down Resistors
A Pull-down resistor works in the same way as the previous pull-up resistor, except this time the logic gates input is tied to ground, logic level “0” (LOW) or it may go HIGH by the operation of a mechanical switch. This pull-down resistor configuration is particularly useful for digital circuits like latches, counters and flip-flops that require a positive one-shot trigger when a switch is momentarily closed to cause a state change.
While they may seem to operate in the same way as the pull-up resistor, the resistive value of a passive pull-down resistor is more critical with TTL logic gates than with similar CMOS gates. This is because a TTL input sources much more current out of its input in its LOW state.
Pull-up Resistor Summary
We have seen here in this tutorial about passive pull-up and pull-down resistors that when left open–circuited, the inputs of digital logic gates may self–bias or float about to whatever logic level they choose and many switching errors can be traced back to unconnected and floating input pins.
A pull-up resistor connects unused input pins (AND and NAND gates) to the dc supply voltage, (Vcc) to keep the given input HIGH. A pull-down resistor connects unused input pins (OR and NOR gates) to ground, (0V) to keep the given input LOW. The resistance value for a pull-up resistor is not usually that critical but must maintain the input pin voltage above VIH. The use of 10kΩ pull-up resistors are common but values can range from 1k to 100k ohms.
Pull-down resistors are a little more critical because of the low input voltage level, VIL(max) and the higher IIL current. The use of 100Ω pull-down resistors are the most common but they can range in resistive value from 50 up to 1k ohms.
Digital logic gates with open-collector (in the case of the TTL logic) outputs or open-drain (in the case of the CMOS logic) outputs need to connect to an external pull-up resistor between their output pin and the dc power supply to make the logic gate perform the intended logic function.
The advantage of using open collector/open drain gates is in their capability to switch higher voltages and currents or their ability of provide wired ANDing operation. Some open-collector gates, such as the 74LS06 are capable of driving larger loads because their outputs can be connected to supplies of up to 30 volts via an external pull-up resistor.

### communications protocols
#### UART
UART stands for universal asynchronous transmitter and receiver .UART Protocols is a serial communication with two wired protocol .The data cable signal lines are labelled as Rx and Tx. Serial communication is commonly used for transmitting and receiving the signal. It is transfer and receives the data serially bit by bit without class pulses. The UART take bytes of data and send the individual bits in sequential manner. UART is a half duplex protocol. Half duplex means transferring and receiving the data but not at a same time. Most of the controllers have hardware UART on board. It uses a single data line for transmitting and receiving the data. It has one start bit, 8-bit data and one stop bit mean the 8-bit data transfer ones signal is high to low.
Ex: Emails, SMS, Walkie-talkie.

#### I2C
I2C stands for inter integrated circuit. I2C requires only two wires connecting all peripherals to microcontroller.I2C requires two wires SDA (serial data line) and SCL (serial clock line) to carry information between devices. It is a master to slave communication protocol. Each slave has a unique address. Master device sends the address of the target slave device and read/write flag. The address is match any slave device that device is ON, remaining slave devices are disable mode. Once the address is match communication proceed between master and that slave device and transmitting and receiving the data. The transmitter send 8-bit data, the receiver replies 1-bit of acknowledgement. When the communication is completed master issues the stop condition. The I2C bus was developed by Philips Semiconductors. Its original purpose is providing an easy way to connect CPU to peripherals chips. Peripheral devices in embedded systems are often connected to the microcontroller as memory mapped devices. I2C requires only two wires for connecting all the peripherals to the microcontroller. These active wires, called SDA and SCL, are both bidirectional. SDA line is a serial data line and SCA line is a serial clock line.

#### SPI
SPI stands for serial peripheral interface. It is one of the serial communication protocol developed by Motorola. Sometime SPI protocol is also called a 4-wire protocol. It requires four wires MOSI, MISO, SS, and SCLK.SPI protocol used to communicate the master and slave devices. The master first configures the clock using a frequency. The master then selects the particular slave device for communication by pulling the chip select button. That particular device is selected and starts the communication between master and that particular slave. The master select only one slave at a time. It is full duplex communication protocol. Not limited to 8 bit words in the case of bit transferring.

 ### Arduino
  #### fade
  
  #### ultrasonic
  
  #### IR-object detection
  [here](IR/IR.ino)
  #### 8IR-line detection












