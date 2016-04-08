/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"


@interface WCDeviceUtil : XXUnknownSuperclass {
}
+(BOOL)hasBoundAbilityDevice;
+(unsigned long)getUploadStepBeginTime;
+(id)deviceFromHardDevice:(id)hardDevice DeviceAttr:(id)attr;
+(id)displayNameFromDevice:(id)device;
+(BOOL)isInternalSportBrand:(id)brand;
+(id)mockDevice;
+(id)parseDeviceLikeMessageXML:(id)xml;
+(id)parseDeviceRankMessageXML:(id)xml;
+(AccessoryCmd*)deepCopyAccessoryCmd:(AccessoryCmd*)cmd;
+(bool)parseConnectProto:(id)proto :(id)arg2;
+(unsigned long)hashString:(id)string;
+(BOOL)saveDeviceBoundRelationshipVersion:(unsigned long)version;
+(unsigned long)getDeviceBoundRelationshipVersion;
+(void)addLocalMessage:(id)message MessageContent:(id)content;
+(id)getLocalMessage:(id)message;
+(long long)genTaskId;
+(id)parseWCDeviceMsg:(id)msg;
@end

