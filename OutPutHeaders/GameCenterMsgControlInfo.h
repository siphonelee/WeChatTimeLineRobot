/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"


@interface GameCenterMsgControlInfo : XXUnknownSuperclass {
	BOOL _showMsgCenterReddot;
	BOOL _notInMsgCenter;
	int _controlFlag;
	int _filterFlag;
	unsigned long _createTime;
	unsigned long _expiredTime;
}
@property(assign, nonatomic) BOOL notInMsgCenter;
@property(assign, nonatomic) unsigned long expiredTime;
@property(assign, nonatomic) unsigned long createTime;
@property(assign, nonatomic) int filterFlag;
@property(assign, nonatomic) BOOL showMsgCenterReddot;
@property(assign, nonatomic) int controlFlag;
+(id)parseFromXml:(XmlReaderNode_t*)xml;
-(BOOL)canClickMsgCenterCellSource;
-(BOOL)shouldShowMsgCenterCellSource;
-(BOOL)shouldShowFindFriendEntry;
@end

