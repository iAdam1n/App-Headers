/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaThreadName : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSString* __name;
	BOOL __messageMetadata_isset;
	BOOL __name_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setName:,getter=name,nonatomic,retain) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(BOOL)messageMetadataIsSet;
-(void)unsetMessageMetadata;
-(id)initWithMessageMetadata:(id)arg1 name:(id)arg2 ;
-(BOOL)nameIsSet;
-(void)unsetName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)validate;
-(void)write:(id)arg1 ;
@end

