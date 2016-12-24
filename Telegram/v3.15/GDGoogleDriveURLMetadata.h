/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/GDURLMetadata.h>

@class GDGoogleDriveMetadata, NSString;

@interface GDGoogleDriveURLMetadata : NSObject <GDURLMetadata> {

	GDGoogleDriveURLMetadata* driveMetadata;
	GDGoogleDriveMetadata* _metadata;

}

@property (nonatomic,readonly) GDGoogleDriveMetadata * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileID; 
@property (nonatomic,copy,readonly) NSString * etag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDirectory,nonatomic,readonly) BOOL directory; 
@property (nonatomic,readonly) long long fileSize; 
@property (nonatomic,copy,readonly) NSString * fileVersionIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,readonly) GDGoogleDriveURLMetadata * driveMetadata; 
-(id)cacheableMetadata;
-(NSString *)fileVersionIdentifier;
-(GDGoogleDriveURLMetadata *)driveMetadata;
-(id)initWithGoogleDriveMetadata:(id)arg1 ;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(id)jsonDictionary;
-(BOOL)isDirectory;
-(NSString *)description;
-(BOOL)isValid;
-(NSString *)etag;
-(long long)fileSize;
-(NSString *)filename;
-(GDGoogleDriveMetadata *)metadata;
-(BOOL)isReadOnly;
-(NSString *)fileID;
@end
