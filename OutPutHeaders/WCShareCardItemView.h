/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class UIView, WCShareCardData, NSString, NSArray;

@interface WCShareCardItemView : MMUIView {
	BOOL _bForCard;
	NSArray* _shareCardList;
	WCShareCardData* _curDisplayShareCard;
	UIView* _cardBgView;
	UIView* _shadowView;
	UIView* _coverView;
	UIView* _cardBgContainerView;
	NSString* _shareUsernameText;
}
+(id)genLocalCityEmptyTipsCellContentView;
+(float)LocalCityShareCardEmptyTipsHeight;
+(float)ShareCardGatherViewHeight;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted;
-(id)genTagItemViewWithTagItem:(id)tagItem;
-(id)genTagListView;
-(id)genLogoView;
-(id)genCardBgView;
-(BOOL)genShareUserNameAndDetectIfMoreThan2ShareUsr;
-(void)initViewForShareCard;
-(void)layoutSubviews;
-(id)initWithShareCard:(id)shareCard;
@end

