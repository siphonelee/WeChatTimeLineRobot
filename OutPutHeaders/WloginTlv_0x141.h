/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x141 : WloginTlv {
	unsigned short wDataVer;
	NSString* sOperator;
	unsigned short wNetType;
	unsigned short wResvLen;
}
@property(assign) unsigned short wResvLen;
@property(assign) unsigned short wNetType;
@property(copy) NSString* sOperator;
@property(assign) unsigned short wDataVer;
-(void)dealloc;
-(int)encode:(id)encode;
@end

