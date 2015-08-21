/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <ECBCricketApp/GCKPB_PBRootObject.h>
#import <ECBCricketApp/PBMutableArrayDelegate.h>
#import <ECBCricketApp/NSCoding.h>
#import <ECBCricketApp/NSCopying.h>
#import <ECBCricketApp/NSMutableCopying.h>

@class GCKPB_PBUnknownFieldSet, NSMutableDictionary, GCKPB_PBFieldDescriptor, GCKPB_PBExtensionField;

@interface GCKPB_PBGeneratedMessage : GCKPB_PBRootObject <PBMutableArrayDelegate, NSCoding, NSCopying, NSMutableCopying> {

	GCKPB_PBUnknownFieldSet* unknownFields_;
	NSMutableDictionary* extensionMap_;
	NSMutableDictionary* autocreatedExtensionMap_;
	GCKPB_PBGeneratedMessage* autocreator_;
	GCKPB_PBFieldDescriptor* autocreatorField_;
	GCKPB_PBExtensionField* autocreatorExtension_;
	PBGeneratedMessage_StorageRef messageStorage_;
	int readOnlyMutex_;

}

@property (nonatomic,retain) GCKPB_PBUnknownFieldSet * unknownFields; 
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
+(id)parseFromData:(id)arg1 ;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)newMessageWithAutocreator:(id)arg1 extension:(id)arg2 ;
+(id)newMessageWithAutocreator:(id)arg1 field:(id)arg2 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)message;
+(id)descriptor;
+(id)builder;
+(id)alloc;
-(void)pbMutableArray:(id)arg1 willAddElements:(unsigned long long)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(unsigned long long)serializedSize;
-(void)addExtension:(id)arg1 value:(id)arg2 ;
-(id)getExistingExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 value:(id)arg2 ;
-(void)internalClear;
-(void)copyFieldsInto:(id)arg1 zone:(NSZone*)arg2 ;
-(BOOL)wasAutocreatedBy:(id)arg1 ;
-(void)clearAutocreator;
-(BOOL)isInitialized:(id)arg1 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg1 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2 ;
-(void)writeField:(id)arg1 toCodedOutputStream:(id)arg2 ;
-(void)clearExtension:(id)arg1 ;
-(void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)setUnknownFields:(GCKPB_PBUnknownFieldSet *)arg1 ;
-(void)mergeUnknownFields:(id)arg1 ;
-(id)mutableUnknownFields;
-(void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2 ;
-(BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned)arg3 ;
-(unsigned long long)extensionsSerializedSize;
-(id)delimitedData;
-(void)writeToOutputStream:(id)arg1 ;
-(void)writeDelimitedToOutputStream:(id)arg1 ;
-(id)getExtension:(id)arg1 ;
-(BOOL)hasExtension:(id)arg1 ;
-(id)extensionsCurrentlySet;
-(id)sortedExtensionsInUse;
-(void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3 ;
-(id)build;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)descriptor;
-(BOOL)isInitialized;
-(id)builder;
-(GCKPB_PBUnknownFieldSet *)unknownFields;
-(void)mergeFrom:(id)arg1 ;
@end
