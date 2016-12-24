/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBLikeRequest : FBNetworkerRequest {

	BOOL _unlike;
	NSString* _FBID;
	NSString* _tracking;
	unsigned long long _contentCreationOrigin;

}

@property (nonatomic,copy) NSString * FBID;                                         //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy) NSString * tracking;                                     //@synthesize tracking=_tracking - In the implementation block
@property (assign,getter=isUnlike,nonatomic) BOOL unlike;                           //@synthesize unlike=_unlike - In the implementation block
@property (assign,nonatomic) unsigned long long contentCreationOrigin;              //@synthesize contentCreationOrigin=_contentCreationOrigin - In the implementation block
-(NSString *)FBID;
-(id)initWithFBID:(id)arg1 trackingCodes:(id)arg2 contentCreationOrigin:(unsigned long long)arg3 callbackPerformer:(id)arg4 ;
-(BOOL)isUnlike;
-(id)initWithFBID:(id)arg1 trackingCodes:(id)arg2 callbackPerformer:(id)arg3 ;
-(id)networkRequest;
-(void)setFBID:(NSString *)arg1 ;
-(void)setUnlike:(BOOL)arg1 ;
-(unsigned long long)contentCreationOrigin;
-(void)setContentCreationOrigin:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTracking:(NSString *)arg1 ;
-(NSString *)tracking;
@end
