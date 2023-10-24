it.image(${gfx_renderpos_icon_bar1}, id(icon_battery_alert));     

if (id(api_state).state == 0) {
  it.image(${gfx_renderpos_icon_bar2}, id(icon_wifi_off));
}             


it.strftime(${gfx_renderpos_info_tr}, id(arial_normal), TextAlign::TOP_RIGHT, "%H:%M", id(sntp_time).now());

it.print(${gfx_renderpos_home_weatherstate}, id(roboto_normal), TextAlign::TOP_LEFT, id(weather_state).state.c_str());

it.image(${gfx_renderpos_home_weathertempimg}, id(img_weather_temp));
it.printf(${gfx_renderpos_home_weathertemp}, id(roboto_small), TextAlign::TOP_LEFT, "%.1f°C", id(weather_temp).state);


it.image(${gfx_renderpos_home_weatherwindimg}, id(img_weather_wind));
it.printf(${gfx_renderpos_home_weatherwind}, id(roboto_small), TextAlign::TOP_LEFT, "%.1fm/s", id(weather_wind).state);


if (id(weather_entity).state == "rainy") {
  it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_rainy));
} else {
  if (id(weather_entity).state == "snowy-rainy") {
    it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_snowy_rainy));
  } else {
    if (id(weather_entity).state == "snowy") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_snowy));
  } else {
    if (id(weather_entity).state == "sunny") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_sunny));
  } else {
    if (id(weather_entity).state == "cloudy") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_cloudy));
  } else {
    if (id(weather_entity).state == "partlycloudy") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_partly_cloudy));
  } else {
    if (id(weather_entity).state == "pouring") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_pouring));
  } else {
    if (id(weather_entity).state == "hail") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_hail));
  } else {
    if (id(weather_entity).state == "lightning-rainy") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_lightning_rainy));
  } else {
    if (id(weather_entity).state == "fog") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_fog));
  } else {
    if (id(weather_entity).state == "clear-night") {
      it.image(${gfx_renderpos_home_weatherimg}, id(img_weather_night));
  }
}}}}}}}}}}



it.image(${gfx_renderpos_home_icon_mainl}, id(img_home_shortcuts));

if (id(light_state).state == 1) {
  it.image(${gfx_renderpos_home_icon_mainc}, id(img_home_light_on));
} else {
  it.image(${gfx_renderpos_home_icon_mainc}, id(img_home_light_off));
}

if (id(climate_heater_state).state == 1) {
  it.image(${gfx_renderpos_home_icon_mainr}, id(img_home_radiator_on));
} else {
  it.image(${gfx_renderpos_home_icon_mainr}, id(img_home_radiator));
}