/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class WCCardData, UIView, UIButton;
@protocol WCCardPkgItemViewDelegate;

@interface WCCardPkgItemView : MMUIView {
	BOOL _bSelected;
	BOOL _needSelect;
	int _indexForBatchAdd;
	UIButton* _selectBtn;
	WCCardData* _cardData;
	BOOL _bIsLongPressHandled;
	UIView* _cardBgView;
	UIView* _coverView;
	id<WCCardPkgItemViewDelegate> _delegate;
}
@property(assign, nonatomic) int indexForBatchAdd;
@property(assign, nonatomic) BOOL bSelected;
@property(assign, nonatomic) BOOL needSelect;
@property(assign, nonatomic) __weak id<WCCardPkgItemViewDelegate> delegate;
+(float)CardItemViewTopHeight;
+(float)CardItemViewHeight;
+(float)CardItemViewHeightDynamic:(id)dynamic needSelect:(BOOL)select;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setSelectBtnState;
-(void)onSelectChanged;
-(id)getMaskLabelColor:(unsigned long)color;
-(id)getLogoView:(id)view;
-(id)getCardBgView:(unsigned long)view bgColor:(id)color;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithCardData:(id)cardData;
@end

