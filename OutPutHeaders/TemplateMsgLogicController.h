/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseMsgContentLogicController.h"


@interface TemplateMsgLogicController : BaseMsgContentLogicController {
}
-(void)OpenChatView:(id)view;
-(void)OpenContactInfo:(id)info;
-(BOOL)shouldShowAppBottomButton;
-(void)ClearUnRead:(id)read FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(void)DelMsg:(id)msg MsgList:(id)list DelAll:(BOOL)all;
-(id)GetDownMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(id)GetMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(BOOL)ShouldShowSearchCompleteRightBarButton;
-(id)GetUsrTitle;
-(BOOL)CanShowSight;
-(void)CustomToolViewEX:(id)ex;
-(BOOL)isShowHeadImage:(id)image;
-(unsigned long)getMsgCountToLoad;
-(void)initViewController;
@end

