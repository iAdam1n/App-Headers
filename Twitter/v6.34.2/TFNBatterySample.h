/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface TFNBatterySample : NSObject {

	float _level;
	double _timestamp;
	long long _state;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float level;                   //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long state;               //@synthesize state=_state - In the implementation block
+(id)sampleFromDictionary:(id)arg1 ;
-(double)timestamp;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setLevel:(float)arg1 ;
-(float)level;
@end
