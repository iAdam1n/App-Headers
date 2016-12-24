/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServiceAuthData : FBValueObject <NSCopying> {

	BOOL _hasAuthorized;
	NSString* _authorizationUrlString;
	NSString* _redirectUrlString;

}

@property (nonatomic,readonly) BOOL hasAuthorized;                                  //@synthesize hasAuthorized=_hasAuthorized - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorizationUrlString;              //@synthesize authorizationUrlString=_authorizationUrlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * redirectUrlString;                   //@synthesize redirectUrlString=_redirectUrlString - In the implementation block
-(BOOL)hasAuthorized;
-(id)initWithHasAuthorized:(BOOL)arg1 authorizationUrlString:(id)arg2 redirectUrlString:(id)arg3 ;
-(NSString *)authorizationUrlString;
-(NSString *)redirectUrlString;
@end
