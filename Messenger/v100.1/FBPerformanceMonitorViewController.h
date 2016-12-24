/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBPerformanceMetricProvider;
@class FBPerformanceMonitorGraphView, UIView, UILabel, UISegmentedControl, UIScrollView, UITextView, NSTimer, NSMutableArray, NSObject, FBPerformanceMonitorView, NSString;

@interface FBPerformanceMonitorViewController : UIViewController <UIScrollViewDelegate> {

	FBPerformanceMonitorGraphView* _graphView;
	UIView* _hostView;
	CGSize _monitorSize;
	UILabel* _contentLabel;
	UILabel* _leftArrow;
	UILabel* _rightArrow;
	UISegmentedControl* _segmentedControl;
	UIScrollView* _segmentedControlScrollView;
	UITextView* _contentView;
	NSTimer* _updateTimer;
	NSMutableArray* _metricProviders;
	NSObject*<FBPerformanceMetricProvider> _currentMetricProvider;

}

@property (assign,nonatomic,__weak) NSObject*<FBPerformanceMetricProvider> currentMetricProvider;              //@synthesize currentMetricProvider=_currentMetricProvider - In the implementation block
@property (nonatomic,retain) FBPerformanceMonitorView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshView;
-(void)attachToView:(id)arg1 ;
-(void)detachFromView;
-(void)registerMetricProvider:(id)arg1 ;
-(void)unregisterAllMetricProviders;
-(void)unregisterMetricProvider:(id)arg1 ;
-(void)_didSelectSegment;
-(void)_stopRefresh;
-(void)setCurrentMetricProvider:(NSObject*<FBPerformanceMetricProvider>)arg1 ;
-(NSObject*<FBPerformanceMetricProvider>)currentMetricProvider;
-(void)_reattachToHostView;
-(void)_updateSelector;
-(void)_moveToNextMetric;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_startRefresh;
@end
