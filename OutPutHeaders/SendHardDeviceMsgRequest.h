/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, HardDevice, HardDeviceMsg, BaseRequest;

@interface SendHardDeviceMsgRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* sessionBuffer;
@property(retain, nonatomic) HardDeviceMsg* hardDeviceMsg;
@property(retain, nonatomic) HardDevice* hardDevice;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

