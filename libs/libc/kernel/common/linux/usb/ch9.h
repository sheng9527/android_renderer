/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_USB_CH9_H
#define __LINUX_USB_CH9_H
#include <linux/types.h>  
#include <asm/byteorder.h>  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DIR_OUT 0  
#define USB_DIR_IN 0x80  
#define USB_TYPE_MASK (0x03 << 5)
#define USB_TYPE_STANDARD (0x00 << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_TYPE_CLASS (0x01 << 5)
#define USB_TYPE_VENDOR (0x02 << 5)
#define USB_TYPE_RESERVED (0x03 << 5)
#define USB_RECIP_MASK 0x1f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_RECIP_DEVICE 0x00
#define USB_RECIP_INTERFACE 0x01
#define USB_RECIP_ENDPOINT 0x02
#define USB_RECIP_OTHER 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_RECIP_PORT 0x04
#define USB_RECIP_RPIPE 0x05
#define USB_REQ_GET_STATUS 0x00
#define USB_REQ_CLEAR_FEATURE 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_SET_FEATURE 0x03
#define USB_REQ_SET_ADDRESS 0x05
#define USB_REQ_GET_DESCRIPTOR 0x06
#define USB_REQ_SET_DESCRIPTOR 0x07
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_GET_CONFIGURATION 0x08
#define USB_REQ_SET_CONFIGURATION 0x09
#define USB_REQ_GET_INTERFACE 0x0A
#define USB_REQ_SET_INTERFACE 0x0B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_SYNCH_FRAME 0x0C
#define USB_REQ_SET_SEL 0x30
#define USB_REQ_SET_ENCRYPTION 0x0D  
#define USB_REQ_GET_ENCRYPTION 0x0E
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_RPIPE_ABORT 0x0E
#define USB_REQ_SET_HANDSHAKE 0x0F
#define USB_REQ_RPIPE_RESET 0x0F
#define USB_REQ_GET_HANDSHAKE 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_SET_CONNECTION 0x11
#define USB_REQ_SET_SECURITY_DATA 0x12
#define USB_REQ_GET_SECURITY_DATA 0x13
#define USB_REQ_SET_WUSB_DATA 0x14
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_LOOPBACK_DATA_WRITE 0x15
#define USB_REQ_LOOPBACK_DATA_READ 0x16
#define USB_REQ_SET_INTERFACE_DS 0x17
#define USB_DEVICE_SELF_POWERED 0  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DEVICE_REMOTE_WAKEUP 1  
#define USB_DEVICE_TEST_MODE 2  
#define USB_DEVICE_BATTERY 2  
#define USB_DEVICE_B_HNP_ENABLE 3  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DEVICE_WUSB_DEVICE 3  
#define USB_DEVICE_A_HNP_SUPPORT 4  
#define USB_DEVICE_A_ALT_HNP_SUPPORT 5  
#define USB_DEVICE_DEBUG_MODE 6  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TEST_J 1
#define TEST_K 2
#define TEST_SE0_NAK 3
#define TEST_PACKET 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TEST_FORCE_EN 5
#define USB_DEVICE_U1_ENABLE 48  
#define USB_DEVICE_U2_ENABLE 49  
#define USB_DEVICE_LTM_ENABLE 50  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_INTRF_FUNC_SUSPEND 0  
#define USB_INTR_FUNC_SUSPEND_OPT_MASK 0xFF00
#define USB_INTRF_FUNC_SUSPEND_LP (1 << (8 + 0))
#define USB_INTRF_FUNC_SUSPEND_RW (1 << (8 + 1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_HALT 0  
#define USB_DEV_STAT_U1_ENABLED 2  
#define USB_DEV_STAT_U2_ENABLED 3  
#define USB_DEV_STAT_LTM_ENABLED 4  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_ctrlrequest {
 __u8 bRequestType;
 __u8 bRequest;
 __le16 wValue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wIndex;
 __le16 wLength;
} __attribute__ ((packed));
#define USB_DT_DEVICE 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_CONFIG 0x02
#define USB_DT_STRING 0x03
#define USB_DT_INTERFACE 0x04
#define USB_DT_ENDPOINT 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_DEVICE_QUALIFIER 0x06
#define USB_DT_OTHER_SPEED_CONFIG 0x07
#define USB_DT_INTERFACE_POWER 0x08
#define USB_DT_OTG 0x09
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_DEBUG 0x0a
#define USB_DT_INTERFACE_ASSOCIATION 0x0b
#define USB_DT_SECURITY 0x0c
#define USB_DT_KEY 0x0d
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_ENCRYPTION_TYPE 0x0e
#define USB_DT_BOS 0x0f
#define USB_DT_DEVICE_CAPABILITY 0x10
#define USB_DT_WIRELESS_ENDPOINT_COMP 0x11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_WIRE_ADAPTER 0x21
#define USB_DT_RPIPE 0x22
#define USB_DT_CS_RADIO_CONTROL 0x23
#define USB_DT_PIPE_USAGE 0x24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_SS_ENDPOINT_COMP 0x30
#define USB_DT_CS_DEVICE (USB_TYPE_CLASS | USB_DT_DEVICE)
#define USB_DT_CS_CONFIG (USB_TYPE_CLASS | USB_DT_CONFIG)
#define USB_DT_CS_STRING (USB_TYPE_CLASS | USB_DT_STRING)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_CS_INTERFACE (USB_TYPE_CLASS | USB_DT_INTERFACE)
#define USB_DT_CS_ENDPOINT (USB_TYPE_CLASS | USB_DT_ENDPOINT)
struct usb_descriptor_header {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
} __attribute__ ((packed));
struct usb_device_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __le16 bcdUSB;
 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDeviceProtocol;
 __u8 bMaxPacketSize0;
 __le16 idVendor;
 __le16 idProduct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 bcdDevice;
 __u8 iManufacturer;
 __u8 iProduct;
 __u8 iSerialNumber;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bNumConfigurations;
} __attribute__ ((packed));
#define USB_DT_DEVICE_SIZE 18
#define USB_CLASS_PER_INTERFACE 0  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CLASS_AUDIO 1
#define USB_CLASS_COMM 2
#define USB_CLASS_HID 3
#define USB_CLASS_PHYSICAL 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CLASS_STILL_IMAGE 6
#define USB_CLASS_PRINTER 7
#define USB_CLASS_MASS_STORAGE 8
#define USB_CLASS_HUB 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CLASS_CDC_DATA 0x0a
#define USB_CLASS_CSCID 0x0b  
#define USB_CLASS_CONTENT_SEC 0x0d  
#define USB_CLASS_VIDEO 0x0e
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CLASS_WIRELESS_CONTROLLER 0xe0
#define USB_CLASS_MISC 0xef
#define USB_CLASS_APP_SPEC 0xfe
#define USB_CLASS_VENDOR_SPEC 0xff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_SUBCLASS_VENDOR_SPEC 0xff
struct usb_config_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wTotalLength;
 __u8 bNumInterfaces;
 __u8 bConfigurationValue;
 __u8 iConfiguration;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bmAttributes;
 __u8 bMaxPower;
} __attribute__ ((packed));
#define USB_DT_CONFIG_SIZE 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CONFIG_ATT_ONE (1 << 7)  
#define USB_CONFIG_ATT_SELFPOWER (1 << 6)  
#define USB_CONFIG_ATT_WAKEUP (1 << 5)  
#define USB_CONFIG_ATT_BATTERY (1 << 4)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_string_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
 __le16 wData[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct usb_interface_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bInterfaceNumber;
 __u8 bAlternateSetting;
 __u8 bNumEndpoints;
 __u8 bInterfaceClass;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;
 __u8 iInterface;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_INTERFACE_SIZE 9
struct usb_endpoint_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bEndpointAddress;
 __u8 bmAttributes;
 __le16 wMaxPacketSize;
 __u8 bInterval;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bRefresh;
 __u8 bSynchAddress;
} __attribute__ ((packed));
#define USB_DT_ENDPOINT_SIZE 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_ENDPOINT_AUDIO_SIZE 9  
#define USB_ENDPOINT_NUMBER_MASK 0x0f  
#define USB_ENDPOINT_DIR_MASK 0x80
#define USB_ENDPOINT_XFERTYPE_MASK 0x03  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_XFER_CONTROL 0
#define USB_ENDPOINT_XFER_ISOC 1
#define USB_ENDPOINT_XFER_BULK 2
#define USB_ENDPOINT_XFER_INT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_MAX_ADJUSTABLE 0x80
#define USB_ENDPOINT_SYNCTYPE 0x0c
#define USB_ENDPOINT_SYNC_NONE (0 << 2)
#define USB_ENDPOINT_SYNC_ASYNC (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_SYNC_ADAPTIVE (2 << 2)
#define USB_ENDPOINT_SYNC_SYNC (3 << 2)
#define USB_ENDPOINT_USAGE_MASK 0x30
#define USB_ENDPOINT_USAGE_DATA 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_USAGE_FEEDBACK 0x10
#define USB_ENDPOINT_USAGE_IMPLICIT_FB 0x20  
struct usb_ss_ep_comp_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __u8 bMaxBurst;
 __u8 bmAttributes;
 __le16 wBytesPerInterval;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
