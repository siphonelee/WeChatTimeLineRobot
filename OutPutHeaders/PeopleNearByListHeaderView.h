/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class UIButton, UILabel;
@protocol PeopleNearByListHeaderViewDelegate;

@interface PeopleNearByListHeaderView : MMUIView {
	UIButton* m_chatRoomNearByBtn;
	UILabel* m_maxPeopleLabel;
	int m_iRoomMemberCount;
	id<PeopleNearByListHeaderViewDelegate> m_delegate;
}
@property(assign) int m_iRoomMemberCount;
-(void).cxx_destruct;
-(void)setMaxPeopleNum:(int)num;
-(void)onChatRoomNearByBtnClicked;
-(void)initChatRoomBtn;
-(id)initWithMaxNum:(int)maxNum;
-(id)init;
-(void)setDelegate:(id)delegate;
@end

