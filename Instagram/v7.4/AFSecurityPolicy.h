/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface AFSecurityPolicy : NSObject {

	BOOL _allowInvalidCertificates;
	unsigned long long _SSLPinningMode;
	NSArray* _pinnedCertificates;
	NSArray* _pinnedPublicKeys;

}

@property (assign,setter=SLPinningMode,nonatomic) unsigned long long SSLPinningMode;              //@synthesize SSLPinningMode=_SSLPinningMode - In the implementation block
@property (nonatomic,retain) NSArray * pinnedCertificates;                                        //@synthesize pinnedCertificates=_pinnedCertificates - In the implementation block
@property (assign,nonatomic) BOOL allowInvalidCertificates;                                       //@synthesize allowInvalidCertificates=_allowInvalidCertificates - In the implementation block
@property (nonatomic,retain) NSArray * pinnedPublicKeys;                                          //@synthesize pinnedPublicKeys=_pinnedPublicKeys - In the implementation block
+(id)defaultPinnedCertificates;
+(id)policyWithPinningMode:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingPinnedPublicKeys;
+(id)defaultPolicy;
-(void)setSSLPinningMode:(unsigned long long)arg1 ;
-(void)setPinnedCertificates:(NSArray *)arg1 ;
-(NSArray *)pinnedCertificates;
-(void)setPinnedPublicKeys:(NSArray *)arg1 ;
-(unsigned long long)SSLPinningMode;
-(BOOL)allowInvalidCertificates;
-(NSArray *)pinnedPublicKeys;
-(BOOL)evaluateServerTrust:(SecTrustRef)arg1 ;
-(void)setAllowInvalidCertificates:(BOOL)arg1 ;
@end
