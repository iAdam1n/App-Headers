/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class FBMBatchThreadResponse, NSSet;

@interface FBMBatchThreadHandlerResponse : FBValueObject <NSCopying> {

	FBMBatchThreadResponse* _consumerResponse;
	NSSet* _filtersStillNeedingFetch;

}

@property (nonatomic,copy,readonly) FBMBatchThreadResponse * consumerResponse;              //@synthesize consumerResponse=_consumerResponse - In the implementation block
@property (nonatomic,copy,readonly) NSSet * filtersStillNeedingFetch;                       //@synthesize filtersStillNeedingFetch=_filtersStillNeedingFetch - In the implementation block
-(id)initWithConsumerResponse:(id)arg1 filtersStillNeedingFetch:(id)arg2 ;
-(FBMBatchThreadResponse *)consumerResponse;
-(NSSet *)filtersStillNeedingFetch;
@end

