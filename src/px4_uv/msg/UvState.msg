uint8 VEHICLE_STATUS_NORMAL=0
uint8 VEHICLE_STATUS_STOP=1
uint8 VEHICLE_STATUS_TAKEOFF=2
uint8 VEHICLE_STATUS_LANDED=3

geometry_msgs/Vector3 pos
geometry_msgs/Vector3 vel
float32 current_yaw
float32 ref_lat
float32 ref_lon
float32 ref_alt
uint16 battery
uint8 status
