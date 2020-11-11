// Simple ROS2 node for testing out ROS2 github actions
#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv); 
    rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("my_node");
    RCLCPP_INFO(node->get_logger(),"Litmus test for ROS2 GitHub Action");
    rclcpp::shutdown();
    return 0;
}