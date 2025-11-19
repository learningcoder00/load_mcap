std_msgs/Header header
uint8 index
E2eFailsafe[] e2e_failsafe_array
uint8 sum_result
bool lit_area
uint8 scenes_driving_type   #      NotParking = 0,  Parking = 1,
uint8 scenes_time_type      #        DayTime = 0, Night = 1, Dusk = 2,
uint8 scenes_is_occlusion_type  #             False = 0,    True = 1,
uint8 scenes_is_glare_occlusion_type  #       False = 0,  True = 1,
uint8 scenes_is_tunnel_type        #          False = 0,   True = 1,
uint8 scenes_weather_type        #      Sunny = 0, Rainy = 1, Foggy = 2, Snowy = 3, Cloudy = 4,
uint8 scenes_road_state_type   #      Dry = 0,  Wet = 1,  SnowyIcy = 2,
uint8 scenes_wind_shield_occlusion_type  #  False = 0, Mist = 1, Icy = 2