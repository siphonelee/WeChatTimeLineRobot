/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DeepLinkBitSet, NSString;

@interface DeepLinkDef : XXUnknownSuperclass {
	id linkBlock;
	NSString* link;
	NSString* linkName;
	DeepLinkBitSet* dlBitset;
	unsigned long flag;
}
@property(assign, nonatomic) unsigned long flag;
@property(retain, nonatomic) DeepLinkBitSet* dlBitset;
@property(retain, nonatomic) NSString* linkName;
@property(retain, nonatomic, getter=getLink) NSString* link;
@property(assign, nonatomic) __weak id linkBlock;
+(id)DeepLinkDefWithName:(id)name Link:(id)link PermissionBitSet:(unsigned long long)set LinkBlock:(id)block Flag:(unsigned long)flag;
-(void).cxx_destruct;
-(BOOL)isCallExtension;
-(BOOL)isCallDelegate;
-(void)dealloc;
-(id)init;
@end

