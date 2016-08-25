/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SFSafariViewControllerDelegate.h>

@protocol IFlurryAdViewController, IFlurryAdExternalViewController, IFlurryAd;
@class UIViewController, NSString;

@interface FlurryAdFullscreenController : NSObject <SFSafariViewControllerDelegate> {

	BOOL _presentOnLoadCompletion;
	BOOL _loadedSomething;
	UIViewController*<IFlurryAdViewController> adViewController;
	id<IFlurryAdExternalViewController> extAdViewController;
	id<IFlurryAd> _ad;

}

@property (nonatomic,retain) UIViewController*<IFlurryAdViewController> adViewController; 
@property (nonatomic,retain) id<IFlurryAdExternalViewController> extAdViewController; 
@property (assign,nonatomic) BOOL presentOnLoadCompletion;                                             //@synthesize presentOnLoadCompletion=_presentOnLoadCompletion - In the implementation block
@property (assign,nonatomic) BOOL loadedSomething;                                                     //@synthesize loadedSomething=_loadedSomething - In the implementation block
@property (nonatomic,retain) id<IFlurryAd> ad;                                                         //@synthesize ad=_ad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)setAd:(id<IFlurryAd>)arg1 ;
-(void)setLoadedSomething:(BOOL)arg1 ;
-(BOOL)loadedSomething;
-(UIViewController*<IFlurryAdViewController>)adViewController;
-(BOOL)presentOnLoadCompletion;
-(void)setPresentOnLoadCompletion:(BOOL)arg1 ;
-(void)setAdViewController:(UIViewController*<IFlurryAdViewController>)arg1 ;
-(id<IFlurryAdExternalViewController>)extAdViewController;
-(void)setExtAdViewController:(id<IFlurryAdExternalViewController>)arg1 ;
-(void)removeExtAdWindowForAd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeWindowForAd:(id)arg1 ;
-(BOOL)showFullscreenViewForAd:(id)arg1 ;
-(BOOL)showFullscreenViewForAd:(id)arg1 withRequest:(id)arg2 presentOnLoadCompletion:(BOOL)arg3 onViewController:(id)arg4 ;
-(BOOL)showFullscreenViewForVideoAd:(id)arg1 ;
-(void)removeWindowsForAd:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id<IFlurryAd>)ad;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end

