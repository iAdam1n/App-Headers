/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMediaUploadContentSource, FBMediaUploadConfig, NSString;

@interface FBMediaUploadJobDetail : FBValueObject <NSCopying, NSCoding> {

	FBMediaUploadContentSource* _contentSource;
	FBMediaUploadConfig* _config;
	NSString* _token;

}

@property (nonatomic,copy,readonly) FBMediaUploadContentSource * contentSource;              //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,copy,readonly) FBMediaUploadConfig * config;                            //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                                        //@synthesize token=_token - In the implementation block
-(FBMediaUploadContentSource *)contentSource;
-(id)initWithContentSource:(id)arg1 config:(id)arg2 token:(id)arg3 ;
-(FBMediaUploadConfig *)config;
-(NSString *)token;
@end
