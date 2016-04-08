/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"

@protocol WCPayTranferMoneyPaidSuccessViewControllerDelegate;

@interface WCPayTranferMoneyPaidSuccessViewController : WCPayBaseViewController {
	BOOL m_bNeedBindCard;
	id<WCPayTranferMoneyPaidSuccessViewControllerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)refreshViewWithData:(id)data;
-(void)onSubscribeAppBtn:(id)btn;
-(void)reloadTableView;
-(void)selectNeedBindCard:(id)card;
-(void)initNavigationBar;
-(void)OnHistoryOrderDetailBack;
-(void)setDelegate:(id)delegate;
-(id)init;
@end

