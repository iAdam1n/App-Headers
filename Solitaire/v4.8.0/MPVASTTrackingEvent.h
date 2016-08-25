/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPVASTModel.h>

@class NSString, NSURL, MPVASTDurationOffset;

@interface MPVASTTrackingEvent : MPVASTModel {

	NSString* _eventType;
	NSURL* _URL;
	MPVASTDurationOffset* _progressOffset;

}

@property (nonatomic,copy,readonly) NSString * eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) MPVASTDurationOffset * progressOffset;              //@synthesize progressOffset=_progressOffset - In the implementation block
-(MPVASTDurationOffset *)progressOffset;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)eventType;
@end

