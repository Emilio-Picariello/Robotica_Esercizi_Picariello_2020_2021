# trajectory_planner
except for fanuc_description and fanuc_moveit_config those packages have been adapted from another robot

This package provides a planning node loading a path from file and generating a joint-space trajectory. It also allows the user to verify that joint limits are respected by publishing trajectories to `rqt_multiplot`.

Trajectory files should be in `.traj` format and be placed in the data folder of this package. One way to generate `.traj` files is through the MATLAB function `export_ros_workspace_path`. An example trajectory is provided in the `/data` folder of this package.

Trajectory files are loaded by using the `WorkspaceTrajectory` class of the `moveit_dp_redundancy_resolution` package, which is, therefore, a dependency. It is here provided. Also, this package takes a dependency on `fanuc_moveit_config`, defining the planning information for the Comau SmartSix robot, used as an example.

## How to run

to run the planner is needed to launch demo.launch in fanuc_moveit_config to provide `robot_description` parameter to the planner from the parameter server

```bash
roslaunch fanuc_moveit_config demo.launch
```

and then to launch planner.launch trajectory_planner

```bash
roslaunch trajectory_planner planner.launch
```

This will also launch `rqt_multiplot`. The first time `rqt_multiplot` is launched, the configuration file `rqt_multiplot.xml` (find it in the `/config` folder of this package) can be loaded to automatically configure the plots.