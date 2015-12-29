//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SCPreviewLogger : NSObject
{
    double _viewingTime;
    double _viewingStartTimeInterval;
    _Bool _viewingStarted;
    _Bool _isVideoSnap;
    long long _pickerOpenedCount;
    long long _pickerClosedWithButtonCount;
    long long _pickerClosedWithBackCount;
    long long _emojiAddedCount;
    long long _emojiDeletedCount;
    NSString *_emojiContext;
    double _pickerOpenDuration;
    double _pickerOpenedStart;
    NSMutableDictionary *_emojiFrequency;
}

@property(retain, nonatomic) NSMutableDictionary *emojiFrequency; // @synthesize emojiFrequency=_emojiFrequency;
@property(nonatomic) _Bool isVideoSnap; // @synthesize isVideoSnap=_isVideoSnap;
@property(nonatomic) double pickerOpenedStart; // @synthesize pickerOpenedStart=_pickerOpenedStart;
@property(nonatomic) double pickerOpenDuration; // @synthesize pickerOpenDuration=_pickerOpenDuration;
@property(retain, nonatomic) NSString *emojiContext; // @synthesize emojiContext=_emojiContext;
@property(nonatomic) long long emojiDeletedCount; // @synthesize emojiDeletedCount=_emojiDeletedCount;
@property(nonatomic) long long emojiAddedCount; // @synthesize emojiAddedCount=_emojiAddedCount;
@property(nonatomic) long long pickerClosedWithBackCount; // @synthesize pickerClosedWithBackCount=_pickerClosedWithBackCount;
@property(nonatomic) long long pickerClosedWithButtonCount; // @synthesize pickerClosedWithButtonCount=_pickerClosedWithButtonCount;
@property(nonatomic) long long pickerOpenedCount; // @synthesize pickerOpenedCount=_pickerOpenedCount;
- (void).cxx_destruct;
- (void)logEmojiUsed:(id)arg1;
- (void)logStickerPickerEvent;
- (id)stickerPickerLoggingParameters;
- (double)viewingTime;
- (void)viewingEnded;
- (void)viewingStarted;
- (void)logPreviewScreenshot:(id)arg1;
- (void)logDirectSnapCreate:(id)arg1;
- (id)init;

@end
