#include <ros/ros.h>
#include <stdlib.h> 
#include <std_msgs/String.h>

int main(int argc, char **argv) {
 
    ros::init(argc, argv, "talker");
    ros::NodeHandle nh;
    ros::Publisher chatterPublisher =
    nh.advertise<std_msgs::String>("sensors", 1);
    ros::Rate loopRate(10);
    unsigned int count = 0;
    srand(23);
    while (ros::ok()) {
    
        
    
        int joint[6][3] ;
        std_msgs::String message;
        message.data = "";
        int i,j;
        for( i= 0; i < 6; i++){
            for(j= 0; j < 6; j++){
                
                joint[i][j] = rand() % 100 + 1;
                message.data += "joint n" + std::to_string(i) + "coord" + std::to_string(j) + ": " + std::to_string(joint[i][j]) + ", ";
            }
        }
    
       
        ROS_INFO_STREAM(message.data);
        chatterPublisher.publish(message);
        ros::spinOnce();
        loopRate.sleep();
        count++;
    }
    return 0;
}
