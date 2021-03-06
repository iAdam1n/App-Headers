//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSCoding.h"

@class NSString;

@interface TGInstagramDataContentProperty : NSObject <PSCoding>
{
    NSString *_imageUrl;
    NSString *_mediaId;
}

@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithImageUrl:(id)arg1 mediaId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

