//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGLiveUploadPart : NSObject
{
    int _partIndex;
    unsigned long long _offset;
    unsigned long long _length;
    id _cancelToken;
}

@property(retain, nonatomic) id cancelToken; // @synthesize cancelToken=_cancelToken;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) int partIndex; // @synthesize partIndex=_partIndex;
- (void).cxx_destruct;

@end
