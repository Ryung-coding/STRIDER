# JFISH: ROS 2 Motion Capture and Sensor Integration

This project is based on ROS 2 and includes motion capture, sensor data handling, and control modules.

Due to submodule issues, you must manually add some external packages. Follow the instructions below carefully.

## Required External Packages

### 1. motion_capture_tracking

Clone this repository using the following command (make sure to include submodules):

```
git clone --recurse-submodules https://github.com/IMRCLab/motion_capture_tracking
```

After cloning, go into the downloaded folder and find this path:

```
motion_capture_tracking/src/deps
```

Now copy the entire `deps` folder and paste it into this location in your current workspace:

```
Optitrack/mocap/
```

Final directory structure should look like this:

```
your_workspace/src/Optitrack/mocap/deps/
```

### 2. microstrain_inertial

Clone this repository with the correct branch and submodules:

```
git clone --recursive --branch ros2 https://github.com/LORD-MicroStrain/microstrain_inertial.git
```

Place the cloned folder directly into the `src` folder of your current workspace:

```
your_workspace/src/microstrain_inertial/
```

You can find more details about IMU testing here:  
<https://www.notion.so/ryung-lab/IMU-168c866a6afd80c2905bec42fcb5542e>

This setup allows you to test the IMU independently if needed.

## How to Run

### Run in Simulation Mode (with MuJoCo)

Use the following command to launch the system in simulation mode:

```
ros2 launch jfish launch.py mode:=sim
```

### Run OptiTrack Only (in Real Mode)

If you only want to test the OptiTrack system in real hardware mode, use:

```
ros2 launch jfish opti_launch.py
```

## Launch File Descriptions

- `launch.py`: Main launch file. It accepts the argument `mode` to choose between `sim` and `real`.
- `opti_launch.py`: A simplified launch file to only run the OptiTrack node in real mode.

## Notes

- After adding the external packages, don't forget to rebuild the workspace:

```
colcon build
```

- Always include the `mode` argument when launching. If you omit it, the launch file may fail.
