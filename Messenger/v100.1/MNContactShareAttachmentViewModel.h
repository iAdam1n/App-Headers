/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface MNContactShareAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shownInContactBubble;
	NSString* _name;
	NSString* _username;
	NSString* _contextString;
	NSString* _userId;
	NSURL* _contactURL;
	unsigned long long _attachmentType;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextString;                  //@synthesize contextString=_contextString - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                         //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contactURL;                        //@synthesize contactURL=_contactURL - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentType;              //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,readonly) BOOL shownInContactBubble;                      //@synthesize shownInContactBubble=_shownInContactBubble - In the implementation block
-(NSURL *)contactURL;
-(BOOL)shownInContactBubble;
-(id)initWithName:(id)arg1 username:(id)arg2 contextString:(id)arg3 userId:(id)arg4 contactURL:(id)arg5 attachmentType:(unsigned long long)arg6 shownInContactBubble:(BOOL)arg7 ;
-(NSString *)name;
-(NSString *)userId;
-(NSString *)username;
-(unsigned long long)attachmentType;
-(NSString *)contextString;
@end
