//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SSignal : NSObject
{
    CDUnknownBlockType _generator;
}

- (void).cxx_destruct;
- (id)trace:(id)arg1;
- (id)startWithNext:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2;
- (id)startWithNext:(CDUnknownBlockType)arg1;
- (id)startWithNext:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (id)startWithNext:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3 traceName:(id)arg4;
- (id)initWithGenerator:(CDUnknownBlockType)arg1;

@end
