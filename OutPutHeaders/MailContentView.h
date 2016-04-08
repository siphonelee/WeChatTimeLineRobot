/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITextViewDelegate.h"
#import "MMUIView.h"

@class UITextView, UIView, NSString;
@protocol MailContentViewDelegate;

@interface MailContentView : MMUIView <UITextViewDelegate> {
	UITextView* m_textView;
	UIView* m_labelView;
	id<MailContentViewDelegate> m_delegate;
	unsigned long m_uiLines;
	NSString* m_nsText;
	BOOL m_bPaste;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsText;
@property(assign, nonatomic) __weak id<MailContentViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)frame showTips:(BOOL)tips;
-(void)initView;
-(void)showReplyTips;
-(float)getContentHeight;
-(BOOL)isTextViewFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidChange:(id)textView;
-(float)getSelectedRangeY;
-(void)updateHeight;
-(float)measureHeight;
-(void)setTextViewText;
-(void)setFrame:(CGRect)frame;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidBeginEditing:(id)textView;
-(void)setContent:(id)content;
-(id)getContent;
@end

