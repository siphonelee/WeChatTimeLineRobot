/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCShareCardBaseHeaderView.h"

@class MMUIView;
@protocol WCShareCardMemberCardHeaderDelegate;

@interface WCShareCardMemberHeaderView : WCShareCardBaseHeaderView {
	id<WCShareCardMemberCardHeaderDelegate> _delegate;
	MMUIView* _cardContentView;
}
@property(retain, nonatomic) MMUIView* cardContentView;
@property(assign, nonatomic) __weak id<WCShareCardMemberCardHeaderDelegate> delegate;
-(void).cxx_destruct;
-(float)getRealHeight;
-(void)fieldClicked:(id)clicked;
-(void)onclickAnnounce:(id)announce;
-(void)onClickApplyBtn:(id)btn;
-(id)insertSpaceChar:(id)aChar hasTransline:(BOOL)transline;
-(id)getLogoName;
-(BOOL)bIsCardPreAccept;
-(void)addSecondaryField;
-(void)initMemberCardContentViewWithStartY:(float)startY;
-(void)initView;
-(id)initWithViewWidth:(float)viewWidth withCardSourceData:(id)cardSourceData isShareCard:(BOOL)card cardStatus:(int)status isNeedHideAcceptBtn:(BOOL)btn delegate:(id)delegate;
@end

