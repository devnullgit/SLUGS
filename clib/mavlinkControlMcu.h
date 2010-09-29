#ifndef _MAVLINKCONTROLMCU_H_
#define _MAVLINKCONTROLMCU_H_

#ifdef __cplusplus
       extern "C"{
#endif
       	
  #include "mavlink.h"
  #include "apDefinitions.h"
  
       	
extern mavlink_raw_imu_t 					mlRawImuData;
extern mavlink_gps_raw_t					mlGpsData;
extern mavlink_cpu_load_t 				mlCpuLoadData;
extern mavlink_air_data_t 				mlAirData;
extern mavlink_sensor_bias_t 			mlSensorBiasData;
extern mavlink_diagnostic_t 			mlDiagnosticData;
extern mavlink_raw_pressure_t 		mlRawPressureData;
extern mavlink_attitude_t 				mlAttitudeData;
extern mavlink_local_position_t 	mlLocalPositionData;
extern mavlink_pilot_console_t 		mlPilotConsoleData;
extern mavlink_filtered_data_t 		mlFilteredData;
extern mavlink_boot_t 						mlBoot;
extern mavlink_system_time_t 			mlSystemTime;
extern mavlink_gps_date_time_t 		mlGpsDateTime;
extern mavlink_heartbeat_t 				mlHeartbeat;
extern mavlink_mid_lvl_cmds_t			mlMidLevelCommands; 

	void mavlinkInit (void);
  	
       	
#ifdef __cplusplus
       }
#endif

#endif /* _MAVLINKCONTROLMCU_H_ */
