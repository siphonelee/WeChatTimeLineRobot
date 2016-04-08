/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class BrandServiceEnterConversationLogic, CContact, BrandServiceContinueLocationReportLogic;

@interface BrandActionReportLogicController : MMObject {
	CContact* m_contact;
	BrandServiceEnterConversationLogic* m_enterConversationLogic;
	BrandServiceContinueLocationReportLogic* m_continueLocationReporter;
}
@property(retain, nonatomic) BrandServiceEnterConversationLogic* m_enterConversationLogic;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic* m_continueLocationReporter;
@property(retain, nonatomic) CContact* m_contact;
-(void).cxx_destruct;
-(void)resetContinueReportLogic;
-(void)updateContact:(id)contact;
-(void)creatContinueReportLogic;
-(void)createEnterReportLogic;
-(id)initWithContact:(id)contact;
-(void)dealloc;
@end

