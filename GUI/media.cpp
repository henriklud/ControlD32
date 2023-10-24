it.image(${gfx_renderpos_icon_tl}, id(icon_music));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Media");


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

it.print(${gfx_renderpos_msgbox_center}, id(arial_normal), TextAlign::CENTER, id(mp_title).state.c_str());
it.print(${gfx_renderpos_msgbox_centerb}, id(arial_small), TextAlign::CENTER, id(mp_artist).state.c_str());

it.image(${gfx_renderpos_icon_mainl}, id(img_previous));

if (id(mp_state).state == "playing") {
  it.image(${gfx_renderpos_icon_mainc}, id(img_pause));
} else {
  it.image(${gfx_renderpos_icon_mainc}, id(img_play));
}
it.image(${gfx_renderpos_icon_mainr}, id(img_next));