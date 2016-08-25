/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
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
-(void)startTracking;
-(void)cleanUpUIViewControllerSwizzle;
-(void)setUpUIViewControllerSwizzle;
-(BOOL)isBlacklistedViewControllerClass:(Class)arg1 ;
-(void)disposeSharedInstance;
-(void)addBlackListViewControllerClass:(Class)arg1 ;
-(void)removeBlackListViewControllerClass:(Class)arg1 ;
-(BOOL)shouldLogViewController:(id)arg1 ;
-(void)setDelegate:(id<CLSAnalyticsViewControllerTrackingDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLSAnalyticsViewControllerTrackingDelegate>)delegate;
@end

