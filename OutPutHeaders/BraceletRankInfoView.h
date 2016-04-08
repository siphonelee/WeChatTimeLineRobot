/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class DeviceRankInfo;
@protocol BraceletRankInfoViewDelegate;

@interface BraceletRankInfoView : MMUIView {
	DeviceRankInfo* m_rankInfo;
	BOOL m_isBotton;
	BOOL m_isFromFocus;
	id<BraceletRankInfoViewDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<BraceletRankInfoViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)pressedEvents;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)initView;
-(void)addSeperateLine;
-(id)initWithDeviceRankInfo:(id)deviceRankInfo IsBottom:(BOOL)bottom IsFromFocus:(BOOL)focus;
@end

