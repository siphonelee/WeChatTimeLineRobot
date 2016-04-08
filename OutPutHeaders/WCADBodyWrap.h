/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCADVideoPlayInfo, NSString;

@interface WCADBodyWrap : XXUnknownSuperclass {
	NSString* _adID;
	NSString* _publishID;
	NSString* _uxInfo;
	unsigned long _startPositionType;
	unsigned long _endPositionType;
	float _readHeight;
	float _unReadTopHeight;
	float _unReadBottomHeight;
	float _tableContentY;
	WCADVideoPlayInfo* _playInfo;
	unsigned long long _startTime;
	unsigned long long _endTime;
	unsigned long long _halfStartTime;
	unsigned long long _halfEndTime;
	unsigned long long _allStartTime;
	unsigned long long _allEndTime;
}
@property(retain, nonatomic) WCADVideoPlayInfo* playInfo;
@property(assign, nonatomic) float tableContentY;
@property(assign, nonatomic) float unReadBottomHeight;
@property(assign, nonatomic) float unReadTopHeight;
@property(assign, nonatomic) float readHeight;
@property(assign, nonatomic) unsigned long long allEndTime;
@property(assign, nonatomic) unsigned long long allStartTime;
@property(assign, nonatomic) unsigned long long halfEndTime;
@property(assign, nonatomic) unsigned long long halfStartTime;
@property(assign, nonatomic) unsigned long long endTime;
@property(assign, nonatomic) unsigned long long startTime;
@property(assign, nonatomic) unsigned long endPositionType;
@property(assign, nonatomic) unsigned long startPositionType;
@property(retain, nonatomic) NSString* uxInfo;
@property(retain, nonatomic) NSString* publishID;
@property(retain, nonatomic) NSString* adID;
-(void).cxx_destruct;
@end

