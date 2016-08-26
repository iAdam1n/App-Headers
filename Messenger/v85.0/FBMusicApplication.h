/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBMusicApplication : FBValueObject <NSCopying> {

	NSString* _fbid;
	NSString* _name;
	NSURL* _squareLogoURL;
	NSURL* _iOSAppStoreURL;
	unsigned long long _appType;

}

@property (nonatomic,copy,readonly) NSString * fbid;                     //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * squareLogoURL;               //@synthesize squareLogoURL=_squareLogoURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iOSAppStoreURL;              //@synthesize iOSAppStoreURL=_iOSAppStoreURL - In the implementation block
@property (nonatomic,readonly) unsigned long long appType;               //@synthesize appType=_appType - In the implementation block
-(NSString *)fbid;
-(id)initWithFbid:(id)arg1 name:(id)arg2 squareLogoURL:(id)arg3 iOSAppStoreURL:(id)arg4 appType:(unsigned long long)arg5 ;
-(NSURL *)squareLogoURL;
-(NSURL *)iOSAppStoreURL;
-(unsigned long long)appType;
-(NSString *)name;
@end
