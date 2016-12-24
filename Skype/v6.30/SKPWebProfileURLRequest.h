/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSMutableURLRequest.h>

@class NSString;

@interface SKPWebProfileURLRequest : NSMutableURLRequest {

	NSString* _ssoToken;
	NSString* _requestURLGoType;

}

@property (nonatomic,retain) NSString * ssoToken;                      //@synthesize ssoToken=_ssoToken - In the implementation block
@property (nonatomic,retain) NSString * requestURLGoType;              //@synthesize requestURLGoType=_requestURLGoType - In the implementation block
-(id)initWithSSOToken:(id)arg1 andGoToType:(long long)arg2 ;
-(void)setSsoToken:(NSString *)arg1 ;
-(void)setRequestURLGoType:(NSString *)arg1 ;
-(void)setupRequest;
-(NSString *)requestURLGoType;
-(NSString *)ssoToken;
@end
