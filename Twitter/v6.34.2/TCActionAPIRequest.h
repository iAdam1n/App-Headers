/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TCActionAPIRequest : NSObject {

	long long _method;
	NSArray* _parameters;
	long long _onSuccessActionID;
	long long _onFailureActionID;
	NSString* _apiProxyRule;

}

@property (assign,nonatomic) long long method;                         //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSArray * parameters;                     //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) long long onSuccessActionID;              //@synthesize onSuccessActionID=_onSuccessActionID - In the implementation block
@property (assign,nonatomic) long long onFailureActionID;              //@synthesize onFailureActionID=_onFailureActionID - In the implementation block
@property (nonatomic,retain) NSString * apiProxyRule;                  //@synthesize apiProxyRule=_apiProxyRule - In the implementation block
-(long long)onSuccessActionID;
-(long long)onFailureActionID;
-(NSString *)apiProxyRule;
-(void)setOnSuccessActionID:(long long)arg1 ;
-(void)setOnFailureActionID:(long long)arg1 ;
-(void)setApiProxyRule:(NSString *)arg1 ;
-(id)description;
-(long long)method;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(void)setMethod:(long long)arg1 ;
@end

