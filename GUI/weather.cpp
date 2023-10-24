it.image(${gfx_renderpos_icon_tl}, id(icon_launcher_weather));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Weather");

it.image(${gfx_renderpos_icon_bar1}, id(icon_battery_alert));     
if (id(mp_state).state == "playing") {
  it.image(${gfx_renderpos_icon_bar3}, id(icon_play));
}
if (id(mp_state).state == "paused") {
  it.image(${gfx_renderpos_icon_bar3}, id(icon_pause));
}
if (id(api_state).state == 0) {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_wifi_off));
}             

if (id(climate_heater_state).state == 1) {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_flame));
} 

it.strftime(${gfx_renderpos_info_tr}, id(arial_normal), TextAlign::TOP_RIGHT, "%H:%M", id(sntp_time).now());
it.line(0, 15, 128, 15);

//TEMP
it.printf(${gfx_renderpos_home_weathertemp}, id(roboto_normal), TextAlign::TOP_LEFT, "%.1f°C", id(weather_temp).state);
it.image(${gfx_rendersize_home_weathertempimg}, id(img_weather_temp));

//VIND
it.printf(${gfx_renderpos_home_weatherwind}, id(roboto_normal), TextAlign::TOP_LEFT, "%.1fm/s", id(weather_wind).state);
it.image(${gfx_rendersize_home_weatherwindimg}, id(img_weather_wind));

if (id(weather_entity).state == "rainy") {
  it.image(2, 26, id(img_weather_rainy));
} else {
  if (id(weather_entity).state == "snowy-rainy") {
    it.image(2, 26, id(img_weather_snowy_rainy));
  } else {
    if (id(weather_entity).state == "snowy") {
      it.image(2, 26, id(img_weather_snowy));
  } else {
    if (id(weather_entity).state == "cloudy") {
      it.image(2, 26, id(img_weather_cloudy));
  } else {
    if (id(weather_entity).state == "sunny") {
      it.image(2, 26, id(img_weather_sunny));
  } else {
    if (id(weather_entity).state == "cloudy") {
      it.image(2, 26, id(img_weather_cloudy));
  } else {
    if (id(weather_entity).state == "partlycloudy") {
      it.image(2, 26, id(img_weather_partly_cloudy));
  } else {
    if (id(weather_entity).state == "pouring") {
      it.image(2, 26, id(img_weather_pouring));
  } else {
    if (id(weather_entity).state == "hail") {
      it.image(2, 26, id(img_weather_hail));
  } else {
    if (id(weather_entity).state == "lightning-rainy") {
      it.image(2, 26, id(img_weather_lightning_rainy));
  } else {
    if (id(weather_entity).state == "fog") {
      it.image(2, 26, id(img_weather_fog));
  } else {
    if (id(weather_entity).state == "clear-night") {
      it.image(2, 26, id(img_weather_night));
  } else {
  }
}}}}}}}}}}}
