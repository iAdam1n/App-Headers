/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/Lerp.h>

@interface SineLerp : Lerp {

	float _frequency;
	float _amplitude;
	float _cachedXOffset;
	float _cachedYOffset;
	int _cachedXDirection;
	int _cachedYDirection;

}

@property (assign,nonatomic) float frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) float amplitude;                   //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) float cachedXOffset;               //@synthesize cachedXOffset=_cachedXOffset - In the implementation block
@property (assign,nonatomic) float cachedYOffset;               //@synthesize cachedYOffset=_cachedYOffset - In the implementation block
@property (assign,nonatomic) int cachedXDirection;              //@synthesize cachedXDirection=_cachedXDirection - In the implementation block
@property (assign,nonatomic) int cachedYDirection;              //@synthesize cachedYDirection=_cachedYDirection - In the implementation block
-(void)setupWithFrequency:(float)arg1 amplitude:(float)arg2 ;
-(void)setupWithControlPoints:(CGPoint*)arg1 count:(int)arg2 ;
-(CGPoint)lerp:(float)arg1 ;
-(void)setAmplitude:(float)arg1 ;
-(void)cacheDirections;
-(void)setCachedXOffset:(float)arg1 ;
-(void)setCachedYOffset:(float)arg1 ;
-(void)setCachedXDirection:(int)arg1 ;
-(void)setCachedYDirection:(int)arg1 ;
-(int)startQuadrant;
-(float)amplitude;
-(float)cachedXOffset;
-(float)cachedYOffset;
-(int)cachedXDirection;
-(int)cachedYDirection;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
@end

