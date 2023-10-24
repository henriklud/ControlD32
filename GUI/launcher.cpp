it.image(${gfx_renderpos_icon_tl}, id(icon_launcher_icon));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Apps");

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


if (id(launcher_selected_item) <=4) {
  if (id(launcher_selected_item) == 1) {
    it.rectangle(5, 24, 26, 26);
    it.image(9, 27, id(icon_launcher_music));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Media");
  } else {
    it.image(9, 27, id(icon_launcher_music));        
  }   
} else {
  if (id(launcher_selected_item) == 5) {
    it.rectangle(5, 24, 26, 26);
    it.image(9, 27, id(icon_launcher_vacuum));
      it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Rosita");
  } else {
    it.image(9, 27, id(icon_launcher_vacuum));        
  }  
} 

if (id(launcher_selected_item) <=4) {
  if (id(launcher_selected_item) == 2) {
    it.rectangle(36, 24, 26, 26);
    it.image(40, 27, id(icon_launcher_remote));  
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Fjernsynet");            
  } else {
    it.image(40, 27, id(icon_launcher_remote)); 
  }
} else {
  if (id(launcher_selected_item) == 6) {
    it.rectangle(36, 24, 26, 26);
    it.image(40, 27, id(icon_launcher_weather));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Været");              
  } else {
    it.image(40, 27, id(icon_launcher_weather)); 
  }
} 

if (id(launcher_selected_item) <=4) {          
  if (id(launcher_selected_item) == 3) {
    it.rectangle(67, 24, 26, 26);
    it.image(71, 27, id(icon_launcher_light));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Lys");    
  } else {
    it.image(71, 27, id(icon_launcher_light));
  }
} else {
  if (id(launcher_selected_item) == 7) {
    it.rectangle(67, 24, 26, 26);
    it.image(71, 27, id(icon_launcher_config));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Debug");    
  } else {
    it.image(71, 27, id(icon_launcher_config));
  }            
} 

if (id(launcher_selected_item) <=4) {
  if (id(launcher_selected_item) == 4) {
    it.rectangle(98, 24, 26, 26);     
    it.image(102, 27, id(icon_launcher_thermostat));   
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Klima");           
  } else {
    it.image(102, 27, id(icon_launcher_thermostat));  
  }  
} else {
  if (id(launcher_selected_item) == 8) {
    it.rectangle(98, 24, 26, 26);     
    it.image(102, 27, id(icon_launcher_home));    
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Hjem");          
  } else {
    it.image(102, 27, id(icon_launcher_home));  
  }             
}     
it.printf(${gfx_renderpos_info_br}, id(arial_small), TextAlign::TOP_RIGHT, "%i/8", id(launcher_selected_item));