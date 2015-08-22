/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSDictionary;

@interface FBColdStartReasonPipelineComputation : FBValueObject <NSCopying> {

	BOOL _shouldLog;
	NSString* _reason;
	NSDictionary* _loggingContext;

}

@property (nonatomic,copy,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * loggingContext;              //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldLog;                                  //@synthesize shouldLog=_shouldLog - In the implementation block
-(id)initWithReason:(id)arg1 loggingContext:(id)arg2 shouldLog:(BOOL)arg3 ;
-(NSDictionary *)loggingContext;
-(NSString *)reason;
-(BOOL)shouldLog;
@end
