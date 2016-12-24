/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBVersionedFileInfo : FBValueObject <NSCopying> {

	NSURL* _URL;
	NSString* _fileName;
	NSString* _ownerClassNameForAnalytics;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName;                                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerClassNameForAnalytics;              //@synthesize ownerClassNameForAnalytics=_ownerClassNameForAnalytics - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
-(id)initWithURL:(id)arg1 fileName:(id)arg2 ownerClassNameForAnalytics:(id)arg3 version:(id)arg4 ;
-(NSString *)ownerClassNameForAnalytics;
-(NSURL *)URL;
-(NSString *)version;
-(NSString *)fileName;
@end
