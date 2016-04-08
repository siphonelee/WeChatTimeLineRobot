/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface VoipMinimizeReportObject : MMObject {
	unsigned long m_clickMinimizeButtonTime;
	unsigned m_clickMinimizeButtonCount;
	unsigned long m_startVoipTime;
}
@property(assign, nonatomic) unsigned long m_startVoipTime;
@property(assign, nonatomic) unsigned m_clickMinimizeButtonCount;
@property(assign, nonatomic) unsigned long m_clickMinimizeButtonTime;
-(void)reportTotalMinimizeCountWithTotalTalkTime;
-(void)recordVoipStartTime;
-(void)reportMinimizeModeTimeForAudio;
-(void)reportMinimizeModeTimeForVideo;
-(void)reportIgnoreButtonClickForAudio;
-(void)reportIgnoreButtonClickForVideo;
-(void)reportMinimizeButtonClickForAudio;
-(void)reportMinimizeButtonClickForVideo;
-(id)init;
@end

