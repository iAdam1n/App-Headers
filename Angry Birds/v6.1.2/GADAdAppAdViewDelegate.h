/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADAdViewDelegate.h>

@class GADAdAppViewController;

@interface GADAdAppAdViewDelegate : GADAdViewDelegate {

	GADAdAppViewController* _webAppViewController;

}

@property (assign,nonatomic,__weak) GADAdAppViewController * webAppViewController;              //@synthesize webAppViewController=_webAppViewController - In the implementation block
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)adViewDidStartLoad:(id)arg1 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(GADAdAppViewController *)webAppViewController;
-(id)initWithAdAppViewController:(id)arg1 ;
-(void)setWebAppViewController:(GADAdAppViewController *)arg1 ;
@end
