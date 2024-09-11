## What is I2C?
I2C (Inter-Integrated Circuit) is a serial communication protocol developed by Phillips Semiconductors back in the 1980s.

I2C is also referred to as TWI (Two Wired Interface). This alternative name came about for licensing reasons that prevented the use of the original term.

### Operation

The I2C protocol works with a master-slave architecture. In this architecture there are two types of devices:

#### Master or Controller
They are the ones that initiate and coordinate the communication. Usually, when you use an Arduino on an I2C bus, this is the role it plays.

#### Slaves or Peripherals
These are devices that are waiting for a master to communicate with them. Common cases are sensors and actuators that support this protocol, although it is also possible, and sometimes necessary, for a microcontroller to behave as a slave.

text extracted from: https://programarfacil.com/blog/arduino-blog/comunicacion-i2c-con-arduino/
