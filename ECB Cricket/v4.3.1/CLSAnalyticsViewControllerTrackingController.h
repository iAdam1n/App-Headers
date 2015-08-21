/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)addBlackListViewControllerClass:(Class)arg1 ;
-(void)removeBlackListViewControllerClass:(Class)arg1 ;
-(BOOL)shouldLogViewController:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CLSAnalyticsViewControllerTrackingDelegate>)arg1 ;
-(id)init;
-(id<CLSAnalyticsViewControllerTrackingDelegate>)delegate;
@end

