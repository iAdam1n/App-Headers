/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString, NSMutableDictionary;

@interface MNMessagesSyncDeltaAdminTextMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSString* __type;
	NSMutableDictionary* __untypedData;
	BOOL __messageMetadata_isset;
	BOOL __type_isset;
	BOOL __untypedData_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setType:,getter=type,nonatomic,retain) NSString * type; 
@property (setter=setUntypedData:,getter=untypedData,nonatomic,retain) NSMutableDictionary * untypedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(void)setUntypedData:(NSMutableDictionary *)arg1 ;
-(id)initWithMessageMetadata:(id)arg1 type:(id)arg2 untypedData:(id)arg3 ;
-(BOOL)messageMetadataIsSet;
-(void)unsetMessageMetadata;
-(BOOL)typeIsSet;
-(void)unsetType;
-(NSMutableDictionary *)untypedData;
-(BOOL)untypedDataIsSet;
-(void)unsetUntypedData;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)validate;
-(void)write:(id)arg1 ;
@end

