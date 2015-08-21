/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TIPImagePipeline, NSArray;

@interface TIPImagePipelineInspectionResult : NSObject {

	TIPImagePipeline* _imagePipeline;
	NSArray* _completeRenderedEntries;
	NSArray* _completeMemoryEntries;
	NSArray* _completeDiskEntries;
	NSArray* _partialMemoryEntries;
	NSArray* _partialDiskEntries;
	unsigned long long _inMemoryBytesUsed;
	unsigned long long _onDiskBytesUsed;

}

@property (nonatomic,readonly) TIPImagePipeline * imagePipeline;                  //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (nonatomic,readonly) NSArray * completeRenderedEntries;                 //@synthesize completeRenderedEntries=_completeRenderedEntries - In the implementation block
@property (nonatomic,readonly) NSArray * completeMemoryEntries;                   //@synthesize completeMemoryEntries=_completeMemoryEntries - In the implementation block
@property (nonatomic,readonly) NSArray * completeDiskEntries;                     //@synthesize completeDiskEntries=_completeDiskEntries - In the implementation block
@property (nonatomic,readonly) NSArray * partialMemoryEntries;                    //@synthesize partialMemoryEntries=_partialMemoryEntries - In the implementation block
@property (nonatomic,readonly) NSArray * partialDiskEntries;                      //@synthesize partialDiskEntries=_partialDiskEntries - In the implementation block
@property (nonatomic,readonly) unsigned long long inMemoryBytesUsed;              //@synthesize inMemoryBytesUsed=_inMemoryBytesUsed - In the implementation block
@property (nonatomic,readonly) unsigned long long onDiskBytesUsed;                //@synthesize onDiskBytesUsed=_onDiskBytesUsed - In the implementation block
-(id)initWithImagePipeline:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)addEntries:(id)arg1 ;
-(TIPImagePipeline *)imagePipeline;
-(NSArray *)completeRenderedEntries;
-(NSArray *)completeMemoryEntries;
-(NSArray *)completeDiskEntries;
-(NSArray *)partialMemoryEntries;
-(NSArray *)partialDiskEntries;
-(unsigned long long)inMemoryBytesUsed;
-(unsigned long long)onDiskBytesUsed;
@end

