# direct and inverse kinematics
except for fanuc_description and fanuc_moveit_config those packages have been adapted from another robot

kinematics_service implements a forward kinematics elaborator, implemented as a service.

kinematics_action implements an inverse kinematics elaborator, implemented as an action. It prints in console all inverse solutions and plot all of them on rviz.

## How to run
To run forward kinematics service is needed to launch fk_solver.launch

```bash
roslaunch kinematics_service fk_solver.launch
```

and to execute fk_client node

```bash
rosrun kinematics_service fk_client_node
```


To run inverse kinematics action is needed to launch ik_solver.launch

```bash
roslaunch kinematics_action ik_solver.launch
```

and to execute fk_client node
```bash
rosrun kinematics_action client_node
```
