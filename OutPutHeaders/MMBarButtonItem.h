/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class MMBarButton;

@interface MMBarButtonItem : XXUnknownSuperclass {
	CGRect m_standardPortriatFrame;
	MMBarButton* m_btn;
	UIEdgeInsets m_standardPortraitEdgeInsets;
	int m_iContentWidth;
	int m_iContentHeight;
}
@property(assign, nonatomic) int m_iContentHeight;
@property(assign, nonatomic) int m_iContentWidth;
@property(assign, nonatomic) UIEdgeInsets m_standardPortraitEdgeInsets;
@property(assign, nonatomic) CGRect m_standardPortriatFrame;
@property(assign, nonatomic) __weak MMBarButton* m_btn;
-(void).cxx_destruct;
-(void)setFitInterfaceOrientation:(int)orientation;
-(void)setEnabled:(BOOL)enabled;
@end

