/*!=============================================================================
  ==============================================================================

  \file    SL_user.h

  \author  Stefan Schaal
  \date    May 2010

  ==============================================================================
  \remarks
  
  robot specific definitions for KUKA lbr4 plus
  
  ============================================================================*/
  
#ifndef _SL_user_
#define _SL_user_

//! the robot name
#define ROBOT_NAME "lbr4"
// dimensions of the robot
#define BA1  0.1105
#define A1A2 0.20
#define A2E1 0.20
#define E1A3 0.20
#define A3A4 0.20
#define A4A5 0.19
#define A5A6 0.048
#define A6E  0.03
#define L1 BODYLINK1
#define L2 R_SH
#define L3 R_UA
#define L4 R_LA

// links of the robot
enum RobotLinks {
  R_A1_LINK = 1,
  R_A2_LINK,
  R_E1_LINK,
  R_A3_LINK,
  R_A4_LINK,
  R_A5_LINK,
  R_A6_LINK,
  R_FLANGE,
  
  N_ROBOT_LINKS
};

// endeffector information
enum RobotEndeffectors {
  RIGHT_HAND=1,

  N_ROBOT_ENDEFFECTORS
};

// vision variables
enum VisionCameras {
  CAMERA_1=1,
  CAMERA_2,

  N_VISION_CAMERAS
};

enum ColorBlobs {
  BLOB1=1,
  BLOB2,
  BLOB3,
  BLOB4,
  BLOB5,
  BLOB6,

  N_COLOR_BLOBS
};

// define the DOFs of this robot
enum RobotDOFs {
  R_A1 = 1,
  R_A2,
  R_E1,
  R_A3,
  R_A4,
  R_A5,
  R_A6,

  N_ROBOT_DOFS
};

//! define miscellenous sensors of this robot
enum RobotMiscSensors {
 N_ROBOT_MISC_SENSORS
};

//! number of degrees-of-freedom of robot
#define N_DOFS (N_ROBOT_DOFS-1)

//! N_DOFS + fake DOFS, needed for parameter estimation; 
//   fake DOFS come from creating endeffector information
#define N_DOFS_EST (N_DOFS+1)

//! N_DOFS to be excluded from parameter estimation (e.g., eye joints);
//  these DOFS must be the last DOFS in the arrays
#define N_DOFS_EST_SKIP 0

//! number of links of the robot
#define N_LINKS    (N_ROBOT_LINKS-1)

//! number of miscellaneous sensors
#define N_MISC_SENSORS   (N_ROBOT_MISC_SENSORS-1)

//! number of endeffectors
#define N_ENDEFFS  (N_ROBOT_ENDEFFECTORS-1)

//! number of cameras used
#define N_CAMERAS (N_VISION_CAMERAS-1)

//! number of blobs that can be tracked by vision system
#define MAX_BLOBS (N_COLOR_BLOBS-1)

//! vision default post processing
#define VISION_DEFAULT_PP "vision_default.pp"

//! the servo rate used by the I/O with robot: this limits the
//  servo rates of all other servos 
#define  SERVO_BASE_RATE 1000

//! divisor to obtain task servo rate (task servo can run slower than
//  base rate, but only in integer fractions */
#define  TASK_SERVO_RATIO   R1TO2

// settings for D/A debugging information -- see SL_oscilloscope.c 
#define   D2A_CM      1
#define   D2A_CT      2
#define   D2A_CV      3
#define   D2A_CR      4


#ifdef __cplusplus
extern "C" {
#endif

  // function prototype

  // external variables

#ifdef __cplusplus
}
#endif


#endif  /* _SL_user_ */
