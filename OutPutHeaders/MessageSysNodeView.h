/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ILinkEventExt.h"
#import "BaseMessageNodeView.h"

@class UIImageView, NSString, RichTextView;

@interface MessageSysNodeView : BaseMessageNodeView <ILinkEventExt> {
	UIImageView* m_bkgImageView;
	RichTextView* m_richTextView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)onOrientationChanged;
-(void)layoutSubviewsInternal;
-(void)updateSubviews;
-(id)getBkgImage:(BOOL)image;
@end

