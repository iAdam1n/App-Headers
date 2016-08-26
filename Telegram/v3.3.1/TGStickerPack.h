//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "PSCoding.h"

@class NSArray, NSString;

@interface TGStickerPack : NSObject <NSCoding, PSCoding>
{
    _Bool _hidden;
    int _packHash;
    id <TGStickerPackReference> _packReference;
    NSString *_title;
    NSArray *_stickerAssociations;
    NSArray *_documents;
}

@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) int packHash; // @synthesize packHash=_packHash;
@property(readonly, nonatomic) NSArray *documents; // @synthesize documents=_documents;
@property(readonly, nonatomic) NSArray *stickerAssociations; // @synthesize stickerAssociations=_stickerAssociations;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <TGStickerPackReference> packReference; // @synthesize packReference=_packReference;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPackReference:(id)arg1 title:(id)arg2 stickerAssociations:(id)arg3 documents:(id)arg4 packHash:(int)arg5 hidden:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
