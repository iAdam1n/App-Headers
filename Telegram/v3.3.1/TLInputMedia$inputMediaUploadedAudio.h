//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLInputMedia.h"

@class NSString, TLInputFile;

@interface TLInputMedia$inputMediaUploadedAudio : TLInputMedia
{
    int _duration;
    TLInputFile *_file;
    NSString *_mime_type;
}

@property(retain, nonatomic) NSString *mime_type; // @synthesize mime_type=_mime_type;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TLInputFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end
