//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SKPExpressionProtocol.h"

@class NSArray, NSString;

@interface SKPEmoticon : NSObject <NSCoding, NSCopying, SKPExpressionProtocol>
{
    NSString *_emoticonIdentifier;
    NSString *_shortcut;
}

@property(retain, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *emoticonIdentifier; // @synthesize emoticonIdentifier=_emoticonIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)searchStringStartsWith:(id)arg1 inPossibleStrings:(id)arg2;
- (_Bool)searchStringStartsWith:(id)arg1 inString:(id)arg2;
- (unsigned long long)scoreForSearchString:(id)arg1;
@property(readonly, nonatomic) NSArray *shortcuts;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) unsigned long long expressionType;
- (id)imageWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *localizedLongName;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
