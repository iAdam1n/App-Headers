//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGAddressBook : NSObject
{
    void *_addressBook;
    int _changeKey;
    CDUnknownBlockType _changed;
}

- (void).cxx_destruct;
- (id)records;
- (void)dealloc;
- (void)setChanged:(CDUnknownBlockType)arg1;
- (void)requestAccess:(CDUnknownBlockType)arg1;
- (id)init;

@end
