// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-8 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
//-----------------------------------------------------------------------------

#include "doomtype.h"
#include "doomkeys.h"

#include "m_config.h"
 
// 
// Keyboard controls 
// 

int key_right = KEY_RIGHTARROW;
int key_left = KEY_LEFTARROW;

int key_up = KEY_UPARROW;
int key_down = KEY_DOWNARROW; 
int key_strafeleft = ',';
int key_straferight = '.';
int key_fire = KEY_RCTRL;
int key_use = ' ';
int key_strafe = KEY_RALT;
int key_speed = KEY_RSHIFT; 
 
//
// Mouse controls
//

int mousebfire = 0;
int mousebstrafe = 1;
int mousebforward = 2;

int mousebstrafeleft = -1;
int mousebstraferight = -1;
int mousebbackward = -1;
int mousebuse = -1;

//
// Joystick controls
//

int joybfire = 0; 
int joybstrafe = 1; 
int joybuse = 3; 
int joybspeed = 2; 

int joybstrafeleft = -1;
int joybstraferight = -1;

// Control whether if a mouse button is double clicked, it acts like 
// "use" has been pressed

int dclick_use = 1;
 
// Disallow mouse and joystick movement to cause forward/backward
// motion.  Specified with the '-novert' command line parameter.
// This is an int to allow saving to config file

int novert = 0;
 
// 
// Bind all of the common controls used by Doom and all other games.
//

void M_BindBaseControls(void)
{
    M_BindVariable("key_right",          &key_right),
    M_BindVariable("key_left",           &key_left),
    M_BindVariable("key_up",             &key_up),
    M_BindVariable("key_down",           &key_down),
    M_BindVariable("key_strafeleft",     &key_strafeleft),
    M_BindVariable("key_straferight",    &key_straferight),
    M_BindVariable("key_fire",           &key_fire),
    M_BindVariable("key_use",            &key_use),
    M_BindVariable("key_strafe",         &key_strafe),
    M_BindVariable("key_speed",          &key_speed),

    M_BindVariable("mouseb_fire",        &mousebfire),
    M_BindVariable("mouseb_strafe",      &mousebstrafe),
    M_BindVariable("mouseb_forward",     &mousebforward),

    M_BindVariable("joyb_fire",          &joybfire),
    M_BindVariable("joyb_strafe",        &joybstrafe),
    M_BindVariable("joyb_use",           &joybuse),
    M_BindVariable("joyb_speed",         &joybspeed),

    // Extra controls that are not in the Vanilla versions:
  
    M_BindVariable("joyb_strafeleft",    &joybstrafeleft);
    M_BindVariable("joyb_straferight",   &joybstraferight);
    M_BindVariable("mouseb_strafeleft",  &mousebstrafeleft);
    M_BindVariable("mouseb_straferight", &mousebstraferight);
    M_BindVariable("mouseb_use",         &mousebuse);
    M_BindVariable("mouseb_backward",    &mousebbackward);
    M_BindVariable("dclick_use",         &dclick_use);
    M_BindVariable("novert",             &novert);
}
