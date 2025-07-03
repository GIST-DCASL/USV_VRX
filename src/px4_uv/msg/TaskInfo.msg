uint8 VEHICLE_TYPE_NONE = 0
uint8 VEHICLE_TYPE_UAV = 1
uint8 VEHICLE_TYPE_UGV = 2
uint8 VEHICLE_TYPE_USV = 3

uint8 TASK_STATUS_REQUESTED = 0
uint8 TASK_STATUS_INPROCESS = 1
uint8 TASK_STATUS_COMPLETED = 2

uint8 PAYLOAD_TYPE_NULL = 0
uint8 PAYLOAD_TYPE_CAM = 1

uint8 TASK_TYPE_WAYPOINT = 0
uint8 TASK_TYPE_CHARGING = 1

string task_id
string task_description
uint8 target_type
string mission_id
uint8 required_payload_type
uint8 task_status
uint8 task_type
px4_uv/Action[] actions
float32 reward