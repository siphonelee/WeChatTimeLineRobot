/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCVideoRender.h"

@class OpenglRenderView, UIView, VoipOpenglesContext, MMTimer;

@interface WCVideoOpenglRender : WCVideoRender {
	BOOL _m_frontCamera;
	VoipOpenglesContext* m_backOpenglesContext;
	VoipOpenglesContext* m_frontOpenglesContext;
	OpenglRenderView* m_backRenderView;
	OpenglRenderView* m_frontRenderView;
	UIView* m_renderView;
	MMTimer* _m_fpsTimer;
	unsigned _m_frontFpsCount;
	unsigned _m_backFpsCount;
}
@property(assign, nonatomic) BOOL m_frontCamera;
@property(assign, nonatomic) unsigned m_backFpsCount;
@property(assign, nonatomic) unsigned m_frontFpsCount;
@property(retain, nonatomic) MMTimer* m_fpsTimer;
@property(retain, nonatomic) UIView* m_renderView;
@property(retain, nonatomic) OpenglRenderView* m_frontRenderView;
@property(retain, nonatomic) OpenglRenderView* m_backRenderView;
@property(retain, nonatomic) VoipOpenglesContext* m_frontOpenglesContext;
@property(retain, nonatomic) VoipOpenglesContext* m_backOpenglesContext;
-(void).cxx_destruct;
-(void)dealloc;
-(void)setupELGS;
-(void)whenBecomeActive;
-(id)getRenderView;
-(void)changeFrame:(CGRect)frame;
-(void)renderImage:(char*)image Width:(unsigned long)width Height:(unsigned long)height;
-(void)fpsTimerCheck;
-(void)updateViewWithFrontCamera;
-(void)cameraFrontMode:(BOOL)mode;
-(id)initWithFrame:(CGRect)frame;
@end

