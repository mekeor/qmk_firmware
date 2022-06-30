#pragma once

// plug usb into the left half of the keyboard

#define MASTER_LEFT

// enabling this option changes the startup behavior to listen for an active usb
// communication to delegate which part is master and which is slave. with this
// option enabled and theres’s usb communication, then that half assumes it is
// the master, otherwise it assumes it is the slave.

#define SPLIT_USB_DETECT

// mod-tap configuration

// #define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
// #define RETRO_TAPPING

// mouse

// use constant speed
#define MK_3_SPEED

#define MK_C_OFFSET_1 10
#define MK_C_INTERVAL 10

// tap dance. can't set this here because it's set in sofle_choc/config.h
// see also https://github.com/qmk/qmk_firmware/pull/16736#pullrequestreview-1024537375
// #define TAPPING_TERM 1000
