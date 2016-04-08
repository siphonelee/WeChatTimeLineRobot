/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "IVoiceInputExt.h"

@class VoiceRecogView, UIButton, NSString;
@protocol VoiceInputViewDelegate;

@interface VoiceInputView : XXUnknownSuperclass <IVoiceInputExt> {
	unsigned long mVoiceId;
	id<NSObject> keyboard_targetor;
	SEL keyboard_selector;
	id<NSObject> send_targetor;
	SEL send_selector;
	int voiceInputStatus;
	id<VoiceInputViewDelegate> delegate;
	VoiceRecogView* mRecogView;
	UIButton* mKeyboardBtn;
	UIButton* mSendBtn;
}
@property(retain, nonatomic) UIButton* mKeyboardBtn;
@property(retain, nonatomic) UIButton* mSendBtn;
@property(retain, nonatomic) VoiceRecogView* mRecogView;
@property(assign, nonatomic) id<VoiceInputViewDelegate> delegate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)stopVoiceInput;
-(void)resetView;
-(void)addSendTarget:(id)target action:(SEL)action;
-(void)addKeyboardTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)OnSendBtnClicked:(id)clicked;
-(void)OnClearBtnClicked:(id)clicked;
-(void)stopRecord;
-(void)startRecord;
-(void)changeBkgView;
-(void)updateButtonStatus;
-(void)OnError:(int)error andInputId:(unsigned long)anId;
-(void)OnGetText:(id)text andInputId:(unsigned long)anId;
-(void)OnLevelMeter:(unsigned long)meter Peak:(float)peak;
-(void)OnEndRecord;
-(void)OnStartRecord;
@end

