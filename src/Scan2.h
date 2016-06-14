#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

using namespace std;

class Scan2{
	public:
		Scan2();
	private:
		ros::NodeHandle n;
		ros::Publisher scan_pub;
		ros::Subscriber scan_sub;
		void scanCallBack(const sensor_msgs::LaserScan::ConstPtr& scan2);

};
