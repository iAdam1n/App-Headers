/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PGPhotoFilterDefinition : NSObject {

	int _type;
	NSString* _identifier;
	NSString* _title;
	NSString* _lookupFilename;
	NSString* _shaderFilename;
	NSArray* _textureFilenames;

}

@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * lookupFilename;               //@synthesize lookupFilename=_lookupFilename - In the implementation block
@property (nonatomic,readonly) NSString * shaderFilename;               //@synthesize shaderFilename=_shaderFilename - In the implementation block
@property (nonatomic,readonly) NSArray * textureFilenames;              //@synthesize textureFilenames=_textureFilenames - In the implementation block
+(id)originalFilterDefinition;
+(id)definitionWithDictionary:(id)arg1 ;
-(NSString *)shaderFilename;
-(NSArray *)textureFilenames;
-(NSString *)lookupFilename;
-(NSString *)identifier;
-(int)type;
-(NSString *)title;
@end
