/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMWebViewPluginBase.h"


@interface MMWebViewPlugin_CustomNavigationBar : MMWebViewPluginBase {
	BOOL _bIsJsapiDefineNavigationLeftItem;
	BOOL _bIsJsapiDefineNavigationRightItem;
	id _onClickRightNavItem;
	BOOL _bIsShowNavigationLoading;
}
@property(assign, nonatomic) BOOL m_bIsJsapiDefineNavigationRightItem;
-(void).cxx_destruct;
-(void)setTitleColorAndUpdate:(id)update;
-(void)setTitle:(id)title color:(id)color;
-(void)changeStatusBarWhite:(BOOL)white;
-(void)hideNavigationTitleLoading;
-(void)showNavigationTitleLoading;
-(void)setRightNavBarItemHidden:(BOOL)hidden;
-(void)onClickJSDefineRightNavItem;
-(void)setRightNavBarItemTitle:(id)title color:(id)color icon:(id)icon clickAction:(id)action;
-(void)setLeftNavBarItemTitle:(id)title color:(id)color icon:(id)icon;
-(BOOL)handleEvent:(unsigned)event userInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

