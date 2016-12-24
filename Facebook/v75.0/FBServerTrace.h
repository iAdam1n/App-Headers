/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBServerTrace : NSObject {

	BOOL _sampled;
	BOOL _chosenToBeSampledPostCreation;
	int _samplingRate;
	NSString* _serverTraceID;
	NSString* _traceDescription;
	unsigned long long _traceThreshold;

}

@property (assign,nonatomic) BOOL chosenToBeSampledPostCreation;               //@synthesize chosenToBeSampledPostCreation=_chosenToBeSampledPostCreation - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverTraceID;                  //@synthesize serverTraceID=_serverTraceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * traceDescription;               //@synthesize traceDescription=_traceDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long traceThreshold;              //@synthesize traceThreshold=_traceThreshold - In the implementation block
@property (nonatomic,readonly) BOOL sampled;                                   //@synthesize sampled=_sampled - In the implementation block
@property (nonatomic,readonly) int samplingRate;                               //@synthesize samplingRate=_samplingRate - In the implementation block
-(void)setChosenToBeSampledPostCreation:(BOOL)arg1 ;
-(BOOL)chosenToBeSampledPostCreation;
-(BOOL)sampled;
-(id)initWithServerTraceID:(id)arg1 description:(id)arg2 threshold:(unsigned long long)arg3 sampled:(BOOL)arg4 samplingRate:(int)arg5 ;
-(unsigned long long)traceThreshold;
-(NSString *)traceDescription;
-(NSString *)serverTraceID;
-(int)samplingRate;
@end
