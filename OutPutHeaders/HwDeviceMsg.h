/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class HwDeviceMsg_HwMusic, HwDeviceMsg_HwLocation, HwDeviceMsg_HwImage, HwDeviceMsg_HwAppFile;

@interface HwDeviceMsg : WXPBGeneratedMessage {
}
@property(retain, nonatomic) HwDeviceMsg_HwAppFile* fileMsg;
@property(retain, nonatomic) HwDeviceMsg_HwImage* imageMsg;
@property(retain, nonatomic) HwDeviceMsg_HwLocation* locationMsg;
@property(retain, nonatomic) HwDeviceMsg_HwMusic* musicMsg;
@property(assign, nonatomic) int type;
+(void)initialize;
@end

