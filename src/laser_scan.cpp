#include "std_msgs/String.h"
#include<stdio.h>
#include "Scan2.h"
int main(int argc, char** argv){
	ros::init(argc, argv, "laser_scan");
	Scan2 scan2;
	ros::spin();
}
