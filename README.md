# SIMPLE CAR BOT #

A simple project for a 2WD bot that can detect and avoid obstacles.

![](https://photos.app.goo.gl/VdQ92rBn4cXNVnuU6)
![](https://photos.app.goo.gl/rkZCnF8jGnBF7LkeA)

### Components ###

- 1x Arduino Pro Mini 328P (5V/16MHz)
- 1x L298N Mini driver
- 1x HC-SR04 Ultrasonic sensor
- 2x DC Motor 6-12V
- 1x 4 AA Battery holder
- 4x AA Battery
- 2x rear wheel (>4cm diameter)
- 1x swivel caster wheel or ball caster
- 1x rigid 14x10cm base or case of your liking
- wires and stuff

Note: You will need a secondary Uno board or Serial TTL adapter (FT232RL) for example in order to load your sketch on the Pro Mini. Or eventually replace the Mini with a Nano.

### Code ###

1. Include HCSR04 and L298NMini libraries into your project's environment (you can add them as .zip in Arduino IDE "Sketch" > "Include Library").

2. Load `car-bot` onto the board

3. Done

Note: `detect-obstacle` and `motors-forward` are simple examples provided to let you safely test out your components prior to assembling the whole project