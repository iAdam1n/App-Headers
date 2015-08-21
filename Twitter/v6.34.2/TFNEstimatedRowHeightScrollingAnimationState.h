/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNDisplayLink, NSIndexPath;

@interface TFNEstimatedRowHeightScrollingAnimationState : NSObject {

	TFNDisplayLink* _displayLink;
	/*^block*/id _destination;
	/*^block*/id _completion;
	NSIndexPath* _startIndexPath;
	double _startTime;
	double _duration;
	CGPoint _startContentOffset;
	CGPoint _startRowOffset;

}

@property (nonatomic,retain) TFNDisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,copy) id destination;                              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) CGPoint startContentOffset;                //@synthesize startContentOffset=_startContentOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * startIndexPath;              //@synthesize startIndexPath=_startIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint startRowOffset;                    //@synthesize startRowOffset=_startRowOffset - In the implementation block
@property (assign,nonatomic) double startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
-(CGPoint)startContentOffset;
-(void)setStartContentOffset:(CGPoint)arg1 ;
-(NSIndexPath *)startIndexPath;
-(void)setStartIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)startRowOffset;
-(void)setStartRowOffset:(CGPoint)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setDisplayLink:(TFNDisplayLink *)arg1 ;
-(TFNDisplayLink *)displayLink;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(double)startTime;
@end

