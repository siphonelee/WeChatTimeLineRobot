/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString, LbsLocation, BaseRequest;

@interface GetPoiCityRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* administrativeAreaLevel1;
@property(retain, nonatomic) NSString* administrativeAreaLevel2;
@property(retain, nonatomic) NSString* administrativeAreaLevel3;
@property(retain, nonatomic) NSString* sublocality;
@property(retain, nonatomic) NSString* locality;
@property(retain, nonatomic) NSString* srcCity;
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) LbsLocation* loc;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

