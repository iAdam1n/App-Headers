/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPerformanceGraphMetricProvider;
@class NSObject;

@interface FBPerformanceMonitorGraphView : UIView {

	NSObject*<FBPerformanceGraphMetricProvider> _metric;

}

@property (assign,nonatomic) NSObject*<FBPerformanceGraphMetricProvider> metric;              //@synthesize metric=_metric - In the implementation block
-(void)drawValues:(id)arg1 yMin:(double)arg2 yMax:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMetric:(NSObject*<FBPerformanceGraphMetricProvider>)arg1 ;
-(NSObject*<FBPerformanceGraphMetricProvider>)metric;
@end
