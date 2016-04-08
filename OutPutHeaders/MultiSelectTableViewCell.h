/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface MultiSelectTableViewCell : XXUnknownSuperclass {
	UIImageView* m_selectedImageView;
	BOOL m_bSelected;
	BOOL m_bNeedOffset;
	BOOL m_bAnimated;
	unsigned long m_iAnimatedCount;
	BOOL m_bIsEditting;
}
@property(assign, nonatomic) BOOL m_bIsEditting;
@property(assign, nonatomic) BOOL m_bNeedOffset;
@property(readonly, assign, nonatomic) BOOL m_bSelected;
-(void).cxx_destruct;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)changeSelectdStatus:(BOOL)status;
-(void)adjustSelectFlagFrameByOffsetY:(float)y;
-(void)adjustSelectFlagFrame:(float)frame;
-(void)adjustSelectFlagFrameInternal;
@end

