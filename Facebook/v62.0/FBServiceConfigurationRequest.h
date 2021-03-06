/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceConfigurationRequesting.h>

@class NSDictionary, NSString;

@interface FBServiceConfigurationRequest : NSObject <FBServiceConfigurationRequesting> {

	NSDictionary* _HTTPheaders;
	unsigned long long _hardTimeout;

}

@property (nonatomic,copy,readonly) NSDictionary * HTTPheaders;              //@synthesize HTTPheaders=_HTTPheaders - In the implementation block
@property (nonatomic,readonly) unsigned long long hardTimeout;               //@synthesize hardTimeout=_hardTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHardTimeout:(unsigned long long)arg1 ;
-(void)setHTTPHeader:(id)arg1 withValue:(id)arg2 ;
-(unsigned long long)hardTimeout;
-(id)initWithHTTPHeaders:(id)arg1 hardTimeout:(unsigned long long)arg2 ;
-(NSDictionary *)HTTPheaders;
-(NSString *)description;
@end

