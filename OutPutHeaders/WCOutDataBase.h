/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCOutDataBase : MMObject {
	WCDataBase* _dbBase;
	WCDataBaseTable* _recentCallTable;
}
-(void).cxx_destruct;
-(BOOL)deleteAllRecentCall;
-(BOOL)deleteRecentCallByPhoneNum:(id)num withCountryCode:(id)countryCode;
-(BOOL)deleteRecentCallById:(int)anId;
-(BOOL)updateRecentCall:(id)call;
-(id)compositeForLastCallItemsAndCountryCodeUseCountDic;
-(id)arrayForLastCallItem;
-(id)dicFromPhoneNumToLastCallTime;
-(id)dicFromCountryCodeToCount;
-(id)selectRecentCallForPhoneNum:(id)phoneNum withCountryCode:(id)countryCode limit:(unsigned long)limit;
-(int)insertCall:(id)call;
-(unsigned long)getRecentCallCount;
-(id)init;
@end

