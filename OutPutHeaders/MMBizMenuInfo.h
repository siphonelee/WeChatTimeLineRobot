/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface MMBizMenuInfo : XXUnknownSuperclass {
	unsigned long _uin;
	unsigned long _interativeMode;
	unsigned long _updateTime;
	NSMutableArray* _arrMenu;
}
@property(retain, nonatomic) NSMutableArray* arrMenu;
@property(assign, nonatomic) unsigned long updateTime;
@property(assign, nonatomic) unsigned long interactiveMode;
@property(assign, nonatomic) unsigned long uin;
-(void).cxx_destruct;
-(void)parseFromJsonDictionary:(id)jsonDictionary;
-(id)init;
@end

