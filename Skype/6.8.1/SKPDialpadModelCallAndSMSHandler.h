//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPDialpadModelCallAndSMSDelegate.h"

@class NSString;

@interface SKPDialpadModelCallAndSMSHandler : NSObject <SKPDialpadModelCallAndSMSDelegate>
{
}

- (void)dialpadModel:(id)arg1 createSMSConversationDidFailWithError:(id)arg2;
- (void)dialpadModel:(id)arg1 callDidFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
