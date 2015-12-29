//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPSavableUnsizedViewModel.h"

#import "NSCoding.h"
#import "SKPHumanReadableTimestampDelegate.h"

@class NSAttributedString, NSString, SKPArrayFilter, SKPBaseCall<SKPCalling>, SKPHumanReadableTimestamp;

@interface SKPConversationViewControllerViewModel : SKPSavableUnsizedViewModel <SKPHumanReadableTimestampDelegate, NSCoding>
{
    _Bool _isObservingCallService;
    _Bool _isInvalidated;
    SKPBaseCall<SKPCalling> *_call;
    long long _presenceStatus;
    unsigned long long _numberOfUnreadMessages;
    NSString *_conversationTitle;
    NSString *_conversationTitleAccessibilityLabel;
    NSString *_conversationPrompt;
    NSString *_conversationPromptAccessibilityLabel;
    NSString *_conversationIdentity;
    SKPArrayFilter *_filterForConversationIdentity;
    SKPHumanReadableTimestamp *_humanReadableTimeStamp;
}

+ (id)observedKeyPaths;
+ (id)conversationKeyPathsAffectingValueOfNumberOfNumberMessages;
+ (id)conversationKeyPathsAffectingValueOfPrompt;
+ (id)conversationKeyPathsAffectingValueOfTitleAccessibilityLabel;
+ (id)conversationKeyPathsAffectingValueOfTitle;
+ (id)conversationKeyPathsAffectingValueOfPresenceStatus;
+ (id)keyPathsForValuesAffectingPromptAccessibilityLabel;
+ (id)keyPathsForValuesAffectingPrompt;
+ (id)keyPathsForValuesAffectingTitleAccessibilityLabel;
+ (id)keyPathsForValuesAffectingTitleAttributedString;
+ (long long)encodingVersion;
+ (id)viewModelWithConversationIdentity:(id)arg1;
@property(retain, nonatomic) SKPHumanReadableTimestamp *humanReadableTimeStamp; // @synthesize humanReadableTimeStamp=_humanReadableTimeStamp;
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(retain, nonatomic) SKPArrayFilter *filterForConversationIdentity; // @synthesize filterForConversationIdentity=_filterForConversationIdentity;
@property(nonatomic) _Bool isObservingCallService; // @synthesize isObservingCallService=_isObservingCallService;
@property(copy, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
@property(copy, nonatomic) NSString *conversationPromptAccessibilityLabel; // @synthesize conversationPromptAccessibilityLabel=_conversationPromptAccessibilityLabel;
@property(copy, nonatomic) NSString *conversationPrompt; // @synthesize conversationPrompt=_conversationPrompt;
@property(copy, nonatomic) NSString *conversationTitleAccessibilityLabel; // @synthesize conversationTitleAccessibilityLabel=_conversationTitleAccessibilityLabel;
@property(copy, nonatomic) NSString *conversationTitle; // @synthesize conversationTitle=_conversationTitle;
@property(nonatomic) unsigned long long numberOfUnreadMessages; // @synthesize numberOfUnreadMessages=_numberOfUnreadMessages;
@property(nonatomic) long long presenceStatus; // @synthesize presenceStatus=_presenceStatus;
@property(retain, nonatomic) SKPBaseCall<SKPCalling> *call; // @synthesize call=_call;
- (void).cxx_destruct;
- (void)humanReadableTimestampDidUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshDueToChangeInModelProperty:(id)arg1;
- (void)updateConversationPrompt;
- (void)updatePresenceStatus;
- (id)conversation;
@property(readonly, copy, nonatomic) NSString *promptAccessibilityLabel;
@property(readonly, copy, nonatomic) NSString *prompt;
@property(readonly, copy, nonatomic) NSString *titleAccessibilityLabel;
@property(readonly, copy, nonatomic) NSAttributedString *titleAttributedString;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
