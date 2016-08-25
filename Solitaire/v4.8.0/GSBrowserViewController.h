/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SolitaireFree/GSAdDelegate.h>

@class GSBannerAd, GSBrowserView, NSString;

@interface GSBrowserViewController : UIViewController <GSAdDelegate> {

	GSBannerAd* m_bannerAd;
	GSBannerAd* m_parentAd;
	GSBrowserView* m_browserView;

}

@property (nonatomic,retain) GSBrowserView * browserView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)greystripeBannerDisplayViewController;
-(BOOL)greystripeBannerAutoload;
-(void)greystripeWillDismissModalViewController;
-(void)greystripeDidDismissModalViewController;
-(BOOL)greystripeShouldLogAdID;
-(id)initFromBanner:(id)arg1 withURLString:(id)arg2 hasNavBar:(BOOL)arg3 useCustomClose:(id)arg4 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(GSBrowserView *)browserView;
-(void)setBrowserView:(GSBrowserView *)arg1 ;
@end

