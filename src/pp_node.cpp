#include "rclcpp/rclcpp.hpp"
#include "pointpillar_wrapper.h"

int main(int argc, char * argv[])
{
  // Initialize the ROS 2 system
  rclcpp::init(argc, argv);

  // Create a node with the given name
  auto node = rclcpp::Node::make_shared("pp_node");

    PointPillarWrapper wrapper;

    wrapper.run();

  // Shut down the ROS 2 system
  rclcpp::shutdown();

  return 0;
}
