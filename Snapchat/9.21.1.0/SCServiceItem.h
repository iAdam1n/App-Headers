//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCServiceItem : NSObject
{
    id <SCService> _service;
    id <SCServiceNotifier> _notifier;
}

@property(retain, nonatomic) id <SCServiceNotifier> notifier; // @synthesize notifier=_notifier;
@property(readonly, nonatomic) id <SCService> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)initWithService:(id)arg1;

@end
