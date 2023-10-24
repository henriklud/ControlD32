it.image(${gfx_renderpos_icon_tl}, id(icon_launcher_vacuum));
it.print(${gfx_renderpos_title_tl}, id(arial_normal), TextAlign::TOP_LEFT, "Rosita");

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


if (id(vacuum_selected_item) <=4) {
  if (id(vacuum_selected_item) == 1) {
    it.rectangle(5, 22, 26, 26);
    it.image(9, 25, id(icon_launcher_home));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "AUTO");    
  } else {
    it.image(9, 25, id(icon_launcher_home));        
  }   
} else {
  if (id(vacuum_selected_item) == 5) {
    it.rectangle(5, 22, 26, 26);
    it.image(9, 25, id(img_office));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Kontoret");    
  } else {
    it.image(9, 25, id(img_office));        
  }  
} 

if (id(vacuum_selected_item) <=4) {
  if (id(vacuum_selected_item) == 2) {
    it.rectangle(36, 22, 26, 26);
    it.image(40, 25, id(img_rug));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Edestriba");              
  } else {
    it.image(40, 25, id(img_rug)); 
  }
} else {
  if (id(vacuum_selected_item) == 6) {
    it.rectangle(36, 22, 26, 26);
    it.image(40, 25, id(img_toilet));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Bad");              
  } else {
    it.image(40, 25, id(img_toilet)); 
  }
} 

if (id(vacuum_selected_item) <=4) {          
  if (id(vacuum_selected_item) == 3) {
    it.rectangle(67, 22, 26, 26);
    it.image(71, 25, id(img_kitchen));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Kjøkken");    
  } else {
    it.image(71, 25, id(img_kitchen));
  }
} else {
  if (id(vacuum_selected_item) == 7) {
    it.rectangle(67, 22, 26, 26);
    it.image(71, 25, id(img_bed));
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Soverom");    
  } else {
    it.image(71, 25, id(img_bed));
  }            
} 

if (id(vacuum_selected_item) <=4) {
  if (id(vacuum_selected_item) == 4) {
    it.rectangle(98, 22, 26, 26);     
    it.image(102, 25, id(img_lounge));          
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Loungen");  
  } else {
    it.image(102, 25, id(img_lounge));  
  }  
} else {
  if (id(vacuum_selected_item) == 8) {
    it.rectangle(98, 22, 26, 26);     
    it.image(102, 25, id(img_charge));   
    it.print(${gfx_renderpos_title_bl}, id(arial_small), TextAlign::TOP_LEFT, "Send hjem!");           
  } else {
    it.image(102, 25, id(img_charge));  
  }             
}  