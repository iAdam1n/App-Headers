/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
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
-(int)samplingRate;
-(void)setChosenToBeSampledPostCreation:(BOOL)arg1 ;
-(BOOL)chosenToBeSampledPostCreation;
-(BOOL)sampled;
-(id)initWithServerTraceID:(id)arg1 description:(id)arg2 threshold:(unsigned long long)arg3 sampled:(BOOL)arg4 samplingRate:(int)arg5 ;
-(unsigned long long)traceThreshold;
-(NSString *)traceDescription;
-(NSString *)serverTraceID;
@end
