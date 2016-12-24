/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL;

@interface MNMatchedSMSBridgeThread : FBValueObject <NSCopying> {

	NSString* _threadFbId;
	NSString* _customName;
	NSDictionary* _participantIdsToNamesExcludingSelf;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSString * threadFbId;                                          //@synthesize threadFbId=_threadFbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * customName;                                          //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantIdsToNamesExcludingSelf;              //@synthesize participantIdsToNamesExcludingSelf=_participantIdsToNamesExcludingSelf - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                               //@synthesize imageURL=_imageURL - In the implementation block
-(NSString *)threadFbId;
-(NSDictionary *)participantIdsToNamesExcludingSelf;
-(id)initWithThreadFbId:(id)arg1 customName:(id)arg2 participantIdsToNamesExcludingSelf:(id)arg3 imageURL:(id)arg4 ;
-(NSURL *)imageURL;
-(NSString *)customName;
@end
