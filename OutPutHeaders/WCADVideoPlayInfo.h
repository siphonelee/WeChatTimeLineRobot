/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WCADVideoPlayInfo : XXUnknownSuperclass {
	int playCount;
	unsigned long long startPlayTime;
	unsigned long long endPlayTime;
	unsigned long long playTotalTime;
	unsigned long long videoTotalTime;
	int playMode;
	int playOrientation;
}
@property(assign, nonatomic) int playOrientation;
@property(assign, nonatomic) int playMode;
@property(assign, nonatomic) unsigned long long videoTotalTime;
@property(assign, nonatomic) unsigned long long playTotalTime;
@property(assign, nonatomic) unsigned long long endPlayTime;
@property(assign, nonatomic) unsigned long long startPlayTime;
@property(assign, nonatomic) int playCount;
-(id)init;
@end

