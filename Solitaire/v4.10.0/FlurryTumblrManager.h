/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, IFlurryTumblrShareParameters;
@class NSObject, UIViewController;

@interface FlurryTumblrManager : NSObject {

	BOOL _safariViewControllerEnabled;
	NSObject*<OS_dispatch_queue> _queue;
	id<IFlurryTumblrShareParameters> _lastSeenParameters;
	UIViewController* _rvc;
	long long _rvcPresentationSytle;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<IFlurryTumblrShareParameters> lastSeenParameters;              //@synthesize lastSeenParameters=_lastSeenParameters - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rvc;                                    //@synthesize rvc=_rvc - In the implementation block
@property (assign,nonatomic) long long rvcPresentationSytle;                                   //@synthesize rvcPresentationSytle=_rvcPresentationSytle - In the implementation block
@property (assign,nonatomic) BOOL safariViewControllerEnabled;                                 //@synthesize safariViewControllerEnabled=_safariViewControllerEnabled - In the implementation block
+(id)sharedInstance;
-(id)tumblrLogo;
-(void)setRvc:(UIViewController *)arg1 ;
-(UIViewController *)rvc;
-(void)setConsumerKey:(id)arg1 consumerSecret:(id)arg2 ;
-(void)setConsumerKey:(id)arg1 consumerSecret:(id)arg2 consumerScheme:(id)arg3 ;
-(id)getConsumerScheme;
-(void)share:(id)arg1 presentingViewController:(id)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)safariViewControllerEnabled;
-(void)setSafariViewControllerEnabled:(BOOL)arg1 ;
-(void)setLastSeenParameters:(id<IFlurryTumblrShareParameters>)arg1 ;
-(id<IFlurryTumblrShareParameters>)lastSeenParameters;
-(void)presentLoadingScreenOnController:(id)arg1 ;
-(void)authenticateAndThenShare:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)handlePostError:(id)arg1 callback:(/*^block*/id)arg2 callbackCode:(int)arg3 ;
-(void)handleAuthenticationError:(id)arg1 callback:(/*^block*/id)arg2 callbackCode:(int)arg3 ;
-(void)removeLoadingScreen;
-(void)sendPostErrorCallback:(/*^block*/id)arg1 error:(id)arg2 callbackCode:(int)arg3 ;
-(void)sendAuthErrorCallback:(/*^block*/id)arg1 error:(id)arg2 callbackCode:(int)arg3 ;
-(long long)rvcPresentationSytle;
-(void)setRvcPresentationSytle:(long long)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
