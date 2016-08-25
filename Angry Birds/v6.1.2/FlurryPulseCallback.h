/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface FlurryPulseCallback : NSObject <NSCoding> {

	int _method;
	int _maxRedirects;
	int _connectTimeout;
	int _requestTimeout;
	NSString* _partner;
	NSString* _uriTemplate;
	NSString* _bodyTemplate;
	long long _callbackId;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSString * partner;                   //@synthesize partner=_partner - In the implementation block
@property (assign,nonatomic) int method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSString * uriTemplate;               //@synthesize uriTemplate=_uriTemplate - In the implementation block
@property (nonatomic,retain) NSString * bodyTemplate;              //@synthesize bodyTemplate=_bodyTemplate - In the implementation block
@property (assign,nonatomic) int maxRedirects;                     //@synthesize maxRedirects=_maxRedirects - In the implementation block
@property (assign,nonatomic) int connectTimeout;                   //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) int requestTimeout;                   //@synthesize requestTimeout=_requestTimeout - In the implementation block
@property (assign,nonatomic) long long callbackId;                 //@synthesize callbackId=_callbackId - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;               //@synthesize headers=_headers - In the implementation block
+(int)pulseMethodStringToEnum:(id)arg1 ;
+(id)pulseMethodsArrayInstance;
+(id)pulseMethodEnumToString:(int)arg1 ;
-(void)setPartner:(NSString *)arg1 ;
-(void)setUriTemplate:(NSString *)arg1 ;
-(void)setBodyTemplate:(NSString *)arg1 ;
-(void)setCallbackId:(long long)arg1 ;
-(void)setMaxRedirects:(int)arg1 ;
-(void)setRequestTimeout:(int)arg1 ;
-(long long)callbackId;
-(id)dataDictionary;
-(NSString *)partner;
-(NSString *)uriTemplate;
-(NSString *)bodyTemplate;
-(int)maxRedirects;
-(int)requestTimeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)method;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(int)connectTimeout;
-(void)setConnectTimeout:(int)arg1 ;
-(void)setMethod:(int)arg1 ;
@end

