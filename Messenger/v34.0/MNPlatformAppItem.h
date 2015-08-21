/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSURL;

@interface MNPlatformAppItem : FBValueObject <NSCopying, NSCoding> {

	BOOL _installed;
	NSString* _appID;
	NSString* _storeID;
	NSString* _name;
	NSString* _shortDescription;
	NSURL* _iconURL;
	NSURL* _bannerURL;

}

@property (nonatomic,copy,readonly) NSString * appID;                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                       //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDescription;              //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iconURL;                          //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * bannerURL;                        //@synthesize bannerURL=_bannerURL - In the implementation block
@property (nonatomic,readonly) BOOL installed;                                //@synthesize installed=_installed - In the implementation block
-(id)initWithAppID:(id)arg1 storeID:(id)arg2 name:(id)arg3 shortDescription:(id)arg4 iconURL:(id)arg5 bannerURL:(id)arg6 installed:(BOOL)arg7 ;
-(NSURL *)bannerURL;
-(BOOL)installed;
-(NSString *)storeID;
-(NSString *)name;
-(NSString *)shortDescription;
-(NSURL *)iconURL;
-(NSString *)appID;
@end

