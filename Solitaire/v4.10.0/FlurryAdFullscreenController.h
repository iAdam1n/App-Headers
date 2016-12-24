/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@protocol IFlurryAdViewController, IFlurryAdExternalViewController, IFlurryAd;
@class UIViewController, NSDate, NSString;

@interface FlurryAdFullscreenController : NSObject <SFSafariViewControllerDelegate> {

	BOOL _presentOnLoadCompletion;
	BOOL _loadedSomething;
	UIViewController*<IFlurryAdViewController> adViewController;
	id<IFlurryAdExternalViewController> extAdViewController;
	id<IFlurryAd> _ad;
	NSDate* _startTimePageLoad;

}

@property (nonatomic,retain) id<IFlurryAdExternalViewController> extAdViewController; 
@property (assign,nonatomic) BOOL presentOnLoadCompletion;                                             //@synthesize presentOnLoadCompletion=_presentOnLoadCompletion - In the implementation block
@property (assign,nonatomic) BOOL loadedSomething;                                                     //@synthesize loadedSomething=_loadedSomething - In the implementation block
@property (nonatomic,retain) id<IFlurryAd> ad;                                                         //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) UIViewController*<IFlurryAdViewController> adViewController; 
@property (nonatomic,retain) NSDate * startTimePageLoad;                                               //@synthesize startTimePageLoad=_startTimePageLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)setAd:(id<IFlurryAd>)arg1 ;
-(void)setAdViewController:(UIViewController*<IFlurryAdViewController>)arg1 ;
-(UIViewController*<IFlurryAdViewController>)adViewController;
-(void)removeWindowsForAd:(id)arg1 ;
-(void)removeExtAdWindowForAd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showFullscreenViewForAd:(id)arg1 withRequest:(id)arg2 presentOnLoadCompletion:(BOOL)arg3 onViewController:(id)arg4 ;
-(void)setLoadedSomething:(BOOL)arg1 ;
-(BOOL)loadedSomething;
-(BOOL)presentOnLoadCompletion;
-(void)setPresentOnLoadCompletion:(BOOL)arg1 ;
-(id<IFlurryAdExternalViewController>)extAdViewController;
-(void)setExtAdViewController:(id<IFlurryAdExternalViewController>)arg1 ;
-(NSDate *)startTimePageLoad;
-(void)setStartTimePageLoad:(NSDate *)arg1 ;
-(void)removeWindowForAd:(id)arg1 ;
-(BOOL)showFullscreenViewForAd:(id)arg1 ;
-(BOOL)showFullscreenViewForVideoAd:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id<IFlurryAd>)ad;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end
