/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaSetAnalyzer : NSObject {

	double* _aspectRatios;
	unsigned long long _count;
	unsigned long long* _frequencies;
	double _dominantAspectRatio;

}

@property (nonatomic,readonly) double dominantAspectRatio;              //@synthesize dominantAspectRatio=_dominantAspectRatio - In the implementation block
-(BOOL)mediaAtIndexShouldAspectFill:(unsigned long long)arg1 ;
-(void)_calculateFrequencies;
-(unsigned long long)_numAspectRatiosWithinEpsilonOf:(double)arg1 ;
-(BOOL)_aspectRatio:(double)arg1 isCloseToAspectRatio:(double)arg2 ;
-(double)dominantAspectRatio;
-(id)initWithAspectRatios:(id)arg1 ;
-(void)dealloc;
@end
