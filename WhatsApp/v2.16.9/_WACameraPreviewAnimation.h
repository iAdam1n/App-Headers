/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _WACameraPreviewAnimation : NSObject {

	BOOL _completed;
	/*^block*/id _callback;
	/*^block*/id _completionHandler;
	double _duration;
	double _startTime;

}

@property (nonatomic,copy) id callback;                                      //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(double)startTime;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

