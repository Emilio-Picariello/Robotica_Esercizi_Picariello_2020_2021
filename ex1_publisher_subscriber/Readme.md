# sensors_simulator
sensors_simulator simulates a publisher subscriber communication with random values for three coordinates for each of 6 fake joints. Topic uses string type.

## How to run
To run it is needed to run publisher node 
```bash
rosrun sensors_simulator publisher_sim
```
and the subscriber node
```bash
rosrun sensors_simulator subscriber_sim
```