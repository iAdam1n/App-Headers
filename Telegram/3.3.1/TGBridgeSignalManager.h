//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TGBridgeSignalManager : NSObject
{
    int _lock;
    NSMutableDictionary *_disposables;
}

- (void).cxx_destruct;
- (void)haltAllSignals;
- (void)haltSignalForKey:(id)arg1;
- (_Bool)startSignalForKey:(id)arg1 producer:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
