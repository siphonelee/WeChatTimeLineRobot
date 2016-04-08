/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface SearchMatchTip : XXUnknownSuperclass {
	NSString* _key;
	NSString* _searchText;
	NSString* _showPrefix;
	NSString* _showSuffix;
	NSString* _showResult;
	unsigned _location;
	unsigned long _createTime;
	int _matchType;
	int _matchSubType;
	NSMutableArray* _arrKeywordMatchText;
	NSString* _displayNameFullPY;
	BOOL _isSilent;
}
@property(assign, nonatomic) BOOL isSilent;
@property(retain, nonatomic) NSString* displayNameFullPY;
@property(retain, nonatomic) NSMutableArray* arrKeywordMatchText;
@property(assign, nonatomic) unsigned long createTime;
@property(assign, nonatomic) unsigned location;
@property(assign, nonatomic) int matchSubType;
@property(assign, nonatomic) int matchType;
@property(retain, nonatomic) NSString* showSuffix;
@property(retain, nonatomic) NSString* showPrefix;
@property(retain, nonatomic) NSString* searchText;
@property(retain, nonatomic) NSString* key;
-(void).cxx_destruct;
-(BOOL)isStrongMatch;
-(int)comparePhoneSearchMatchTipSecondLineAscending:(id)ascending;
-(int)comparePhoneSearchMatchTipFirstLineAscending:(id)ascending;
-(int)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)logic;
-(int)compareGroupSearchMatchTipAscendingUseOptimizedLogic:(id)logic;
-(BOOL)groupActiveLogic:(unsigned long)logic;
-(int)compareGroupSearchMatchTipAscending:(id)ascending;
-(int)compareSearchMatchTipSecondLineAscending:(id)ascending;
-(int)compareSearchMatchTipFirstLineAscending:(id)ascending;
-(id)getShowResult;
-(id)init;
@end

