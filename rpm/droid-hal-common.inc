# These and other macros are documented in dhd/droid-hal-device.inc
# Feel free to cleanup this file by removing comments, once you have memorised them ;)

#%define vendor qualcomm
#
#%define rpm_vendor qualcomm

%define installable_zip 1

%define droid_target_armv7hl 1

%define additional_ha_groups radio

%define additional_post_scripts \
/usr/bin/groupadd-user radio || :\
%{nil}

%define straggler_files \
/plat_property_contexts \
/vendor_property_contexts \
%{nil}

%include rpm/dhd/droid-hal-device.inc

# IMPORTANT if you want to comment out any macros in your .spec, delete the %
# sign, otherwise they will remain defined! E.g.:
#define some_macro "I'll not be defined because I don't have % in front"

