/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CRThrottle : NSObject {

	unsigned long long _maxTokens;
	double _timeWindow;
	double _tokensAccumulated;
	NSDate* _lastEventTime;

}

@property (assign,nonatomic) unsigned long long maxTokens;              //@synthesize maxTokens=_maxTokens - In the implementation block
@property (assign,nonatomic) double timeWindow;                         //@synthesize timeWindow=_timeWindow - In the implementation block
@property (assign,nonatomic) double tokensAccumulated;                  //@synthesize tokensAccumulated=_tokensAccumulated - In the implementation block
@property (nonatomic,retain) NSDate * lastEventTime;                    //@synthesize lastEventTime=_lastEventTime - In the implementation block
-(id)initWithMaxEvents:(unsigned long long)arg1 perUnitTime:(double)arg2 ;
-(BOOL)tryEvent;
-(unsigned long long)maxTokens;
-(void)setMaxTokens:(unsigned long long)arg1 ;
-(double)timeWindow;
-(void)setTimeWindow:(double)arg1 ;
-(double)tokensAccumulated;
-(void)setTokensAccumulated:(double)arg1 ;
-(NSDate *)lastEventTime;
-(void)setLastEventTime:(NSDate *)arg1 ;
@end

