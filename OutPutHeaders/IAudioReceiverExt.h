/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol IAudioReceiverExt
@optional
-(void)OnEarTip;
-(void)OnEndPlaying:(unsigned long)playing isForceStop:(BOOL)stop;
-(void)OnBeginPlaying:(unsigned long)playing ErrNo:(int)no;
-(void)OnLevelMeter:(unsigned long)meter Peak:(float)peak;
@end

