/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPerformanceMonitorViewController;

@interface FBPerformanceMonitor : NSObject {

	FBPerformanceMonitorViewController* _performanceMonitorViewController;

}
+(void)attachPerformanceMonitorToWindow:(id)arg1 ;
+(void)detatchPerformanceMonitorFromWindow;
+(id)performanceMonitor;
+(void)addMetric:(id)arg1 ;
+(void)removeMetric:(id)arg1 ;
+(void)removeAllMetrics:(id)arg1 ;
-(void)_createViewControllerIfNeeded;
-(void)_attachViewControllerToView:(id)arg1 ;
-(void)_destroyViewController;
-(id)init;
@end
