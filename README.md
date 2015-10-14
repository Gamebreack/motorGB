# motorGB
step motor control lib
--------------------------------------------------------------------------------------------------------------------------------------------------------------------

motorGB(mp1, mp2, mp3, mp4);

mp1 = first motor terminal
mp2 = second motor terminal
mp3 = third motor terminal
mp4 = fourth motor terminal

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

run_full1(turns, direction)

turns = number of steps to walk
direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

index|1a|1b|2a|2b
  1  |1 |0 |0 |0 
  2  |0 |1 |0 |0 
  3  |0 |0 |1 |0 
  4  |0 |0 |0 |1 

lower torque, but increased speed

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

run_full2(turns, direction)

turns = number of steps to walk
direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

index|1a|1b|2a|2b
  1  |1 |0 |0 |1 
  2  |1 |1 |0 |0 
  3  |0 |1 |1 |0 
  4  |0 |0 |1 |1 

torque better than run_full1, but lower speed

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

run_half(turns, direction)

turns = number of steps to walk
direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

index|1a|1b|2a|2b
  1  |1 |0 |0 |0 
  2  |1 |1 |0 |0 
  3  |0 |1 |0 |0 
  4  |0 |1 |1 |0 
  1  |0 |0 |1 |0 
  2  |0 |0 |1 |1 
  3  |0 |0 |0 |1 
  4  |1 |0 |0 |1 

high torque, but low speed

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

doRevolution_full1(direction)

direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

It makes the shaft do a complete revolution with high speed but low torque

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

doRevolution_full2(direction)

direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

It makes the shaft do a complete revolution with lower speed than doRevolution_full1 but higher torque

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

doRevolution_half(direction)

direction = direction of rotation(1 or 0)(the direction depends on how you connected the motor terminals)

It makes the shaft do a complete revolution with high torque but low speed

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

setspeed(veloc)

veloc = delay between the steps(in ms)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

setRevolution(stepsRev)e

stepsRev = number of steps per revolution

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
