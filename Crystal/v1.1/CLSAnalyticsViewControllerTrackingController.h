/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
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
-(void)disposeSharedInstance;
-(void)addBlackListViewControllerClass:(Class)arg1 ;
-(void)removeBlackListViewControllerClass:(Class)arg1 ;
-(BOOL)shouldLogViewController:(id)arg1 ;
-(void)setDelegate:(id<CLSAnalyticsViewControllerTrackingDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLSAnalyticsViewControllerTrackingDelegate>)delegate;
@end
