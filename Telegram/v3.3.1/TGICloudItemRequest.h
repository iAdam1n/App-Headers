//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMetadataQuery, NSURL;

@interface TGICloudItemRequest : NSObject
{
    NSURL *_url;
    NSMetadataQuery *_query;
    _Bool _completed;
    CDUnknownBlockType _completionBlock;
}

+ (id)requestICloudItemWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)metadataQueryDidFinishGathering:(id)arg1;
- (void)metadataQueryDidUpdate:(id)arg1;

@end
