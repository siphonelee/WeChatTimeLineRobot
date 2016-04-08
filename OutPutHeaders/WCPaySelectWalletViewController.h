/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayBaseViewController.h"

@protocol WCPaySelectWalletViewControllerDelegate;

@interface WCPaySelectWalletViewController : WCPayBaseViewController {
	id<WCPaySelectWalletViewControllerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(void)selectWalletInfo:(id)info;
-(void)makeWalletInfoCell:(id)cell cellInfo:(id)info;
-(void)setDelegate:(id)delegate;
-(void)OnBack;
-(void)reloadTableView;
-(void)initNavigationBar;
-(void)refreshViewWithData:(id)data;
-(void)viewDidLayoutSubviews;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)init;
@end

