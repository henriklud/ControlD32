it.image(${gfx_renderpos_icon_tl}, id(icon_launcher_config));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Config");

it.image(${gfx_renderpos_icon_bar1}, id(icon_battery_alert));     
if (id(mp_state).state == "playing") {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_play));
}
if (id(mp_state).state == "paused") {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_pause));
}
if (id(api_state).state == 0) {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_wifi_off));
}             

if (id(climate_heater_state).state == 1) {
  it.image(${gfx_renderpos_icon_bar3}, id(icon_flame));
} 

it.strftime(${gfx_renderpos_info_tr}, id(arial_normal), TextAlign::TOP_RIGHT, "%H:%M", id(sntp_time).now());
it.line(0, 15, 128, 15);

it.printf(0,16, id(arial_small), TextAlign::TOP_LEFT, "Pckg %.1f°C", id(internal_temp).state);
it.printf(0,30, id(arial_small), TextAlign::TOP_LEFT, "WiFi SIG %.1fdB", id(wifi_sig_db).state); 
it.print(0, 64, id(arial_small), TextAlign::BOTTOM_LEFT, "${fw_version}");


it.image(${gfx_renderpos_icon_mainr}, id(img_restart));