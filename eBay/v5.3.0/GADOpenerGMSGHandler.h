/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADGMSGHandler.h>

@class GADOpener;

@interface GADOpenerGMSGHandler : GADGMSGHandler {

	GADOpener* _opener;

}

@property (nonatomic,retain) GADOpener * opener;              //@synthesize opener=_opener - In the implementation block
+(id)actionBlockDictionary;
+(id)subActionBlockDictionary;
-(void)setOpener:(GADOpener *)arg1 ;
-(GADOpener *)opener;
-(id)initWithOpener:(id)arg1 ;
-(void)adView:(id)arg1 didReceiveClickNotification:(id)arg2 ;
-(void)adView:(id)arg1 didReceiveOpenNotification:(id)arg2 ;
-(void)adView:(id)arg1 fetchInAppStore:(id)arg2 ;
-(void)adView:(id)arg1 actionOpenInAppStore:(id)arg2 ;
-(void)adView:(id)arg1 actionOpenInAppPurchase:(id)arg2 ;
-(void)adView:(id)arg1 actionOpenBrowser:(id)arg2 ;
-(void)adView:(id)arg1 actionOpenWebApp:(id)arg2 ;
-(void)adView:(id)arg1 actionExpand:(id)arg2 ;
-(void)adView:(id)arg1 actionOpenApp:(id)arg2 ;
-(id)URLFromParams:(id)arg1 ;
-(unsigned long long)orientationFromParams:(id)arg1 ;
-(BOOL)shouldUseCustomClose:(id)arg1 ;
@end
