#ifndef CONTROLLER_PARAM_H
#define CONTROLLER_PARAM_H

#include <Eigen/Dense>

namespace controller_param {
  
struct ControlParameters {
  bool use_decoupled_yaw;
  Eigen::Vector3d kX;  // Position gain [x, y, z]
  Eigen::Vector3d kV;  // Velocity gain [x, y, z]
  Eigen::Vector3d kR;  // Rotational gain [roll, pitch, yaw]
  Eigen::Vector3d kW;  // angular Velocity gain [roll, pitch, yaw]
};

struct IntegralParameters {
  bool use_integral;
  double kIX;
  double ki;
  double kIR;
  double kI;
  double kyI;
  double c1;
  double c2;
  double c3;
};

struct UAVParameters {
  Eigen::Matrix3d J;  // inertia
  double m;           // [kg]
  double g;           // [m/s^2]
};

inline ControlParameters getControlParameters() {
  ControlParameters param;
  param.use_decoupled_yaw = true;
  param.kX << 20.0, 20.0, 20.0;
  param.kV << 9.0, 9.0, 10.0;
  param.kR << 5.0, 5.0, 2.0;
  param.kW << 4, 4, 4;
  return param;
}

inline IntegralParameters getIntegralParameters() {
  IntegralParameters param;
  param.kIX = 0.1;
  param.ki = 0.01;
  param.kIR = 0.15;
  param.kI = 0.01;
  param.kyI = 0.05;
  param.c1 = 1.0;
  param.c2 = 1.0;
  param.c3 = 1.0;
  return param;
}

inline UAVParameters getUAVParameters() {
  UAVParameters param;
  param.J << 0.058065042,  0.000104275,  -0.006291258,
             0.000104275,  0.069250561,  -0.000083225,
             -0.006291258, -0.000083225, 0.038730723;
  param.m = 4.751729;
  param.g = 9.80665;
  return param;
}

}

#endif // CONTROLLER_PARAM_H