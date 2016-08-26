//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface TGBridgeStickerPack : NSObject <NSCoding>
{
    _Bool _builtIn;
    NSString *_title;
    NSArray *_documents;
}

@property(readonly, nonatomic) NSArray *documents; // @synthesize documents=_documents;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isBuiltIn) _Bool builtIn; // @synthesize builtIn=_builtIn;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
