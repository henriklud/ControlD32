it.image(${gfx_renderpos_icon_tl}, id(img_home_shortcuts));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Snarveier");

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


if (id(shortcuts_selected_item) <=4) {
  if (id(shortcuts_selected_item) == 1) {
    it.rectangle(5, 24, 26, 26);
    it.image(9, 27, id(icon_shortcut_1));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_1_name}");
  } else {
    it.image(9, 27, id(icon_shortcut_1));        
  }   
} else {
  if (id(shortcuts_selected_item) == 5) {
    it.rectangle(5, 24, 26, 26);
    it.image(9, 27, id(icon_shortcut_5));
      it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_5_name}");
  } else {
    it.image(9, 27, id(icon_shortcut_5));        
  }  
} 

if (id(shortcuts_selected_item) <=4) {
  if (id(shortcuts_selected_item) == 2) {
    it.rectangle(36, 24, 26, 26);
    it.image(40, 27, id(icon_shortcut_2));  
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_2_name}");            
  } else {
    it.image(40, 27, id(icon_shortcut_2)); 
  }
} else {
  if (id(shortcuts_selected_item) == 6) {
    it.rectangle(36, 24, 26, 26);
    it.image(40, 27, id(icon_shortcut_6));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_6_name}");              
  } else {
    it.image(40, 27, id(icon_shortcut_6)); 
  }
} 

if (id(shortcuts_selected_item) <=4) {          
  if (id(shortcuts_selected_item) == 3) {
    it.rectangle(67, 24, 26, 26);
    it.image(71, 27, id(icon_shortcut_3));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_3_name}");    
  } else {
    it.image(71, 27, id(icon_shortcut_3));
  }
} else {
  if (id(shortcuts_selected_item) == 7) {
    it.rectangle(67, 24, 26, 26);
    it.image(71, 27, id(icon_shortcut_7));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_7_name}");    
  } else {
    it.image(71, 27, id(icon_shortcut_7));
  }            
} 

if (id(shortcuts_selected_item) <=4) {
  if (id(shortcuts_selected_item) == 4) {
    it.rectangle(98, 24, 26, 26);     
    it.image(102, 27, id(icon_shortcut_4));   
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_4_name}");           
  } else {
    it.image(102, 27, id(icon_shortcut_4));  
  }  
} else {
  if (id(shortcuts_selected_item) == 8) {
    it.rectangle(98, 24, 26, 26);     
    it.image(102, 27, id(icon_shortcut_8));    
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "${shortcut_8_name}");          
  } else {
    it.image(102, 27, id(icon_shortcut_8));  
  }             
}     
it.printf(${gfx_renderpos_info_br}, id(arial_small), TextAlign::TOP_RIGHT, "%i/8", id(shortcuts_selected_item));