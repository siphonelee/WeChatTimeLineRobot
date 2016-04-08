/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMWindowViewController.h"

@class UIView, UIImageView, UILabel;
@protocol MMToastViewControllerDelegate;

@interface MMToastViewController : MMWindowViewController {
	float m_fShowDuration;
	UIView* m_bkgView;
	UIImageView* m_tipIconView;
	UILabel* m_label;
	id<MMToastViewControllerDelegate> _delegate;
	BOOL isSupportLandscape;
}
@property(assign, nonatomic) float m_fShowDuration;
-(void).cxx_destruct;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)hideWithAnimated:(int)animated;
-(void)viewDidLoad;
-(void)showSaveResultTip:(id)tip andText:(id)text andDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end

