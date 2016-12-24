/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <SportyTrader/SOMAAdDownloading.h>
#import <SportyTrader/SOMABannerViewDelegate.h>

@protocol SOMABannerViewDelegate;
@class UIButton, SOMABannerView, UIColor;

@interface SOMAToastBannerView : UIView <SOMAAdDownloading, SOMABannerViewDelegate> {

	UIButton* mCloseButton;
	SOMABannerView* mBannerView;
	id addownloader_success_observer;
	id addownloader_failure_observer;
	id<SOMABannerViewDelegate> delegate;

}

@property (assign,nonatomic) id<SOMABannerViewDelegate> delegate; 
@property (nonatomic,retain) UIColor * backgroundColor; 
-(id)adSettings;
-(void)setAutoReloadEnabled:(BOOL)arg1 ;
-(void)asyncLoadNewBannerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocationUpdateEnabled:(BOOL)arg1 ;
-(void)asyncLoadNewBanner;
-(void)setAdSettings:(id)arg1 ;
-(BOOL)autoReloadEnabled;
-(long long)autoReloadFrequency;
-(void)setAutoReloadFrequency:(long long)arg1 ;
-(BOOL)isLocationUpdateEnabled;
-(void)landingPageHasBeenClosed;
-(void)landingPageWillBeDisplayed;
-(void)hideToast;
-(void)showToast;
-(void)endShowToastAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)endHideToastAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SOMABannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SOMABannerViewDelegate>)delegate;
@end
