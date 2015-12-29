//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPMessage.h"

@class NSArray, NSAttributedString, NSDictionary, SKPNSAttributedTextMonitor;

@interface SKPTextChatMessage : SKPMessage
{
    NSArray *_bodyComponents;
    NSDictionary *_URLPreviews;
    SKPNSAttributedTextMonitor *_attributedBodyTextMonitor;
    SKPNSAttributedTextMonitor *_attributedOriginalBodyTextMonitor;
    SKPNSAttributedTextMonitor *_attributedSummaryTextMonitor;
}

+ (id)lazyLoadedPropertiesKeypaths;
+ (id)keyPathsForValuesAffectingURLPreviews;
+ (id)keyPathsForValuesAffectingAttributedOriginalBody;
+ (id)keyPathsForValuesAffectingAttributedBody;
+ (id)keyPathsForValuesAffectingAttributedSummary;
@property(retain, nonatomic) SKPNSAttributedTextMonitor *attributedSummaryTextMonitor; // @synthesize attributedSummaryTextMonitor=_attributedSummaryTextMonitor;
@property(retain, nonatomic) SKPNSAttributedTextMonitor *attributedOriginalBodyTextMonitor; // @synthesize attributedOriginalBodyTextMonitor=_attributedOriginalBodyTextMonitor;
@property(retain, nonatomic) SKPNSAttributedTextMonitor *attributedBodyTextMonitor; // @synthesize attributedBodyTextMonitor=_attributedBodyTextMonitor;
@property(retain, nonatomic) NSDictionary *URLPreviews; // @synthesize URLPreviews=_URLPreviews;
@property(copy, nonatomic) NSArray *bodyComponents; // @synthesize bodyComponents=_bodyComponents;
- (void).cxx_destruct;
- (id)otherPropertyKeysToIncludeInDebugDescription;
- (long long)proximityToOtherMessageItem:(id)arg1;
- (void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(_Bool)arg3;
- (id)fetchURLPreviewsOperation;
- (_Bool)flushLazyProperty:(id)arg1;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (id)localizedLikeStringWithName:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedOriginalBody;
@property(readonly, nonatomic) NSAttributedString *attributedBody;
- (id)attributedSummary;
- (long long)type;
- (id)initWithAleObject:(id)arg1;
- (id)init;

@end
