
it.print(64, 0 , id(arial_normal), TextAlign::TOP_CENTER, "Starter opp...");
  
it.image(114, 0, id(icon_battery_alert));     
if (id(api_state).state == 0) {
  it.image(97, 0, id(icon_wifi_off));
} 

it.image(39, 13, id(gif_loading), COLOR_ON, COLOR_OFF);

it.print(${gfx_renderpos_icon_bcenter}, id(arial_small), TextAlign::BOTTOM_CENTER, "${fw_version}");