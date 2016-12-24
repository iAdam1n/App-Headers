/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBMediaUploadFlowLoggingInfo : FBValueObject <NSCopying> {

	NSString* _moduleName;
	NSDictionary* _loggingData;

}

@property (nonatomic,copy,readonly) NSString * moduleName;                   //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
-(NSDictionary *)loggingData;
-(NSString *)moduleName;
-(id)initWithModuleName:(id)arg1 loggingData:(id)arg2 ;
@end