#define USB_DT_SS_EP_COMP_SIZE 6
#define USB_SS_MULT(p) (1 + ((p) & 0x3))
struct usb_qualifier_descriptor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bLength;
 __u8 bDescriptorType;
 __le16 bcdUSB;
 __u8 bDeviceClass;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;
 __u8 bMaxPacketSize0;
 __u8 bNumConfigurations;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bRESERVED;
} __attribute__ ((packed));
struct usb_otg_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __u8 bmAttributes;
} __attribute__ ((packed));
#define USB_OTG_SRP (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_OTG_HNP (1 << 1)  
struct usb_debug_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDebugInEndpoint;
 __u8 bDebugOutEndpoint;
} __attribute__((packed));
struct usb_interface_assoc_descriptor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bFirstInterface;
 __u8 bInterfaceCount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bFunctionClass;
 __u8 bFunctionSubClass;
 __u8 bFunctionProtocol;
 __u8 iFunction;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct usb_security_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wTotalLength;
 __u8 bNumEncryptionTypes;
} __attribute__((packed));
struct usb_key_descriptor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 tTKID[3];
 __u8 bReserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bKeyData[0];
} __attribute__((packed));
struct usb_encryption_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __u8 bEncryptionType;
#define USB_ENC_TYPE_UNSECURE 0
#define USB_ENC_TYPE_WIRED 1  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENC_TYPE_CCM_1 2  
#define USB_ENC_TYPE_RSA_1 3  
 __u8 bEncryptionValue;
 __u8 bAuthKeyIndex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct usb_bos_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wTotalLength;
 __u8 bNumDeviceCaps;
} __attribute__((packed));
#define USB_DT_BOS_SIZE 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_dev_cap_header {
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
#define USB_CAP_TYPE_WIRELESS_USB 1
struct usb_wireless_cap_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
 __u8 bmAttributes;
