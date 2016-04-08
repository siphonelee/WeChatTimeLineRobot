/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"

@class NSArray;

@interface ReaderNewMessageNodeView : BaseMessageNodeView {
	NSArray* m_arrBtnList;
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getOrMakeBrandContact:(id)contact displayName:(id)name;
-(id)getCurrentNodeAccessibilityDescription:(id)description;
-(id)timeToStr:(id)str;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(BOOL)shouldDisplayReadAllButton;
-(BOOL)shouldGoToEmoticonDetail:(id)emoticonDetail;
-(void)onClicked;
-(void)showOpearation;
-(id)headImageUrlOfChatContact;
-(void)addHeadImageForFavItemIfNoThumb:(id)favItemIfNoThumb;
-(void)addHeadImageForMsgIfNoThumb:(id)msgIfNoThumb;
-(void)onForward:(id)forward;
-(void)onFavoriteAdd:(id)add;
-(void)onMoreOperate:(id)operate;
-(void)forwardMessage;
-(void)ShowReader:(id)reader;
-(void)updateBkgImage:(BOOL)image;
-(BOOL)isTouchInView:(id)view;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(void)reLayoutSubviews;
-(void)clickNodeViewBtn:(id)btn;
-(void)layoutSubviewsInternal;
-(id)getItemLabel:(id)label with:(float)with font:(id)font;
-(id)getAsyncImageWithFrame:(CGRect)frame;
-(id)getItemTitle:(float)title;
-(id)getTitleString:(id)string bBig:(BOOL)big bGray:(BOOL)gray;
-(id)getBigVideoImage;
-(id)getSmallVideoImage;
-(CGSize)sizeForFrame:(CGRect)frame;
@end

