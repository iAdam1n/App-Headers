//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "TGRawHttpActor.h"

@class NSString;

@interface TGImageSearchActor : TGActor <TGRawHttpActor>
{
    int _offset;
    NSString *_currentQuery;
    NSString *_currentArguments;
}

+ (id)genericPath;
@property(retain, nonatomic) NSString *currentArguments; // @synthesize currentArguments=_currentArguments;
@property(retain, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) int offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)httpRequestFailed:(id)arg1;
- (void)httpRequestSuccess:(id)arg1 response:(id)arg2;
- (void)storeCachedResponse:(id)arg1 arguments:(id)arg2 response:(id)arg3;
- (id)cachedResponse:(id)arg1 arguments:(id)arg2;
- (id)cachePath;
- (id)parseImageSize:(id)arg1 size:(struct CGSize *)arg2 length:(int *)arg3;
- (void)execute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
