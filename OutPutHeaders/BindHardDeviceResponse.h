/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class HardDevice, HardDeviceAttr, BaseResponse;

@interface BindHardDeviceResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned flag;
@property(retain, nonatomic) HardDeviceAttr* hardDeviceAttr;
@property(retain, nonatomic) HardDevice* hardDevice;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

