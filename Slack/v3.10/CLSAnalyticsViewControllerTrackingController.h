/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSAnalyticsViewControllerTrackingDelegate;
@class NSMutableSet;

@interface CLSAnalyticsViewControllerTrackingController : NSObject {

	BOOL _isTracking;
	id<CLSAnalyticsViewControllerTrackingDelegate> _delegate;
	NSMutableSet* _blackListViewControllerClasses;

}

@property (assign,nonatomic,__weak) id<CLSAnalyticsViewControllerTrackingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)replaceMethodImplementationForClass:(Class)arg1 selector:(SEL)arg2 withImplementation:(/*function pointer*/void*)arg3 storingOldImplementation:(/*function pointer*/void**)arg4 ;
+(id)sharedInstance;
-(void)cleanUpUIViewControllerSwizzle;
-(void)setUpUIViewControllerSwizzle;
-(BOOL)isBlacklistedViewControllerClass:(Class)arg1 ;
-(void)disposeSharedInstance;
-(void)addBlackListViewControllerClass:(Class)arg1 ;
-(void)removeBlackListViewControllerClass:(Class)arg1 ;
-(BOOL)shouldLogViewController:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CLSAnalyticsViewControllerTrackingDelegate>)arg1 ;
-(void)dealloc;
-(id<CLSAnalyticsViewControllerTrackingDelegate>)delegate;
-(void)startTracking;
@end
