/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AFNetworking/AFHTTPClient.h>
#import <Palaver/PLVImageServiceProtocol.h>

@class NSString;

@interface PLVCloudAppAPIClient : AFHTTPClient <PLVImageServiceProtocol> {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,retain) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privacyPolicyURL;
+(id)serviceName;
+(id)serviceDomain;
-(void)getPath:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)uploadImage:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)verifySuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

