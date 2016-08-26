/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSArray, PerformanceTracker;

@interface PerformanceMonitor : ModelObject {

	int _sampleCounter;
	int _changeEventCounter;
	BOOL _isUserSelected;
	BOOL _isBenchmarkUser;
	int _fpsAmountPerChangeEvent;
	int _maxChangeEventAmount;
	NSArray* _viewControllersToMonitor;
	PerformanceTracker* _tracker;

}

@property (assign,nonatomic) BOOL isUserSelected;                             //@synthesize isUserSelected=_isUserSelected - In the implementation block
@property (assign,nonatomic) int fpsAmountPerChangeEvent;                     //@synthesize fpsAmountPerChangeEvent=_fpsAmountPerChangeEvent - In the implementation block
@property (assign,nonatomic) int maxChangeEventAmount;                        //@synthesize maxChangeEventAmount=_maxChangeEventAmount - In the implementation block
@property (nonatomic,retain) NSArray * viewControllersToMonitor;              //@synthesize viewControllersToMonitor=_viewControllersToMonitor - In the implementation block
@property (assign,nonatomic) BOOL isBenchmarkUser;                            //@synthesize isBenchmarkUser=_isBenchmarkUser - In the implementation block
@property (nonatomic,retain) PerformanceTracker * tracker;                    //@synthesize tracker=_tracker - In the implementation block
-(BOOL)isUserSelected;
-(NSArray *)viewControllersToMonitor;
-(void)recordFPS:(float)arg1 ;
-(PerformanceTracker *)tracker;
-(void)setTracker:(PerformanceTracker *)arg1 ;
-(BOOL)isBenchmarkUser;
-(void)setIsBenchmarkUser:(BOOL)arg1 ;
-(void)setIsUserSelected:(BOOL)arg1 ;
-(int)fpsAmountPerChangeEvent;
-(void)setFpsAmountPerChangeEvent:(int)arg1 ;
-(int)maxChangeEventAmount;
-(void)setMaxChangeEventAmount:(int)arg1 ;
-(void)setViewControllersToMonitor:(NSArray *)arg1 ;
-(void)dealloc;
@end
