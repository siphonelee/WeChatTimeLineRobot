/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SilkAudioRecorderDelegate
@optional
-(void)onSilkPart:(id)part Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag ForceDelete:(BOOL)aDelete Duration:(unsigned long)duration;
-(void)onSilkEndRecording:(id)recording;
-(void)onSilkBeginRecording:(id)recording ErrNo:(int)no;
-(void)onSilkLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)onPrepareSendSilk:(id)silk;
-(BOOL)silkStopRecord;
-(BOOL)silkCheckIfButtonPressing:(id)pressing;
@end

