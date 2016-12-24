/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingMessagingCollectionAddress, NSString;

@interface MNSecureMessagingPrimaryDeviceChangePayload : NSObject <TBase, NSCoding> {

	MNSecureMessagingMessagingCollectionAddress* __msg_to;
	NSString* __suggested_codename;
	BOOL __msg_to_isset;
	BOOL __suggested_codename_isset;

}

@property (setter=setMsg_to:,getter=msg_to,nonatomic,retain) MNSecureMessagingMessagingCollectionAddress * msg_to; 
@property (setter=setSuggested_codename:,getter=suggested_codename,nonatomic,retain) NSString * suggested_codename; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNSecureMessagingMessagingCollectionAddress *)msg_to;
-(void)setMsg_to:(MNSecureMessagingMessagingCollectionAddress *)arg1 ;
-(BOOL)msg_toIsSet;
-(void)unsetMsg_to;
-(void)setSuggested_codename:(NSString *)arg1 ;
-(NSString *)suggested_codename;
-(BOOL)suggested_codenameIsSet;
-(void)unsetSuggested_codename;
-(id)initWithMsg_to:(id)arg1 suggested_codename:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
