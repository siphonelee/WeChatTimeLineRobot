/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIView;

@interface EnterpriseSessionControllerMenuView : XXUnknownSuperclass {
	UIImageView* m_viewBg;
	UIView* m_viewContent;
}
-(void).cxx_destruct;
-(void)dealloc;
-(void)layoutSubviews;
-(void)animateShowInView:(id)view;
-(id)init;
-(void)addItemWithTitle:(id)title imageName:(id)name sel:(SEL)sel target:(id)target;
-(void)addLine;
-(void)updateSubviewWidth;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animateHideAction;
-(void)onHideAction;
@end

