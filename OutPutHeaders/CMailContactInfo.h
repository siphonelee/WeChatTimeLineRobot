/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface CMailContactInfo : XXUnknownSuperclass <NSCoding> {
	NSString* mSyncInfo;
	NSMutableDictionary* mMailContactDic;
}
@property(retain, nonatomic) NSMutableDictionary* mMailContactDic;
@property(retain, nonatomic) NSString* mSyncInfo;
-(void).cxx_destruct;
-(void)SaveMailContactData;
-(void)LoadMailContactData;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end

