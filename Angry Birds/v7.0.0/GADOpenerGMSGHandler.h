/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADGMSGHandler.h>

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

