#include "ros/ros.h"
#include "std_msgs/String.h"
#include "serialPort/GPS.h"
#include <iomanip>
void chatterCallback(const serialPort::GPSConstPtr& msg)
{
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(7) << "纬度：" << msg->lat << " 经度：" << msg->lon << "\n";
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "show");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("GPS", 1000, chatterCallback);
    ros::spin();
    return 0;
}

