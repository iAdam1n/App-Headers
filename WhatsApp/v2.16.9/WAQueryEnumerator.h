/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMetadataQuery, NSMutableArray;

@interface WAQueryEnumerator : NSEnumerator {

	NSMetadataQuery* _query;
	unsigned long long _count;
	unsigned long long _index;
	NSMutableArray* _validators;

}

@property (nonatomic,retain) NSMetadataQuery * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long index;                   //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * validators;              //@synthesize validators=_validators - In the implementation block
-(void)ignoreDirectories;
-(void)addFileIncluder:(/*^block*/id)arg1 ;
-(void)addFileValidator:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(NSMetadataQuery *)query;
-(id)nextObject;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)validators;
-(id)initWithQuery:(id)arg1 ;
@end

