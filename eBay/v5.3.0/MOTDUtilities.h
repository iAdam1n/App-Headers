/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, EBNCacheManager;

@interface MOTDUtilities : NSObject {

	UIViewController* ownerController;
	EBNCacheManager* cacheManager;
	double motdDisplayInterval;

}

@property (nonatomic,retain) UIViewController * ownerController; 
+(BOOL)shouldCheckForMoTD;
+(void)updateLastCheckTime;
+(void)showAlertMessagesForTheDay;
+(void)showAllMessagesForTheDayWithOwnerController:(id)arg1 ;
-(void)motdAlertRequestThreadFinish:(id)arg1 ;
-(void)setOwnerController:(UIViewController *)arg1 ;
-(void)showAllMessagesRequestThreadFinish:(id)arg1 ;
-(id)getMOTDHistoryForMessageID:(id)arg1 ;
-(void)setMOTDHistory:(id)arg1 forMessageID:(id)arg2 ;
-(BOOL)shouldShowMessage:(id)arg1 ;
-(void)markMessageAsShown:(id)arg1 ;
-(UIViewController *)ownerController;
-(id)init;
@end

