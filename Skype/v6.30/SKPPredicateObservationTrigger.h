/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSTimer;

@interface SKPPredicateObservationTrigger : NSObject {

	BOOL _isObserving;
	id _observedObject;
	NSDictionary* _trackedKeyPathsAndPredicates;
	/*^block*/id _completionBlock;
	double _timeout;
	NSTimer* _timer;
	long long _state;

}

@property (assign,nonatomic) BOOL isObserving;                                           //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,retain) id observedObject;                                          //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackedKeyPathsAndPredicates;              //@synthesize trackedKeyPathsAndPredicates=_trackedKeyPathsAndPredicates - In the implementation block
@property (nonatomic,copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double timeout;                                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                            //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
-(id)initWithObject:(id)arg1 trackedKeyPathsAndPredicates:(id)arg2 timeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(NSDictionary *)trackedKeyPathsAndPredicates;
-(void)didTimeout:(id)arg1 ;
-(void)evaluateResult;
-(void)notifyWithResult:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)observedObject;
-(void)setTimeout:(double)arg1 ;
-(void)setObservedObject:(id)arg1 ;
-(BOOL)isObserving;
-(double)timeout;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)stopObserving;
@end
