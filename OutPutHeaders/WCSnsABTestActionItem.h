/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCSnsABTestTitle, NSString;

@interface WCSnsABTestActionItem : XXUnknownSuperclass {
	NSString* showTitleFormat;
	BOOL hasUserNameKey;
	BOOL hasSexKey;
	NSString* maleKey;
	NSString* femailKey;
	NSString* richTextKey;
	WCSnsABTestTitle* abtestTitle;
	int actionType;
	NSString* actionIndex;
	NSString* jumpUrl;
	NSString* nextTipIndex;
}
@property(retain, nonatomic) WCSnsABTestTitle* abtestTitle;
@property(retain, nonatomic) NSString* nextTipIndex;
@property(retain, nonatomic) NSString* jumpUrl;
@property(retain, nonatomic) NSString* actionIndex;
@property(assign, nonatomic) int actionType;
-(void).cxx_destruct;
-(int)compareActionItemAscending:(id)ascending;
-(id)description;
-(id)init;
@end

