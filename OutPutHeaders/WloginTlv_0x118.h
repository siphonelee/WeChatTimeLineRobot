/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x118 : WloginTlv {
	unsigned dwFlag;
	NSString* sName;
}
@property(copy) NSString* sName;
@property(assign) unsigned dwFlag;
-(void)dealloc;
-(int)decode:(char**)decode andBuffLen:(int*)len;
@end

