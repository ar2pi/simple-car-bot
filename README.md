# SIMPLE CAR BOT #

A simple project for a 2WD bot that can detect and avoid obstacles.

![](https://lh3.googleusercontent.com/gbE-lHn8r0SIvJHY0wHm23ro3S7YqSJrp3SiBkOVFy-TcHpheo5qe0c2oY4UJkuh7EYUVGEYqgiHisNdGp209uwndU3tsf7VePntyqo37DVz2vnYIk7AZamRMpFOXS1Vr1oVjbJNYMeOGb5_QD4PayxurSojRR1qKe3XayBRhQK-Xh16MXvUhc_ZEIpIGKdbmSWTcnD-rRVWQK0CwgA6ofmjzWwEmj9KZtN5JsYuec6B3wKVM8BnQWzQDupA9_lmuUQk1i9DYPq5KV4R7Mxf9GRYWyTYP51yrxcJPuW_XvVUfbczHXpG-L7me8cctyXxf0jzvU55UnBd2WL1OAGMXUuiNsHakVxDvDnUI_caeZeqvLVJBg3wQ0FlaWym7BCDpf2n0LO9u5PH5udfgxyIn5Yk-78t9EsqpwQBWIxLw-NbbPQWViAbFhqejvJlEJhb93dIjj3rlrmuY6-c6Y_beRtfK02He3MjFzAMM1zrxsQt5Z2csowZ0IZIIJBNBLCbqHKw0zv-UbjF4Axn1gZmK6K4T6QUTIpwly5atY0eT8YEHjXQYI9PO6DpCGlCyVqLNeqxK6gEnlyqbfS5dAP0UblyqI3TaeUCZnWPNkzBwTIcRlyAiMa357Q2AiBmLRmSshB8Ny8WjYODkAKgiYUKYduFL9nqseKUzt_pQjXgW8FOZxB8qZMOQHtsg-f-nKlhYBnwa3iBQl30xHFenkMwyn_9=w830-h622-no)
![](https://lh3.googleusercontent.com/PDOCFP2xviQD4XQEHoH9cTmY6BkH8UL2MF7Dcvl9G-mJ24a2pRZvFbSs5kvNQKgohw34gfcOy_qT2ACh1uONh2H4ai_tIJ7IePpzgvzpnwdVUKZuxuVodUSWBD7LFL-1JerpQG5CHtkP6a8K4sY7pPscdUkzvNHRgJm8qpqwL2oISal6pdKx_xMBMvxMFiC-1e88QPrYfi2hEhrYSbbZiKz_v0BjXC3fRPxgTsF1vu8GezytoO5tw-EfDT2R_OFLpAhcDWaGUbpSSDN1efEJXYQJVei2_bDRoyTyVPG6ht-E7aAmIvU55QJlBIiMiZRgF-PWuLg7q3ThcKdiHT0i-wwZOPw6tF12OcQeMWxa-G3-w_YK3S4_9zU4InwEWcQl25icllgJlU3z-QebMojKt23og2pN8NWMIklHVwRAS0faBUyF9lxS1O0VK-qf2ALt8kbhNQ3TSXCd3Sug8H--67T7PdC-Vz1DV5ZBNmBDqYdlK-myvk9vJlwDdrDSvLVjkAS6kVsQqL_6pRw5thOGDSgvNTkHiRpBWtd86cUBbs88n3TUmTj7arlHCFioqlAUtd_ZIrp-mE_-jOYIpl0IYcFZhk3pZCJ7SM8t8wKsBzTlxMrCuZciwV4M3PNdJzBPUuWVQXyTUSKgyw2pnLK7nKk7E66AxDgLkrOF2x4dh1W6JgRymjZY1SBY9MuesFHnqYtDHUCGDSC_pEKqMZc6V0oj=w931-h622-no)

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