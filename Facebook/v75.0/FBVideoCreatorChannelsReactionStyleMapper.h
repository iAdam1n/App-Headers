/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionStyleMapper.h>
#import <Facebook/FBReactionRequestSupportedStylesProtocol.h>

@class NSArray, NSString, NSDictionary;

@interface FBVideoCreatorChannelsReactionStyleMapper : NSObject <FBReactionStyleMapper, FBReactionRequestSupportedStylesProtocol> {

	NSArray* _supportedActionStyles;
	NSArray* _supportedAttachmentsStyles;
	NSArray* _supportedUnitComponentStyles;
	NSArray* _supportedHeaderStyles;
	NSArray* _supportedUnitStyles;
	NSString* _persistIDForActionStyles;
	NSString* _persistIDForAttachmentStyles;
	NSString* _persistIDForHeaderStyles;
	NSString* _persistIDForUnitComponentStyles;
	NSString* _persistIDForUnitStyles;
	NSDictionary* _unitMap;
	NSDictionary* _brickMap;
	NSDictionary* _headerMap;
	NSDictionary* _attachmentsMap;
	NSDictionary* _actionMap;

}

@property (nonatomic,copy,readonly) NSDictionary * unitMap;                                  //@synthesize unitMap=_unitMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * brickMap;                                 //@synthesize brickMap=_brickMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headerMap;                                //@synthesize headerMap=_headerMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attachmentsMap;                           //@synthesize attachmentsMap=_attachmentsMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionMap;                                //@synthesize actionMap=_actionMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * supportedActionStyles;                         //@synthesize supportedActionStyles=_supportedActionStyles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedAttachmentsStyles;                    //@synthesize supportedAttachmentsStyles=_supportedAttachmentsStyles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedUnitComponentStyles;                  //@synthesize supportedUnitComponentStyles=_supportedUnitComponentStyles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedHeaderStyles;                         //@synthesize supportedHeaderStyles=_supportedHeaderStyles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedUnitStyles;                           //@synthesize supportedUnitStyles=_supportedUnitStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistIDForActionStyles;                     //@synthesize persistIDForActionStyles=_persistIDForActionStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistIDForAttachmentStyles;                 //@synthesize persistIDForAttachmentStyles=_persistIDForAttachmentStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistIDForUnitComponentStyles;              //@synthesize persistIDForUnitComponentStyles=_persistIDForUnitComponentStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistIDForHeaderStyles;                     //@synthesize persistIDForHeaderStyles=_persistIDForHeaderStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistIDForUnitStyles;                       //@synthesize persistIDForUnitStyles=_persistIDForUnitStyles - In the implementation block
+(id)videoComponentsMap;
+(id)actionMap;
+(id)videoUnitsMap;
+(id)new;
-(NSDictionary *)unitMap;
-(NSDictionary *)brickMap;
-(NSDictionary *)headerMap;
-(NSDictionary *)attachmentsMap;
-(NSDictionary *)actionMap;
-(NSArray *)supportedActionStyles;
-(NSArray *)supportedAttachmentsStyles;
-(NSArray *)supportedUnitComponentStyles;
-(NSArray *)supportedHeaderStyles;
-(NSArray *)supportedUnitStyles;
-(NSString *)persistIDForActionStyles;
-(NSString *)persistIDForAttachmentStyles;
-(NSString *)persistIDForUnitComponentStyles;
-(NSString *)persistIDForHeaderStyles;
-(NSString *)persistIDForUnitStyles;
-(id)initWithUnitMap:(id)arg1 brickMap:(id)arg2 headerMap:(id)arg3 attachmentsMap:(id)arg4 actionMap:(id)arg5 persistIDForUnitStyles:(id)arg6 persistIDForUnitComponentStyles:(id)arg7 persistIDForHeaderStyles:(id)arg8 persistIDForAttachmentStyles:(id)arg9 persistIDForActionStyles:(id)arg10 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

