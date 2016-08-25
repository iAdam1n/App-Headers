/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL, NSString;

@interface FBAdDataModel : NSObject {

	NSArray* _detectionStrings;
	long long _invalidationBehavior;
	NSURL* _invalidationReportUrl;
	NSString* _requestId;
	NSArray* _experiments;

}

@property (nonatomic,copy,readonly) NSArray * detectionStrings;                 //@synthesize detectionStrings=_detectionStrings - In the implementation block
@property (nonatomic,readonly) long long invalidationBehavior;                  //@synthesize invalidationBehavior=_invalidationBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSURL * invalidationReportUrl;              //@synthesize invalidationReportUrl=_invalidationReportUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestId;                       //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) NSArray * experiments;                           //@synthesize experiments=_experiments - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(long long)invalidationBehaviorFromString:(id)arg1 ;
-(long long)invalidationBehavior;
-(NSArray *)detectionStrings;
-(NSURL *)invalidationReportUrl;
-(NSArray *)experiments;
-(id)init;
-(BOOL)isValid;
-(NSString *)requestId;
-(id)initWithMetadata:(id)arg1 ;
@end

