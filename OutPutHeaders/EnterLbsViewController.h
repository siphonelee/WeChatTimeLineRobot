/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "FriendAsistSessionExt.h"

@class MMSayHelloButton, UIButton, UILabel;

@interface EnterLbsViewController : MMUIViewController <FriendAsistSessionExt> {
	UIButton* m_btnLbs;
	MMSayHelloButton* m_btnSayHello;
	UILabel* m_labNoHello;
}
-(void).cxx_destruct;
-(void)onFriendAssistUnreadCountChanged;
-(void)UpdateView;
-(void)OnOpenLbs;
-(void)OnOpenSayHello;
-(void)dealloc;
-(void)viewDidLoad;
-(void)initView;
-(void)initData;
@end

