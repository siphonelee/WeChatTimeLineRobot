/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewControllerDelegate.h"


@protocol SessionSelectViewDelegate <MMUIViewControllerDelegate>
-(void)OnSelectSession:(id)session SelectView:(id)view;
@optional
-(void)OnSelectFromContactSelectView:(id)contactSelectView;
-(void)OnSelectEnterpriseChat:(id)chat SelectView:(id)view;
-(void)OnSelectCreateRoomSelectView:(id)view;
-(id)onSessionSelectGetSearchString;
-(void)onSessionSelectSearch:(id)search;
-(BOOL)OnShouldSelectSession:(id)on SelectView:(id)view;
@end

