/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CDResourceMeta;

@interface CDResourceMetaPair : NSObject {

	NSString* _key;
	CDResourceMeta* _meta;

}

@property (nonatomic,readonly) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) CDResourceMeta * meta;              //@synthesize meta=_meta - In the implementation block
-(CDResourceMeta *)meta;
-(id)initWithKey:(id)arg1 meta:(id)arg2 ;
-(NSString *)key;
@end
