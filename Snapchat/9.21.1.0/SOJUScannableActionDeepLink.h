//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUScannableActionDeepLink.h"

@class NSString, SOJUScannableDeepLinkPostInfo;

@interface SOJUScannableActionDeepLink : NSObject <SOJUScannableActionDeepLink>
{
    NSString *_header;
    NSString *_byline;
    NSString *_iconUrl;
    NSString *_url;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSString *_status;
    SOJUScannableDeepLinkPostInfo *_postInfo;
}

@property(readonly, copy, nonatomic) SOJUScannableDeepLinkPostInfo *postInfo; // @synthesize postInfo=_postInfo;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 byline:(id)arg2 iconUrl:(id)arg3 url:(id)arg4 primaryColor:(id)arg5 secondaryColor:(id)arg6 status:(id)arg7 postInfo:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
