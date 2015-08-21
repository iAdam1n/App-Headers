/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSDictionary, NSSet;

@interface FBMBatchThreadSummaryResponse : FBValueObject <NSCopying> {

	NSDictionary* _singleFilterToThreadSummaryMapping;
	NSSet* _filtersWhoseThreadSummariesDoNotExist;

}

@property (nonatomic,copy,readonly) NSDictionary * singleFilterToThreadSummaryMapping;              //@synthesize singleFilterToThreadSummaryMapping=_singleFilterToThreadSummaryMapping - In the implementation block
@property (nonatomic,copy,readonly) NSSet * filtersWhoseThreadSummariesDoNotExist;                  //@synthesize filtersWhoseThreadSummariesDoNotExist=_filtersWhoseThreadSummariesDoNotExist - In the implementation block
-(id)initWithSingleFilterToThreadSummaryMapping:(id)arg1 filtersWhoseThreadSummariesDoNotExist:(id)arg2 ;
-(NSDictionary *)singleFilterToThreadSummaryMapping;
-(NSSet *)filtersWhoseThreadSummariesDoNotExist;
@end