#define USB_WIRELESS_P2P_DRD (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_WIRELESS_BEACON_MASK (3 << 2)
#define USB_WIRELESS_BEACON_SELF (1 << 2)
#define USB_WIRELESS_BEACON_DIRECTED (2 << 2)
#define USB_WIRELESS_BEACON_NONE (3 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wPHYRates;
#define USB_WIRELESS_PHY_53 (1 << 0)  
#define USB_WIRELESS_PHY_80 (1 << 1)
#define USB_WIRELESS_PHY_107 (1 << 2)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_WIRELESS_PHY_160 (1 << 3)
#define USB_WIRELESS_PHY_200 (1 << 4)  
#define USB_WIRELESS_PHY_320 (1 << 5)
#define USB_WIRELESS_PHY_400 (1 << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_WIRELESS_PHY_480 (1 << 7)
 __u8 bmTFITXPowerInfo;
 __u8 bmFFITXPowerInfo;
 __le16 bmBandGroup;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bReserved;
} __attribute__((packed));
#define USB_CAP_TYPE_EXT 2
struct usb_ext_cap_descriptor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
 __le32 bmAttributes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_LPM_SUPPORT (1 << 1)  
} __attribute__((packed));
#define USB_DT_USB_EXT_CAP_SIZE 7
#define USB_SS_CAP_TYPE 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_ss_cap_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bmAttributes;
#define USB_LTM_SUPPORT (1 << 1)  
 __le16 wSpeedSupported;
#define USB_LOW_SPEED_OPERATION (1)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_FULL_SPEED_OPERATION (1 << 1)  
#define USB_HIGH_SPEED_OPERATION (1 << 2)  
#define USB_5GBPS_OPERATION (1 << 3)  
 __u8 bFunctionalitySupport;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bU1devExitLat;
 __le16 bU2DevExitLat;
} __attribute__((packed));
#define USB_DT_USB_SS_CAP_SIZE 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CONTAINER_ID_TYPE 4
struct usb_ss_container_id_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDevCapabilityType;
 __u8 bReserved;
 __u8 ContainerID[16];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_USB_SS_CONTN_ID_SIZE 20
struct usb_wireless_ep_comp_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bMaxBurst;
 __u8 bMaxSequence;
 __le16 wMaxStreamDelay;
 __le16 wOverTheAirPacketSize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bOverTheAirInterval;
 __u8 bmCompAttributes;
#define USB_ENDPOINT_SWITCH_MASK 0x03  
#define USB_ENDPOINT_SWITCH_NO 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_ENDPOINT_SWITCH_SWITCH 1
#define USB_ENDPOINT_SWITCH_SCALE 2
} __attribute__((packed));
struct usb_handshake {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bMessageNumber;
 __u8 bStatus;
 __u8 tTKID[3];
 __u8 bReserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 CDID[16];
 __u8 nonce[16];
 __u8 MIC[8];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_connection_context {
 __u8 CHID[16];
 __u8 CDID[16];
 __u8 CK[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
enum usb_device_speed {
 USB_SPEED_UNKNOWN = 0,
 USB_SPEED_LOW, USB_SPEED_FULL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_SPEED_HIGH,
 USB_SPEED_WIRELESS,
 USB_SPEED_SUPER,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum usb_device_state {
 USB_STATE_NOTATTACHED = 0,
 USB_STATE_ATTACHED,
 USB_STATE_POWERED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_STATE_RECONNECTING,
 USB_STATE_UNAUTHENTICATED,
 USB_STATE_DEFAULT,
 USB_STATE_ADDRESS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_STATE_CONFIGURED,
 USB_STATE_SUSPENDED
};
#define USB_SELF_POWER_VBUS_MAX_DRAW 100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
