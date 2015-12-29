//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SKPAudioAsset;

@interface SKPSoundEffectTemplate : NSObject
{
    NSString *_filename;
    NSURL *_url;
    double _startOffset;
    SKPAudioAsset *_audioAsset;
}

@property(readonly, nonatomic) SKPAudioAsset *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(readonly, nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
