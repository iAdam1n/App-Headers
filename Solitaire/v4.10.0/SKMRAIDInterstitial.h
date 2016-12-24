/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SKMRAIDViewDelegate.h>
#import <SolitaireFree/SKMRAIDServiceDelegate.h>

@protocol SKMRAIDInterstitialDelegate, SKMRAIDServiceDelegate;
@class SKMRAIDView, NSArray, UIViewController, UIColor, NSString;

@interface SKMRAIDInterstitial : NSObject <SKMRAIDViewDelegate, SKMRAIDServiceDelegate> {

	BOOL isReady;
	SKMRAIDView* mraidView;
	NSArray* supportedFeatures;
	BOOL _isViewable;
	UIViewController* _rootViewController;
	id<SKMRAIDInterstitialDelegate> _delegate;
	id<SKMRAIDServiceDelegate> _serviceDelegate;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) id<SKMRAIDInterstitialDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<SKMRAIDServiceDelegate> serviceDelegate;                                       //@synthesize serviceDelegate=_serviceDelegate - In the implementation block
@property (assign,setter=setRootViewController:,nonatomic) UIViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,setter=setIsViewable:,getter=isViewable,nonatomic) BOOL isViewable;                          //@synthesize isViewable=_isViewable - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAdReady;
-(void)setIsViewable:(BOOL)arg1 ;
-(BOOL)isViewable;
-(id)initWithSupportedFeatures:(id)arg1 withHtmlData:(id)arg2 withBaseURL:(id)arg3 delegate:(id)arg4 serviceDelegate:(id)arg5 rootViewController:(id)arg6 useExtension:(BOOL)arg7 ;
-(void)mraidServiceOpenBrowserWithUrlString:(id)arg1 ;
-(void)mraidServiceCreateCalendarEventWithEventJSON:(id)arg1 ;
-(void)mraidServicePlayVideoWithUrlString:(id)arg1 ;
-(void)mraidServiceStorePictureWithUrlString:(id)arg1 ;
-(id<SKMRAIDServiceDelegate>)serviceDelegate;
-(void)mraidViewAdReady:(id)arg1 ;
-(void)mraidViewAdFailed:(id)arg1 ;
-(void)mraidViewWillExpand:(id)arg1 ;
-(void)mraidViewDidClose:(id)arg1 ;
-(void)mraidViewNavigate:(id)arg1 withURL:(id)arg2 ;
-(void)setServiceDelegate:(id<SKMRAIDServiceDelegate>)arg1 ;
-(id)init;
-(void)show;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SKMRAIDInterstitialDelegate>)arg1 ;
-(void)dealloc;
-(id<SKMRAIDInterstitialDelegate>)delegate;
-(UIViewController *)rootViewController;
-(void)setRootViewController:(UIViewController *)arg1 ;
@end
